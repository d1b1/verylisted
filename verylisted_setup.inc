<?php

function verylisted_add_primary_imagefield($type = NULL) {
  module_load_include('inc', 'imagefield', 'imagefield_widget');
  module_load_include('inc', 'filefield', 'filefield_widget');
  module_load_include('inc', 'content', 'includes/content.crud');

  $label = t('Listing Image');
  $field = array(
    'label' => $label,
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'weight' => -2,
    'file_extensions' => 'gif jpg png jpeg',
    'custom_alt' => 1,
    'custom_title' => 1,
    'description' => 'Primary Listing Photo',
    'required' => 0,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => array(
      'fid' => array( 'type' => 'int', 'not null' => FALSE, ),
      'list' => array( 'type' => 'int', 'size' => 'tiny', 'not null' => FALSE, ),
      'data' => array( 'type' => 'text', 'serialize' => TRUE, ),
    ),
    'display_settings' => array(
      'label' => array( 'format' => 'hidden', ),
      'teaser' => array( 'format' => 'hidden', ),
      'full' => array( 'format' => 'hidden',),
      4 => array( 'format' => 'hidden', ),
    ),
  );
  
  if (module_exists('imagefield_tokens')) {
    $field['alt'] = '[title]';
    $field['title'] = '[title]';
  }

  $type = 'property';
  $types = (array) $type;

  foreach ($types as $type) {
    $field['type_name'] = $type;
    $field_name = 'field_photos';
    $field['field_name'] = $field_name;

    $instances = content_field_instance_read(array('field_name' => $field_name, 'type_name' => $type));

    if (count($instances) < 1) {
      content_field_instance_create($field);
    }
  }

}

function verylisted_add_gallery_imagefield($type = NULL) {
  module_load_include('inc', 'imagefield', 'imagefield_widget');
  module_load_include('inc', 'filefield', 'filefield_widget');
  module_load_include('inc', 'content', 'includes/content.crud');

  $label = t('Photo Gallery');
  $field = array(
    'label' => $label,
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'weight' => -2,
    'file_extensions' => 'gif jpg png jpeg',
    'custom_alt' => 1,
    'custom_title' => 1,
    'description' => 'Primary Listing Photo',
    'required' => 0,
    'multiple' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => array(
      'fid' => array( 'type' => 'int', 'not null' => FALSE, ),
      'list' => array( 'type' => 'int', 'size' => 'tiny', 'not null' => FALSE, ),
      'data' => array( 'type' => 'text', 'serialize' => TRUE, ),
    ),
    'display_settings' => array(
      'label' => array( 'format' => 'hidden', ),
      'teaser' => array( 'format' => 'hidden', ),
      'full' => array( 'format' => 'hidden',),
      4 => array( 'format' => 'hidden', ),
    ),
  );
  
  if (module_exists('imagefield_tokens')) {
    $field['alt'] = '[title]';
    $field['title'] = '[title]';
  }

  $type = 'property';
  $types = (array) $type;

  foreach ($types as $type) {
    $field['type_name'] = $type;
    $field_name = 'field_photos_gallery';
    $field['field_name'] = $field_name;

    $instances = content_field_instance_read(array('field_name' => $field_name, 'type_name' => $type));

    if (count($instances) < 1) {
      content_field_instance_create($field);
    }
  }

}
