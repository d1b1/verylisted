<?php

function vl_mls_admin_settings() {

  $form['vl_mls_account_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('MLSpin Login Settings'),
    '#description' => t('This module provides a link to the www.MLSpin.com IDX data using your username and password. This IDX server provides access to the following states: MA, CT, NY, ME, NH, VT, RI'),
  );
  $form['vl_mls_account_settings']['vl_mls_username'] = array(
    '#type' => 'textfield',
    '#title' => t('UserName'),
    '#default_value' => variable_get('vl_mls_username', ''),
	'#size' => 20,
    '#required' => TRUE,
    '#description' => t('Please enter your MLSpin username.'),
  );
  $form['vl_mls_account_settings']['vl_mls_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('vl_mls_password', ''),
	'#size' => 20,
    '#required' => TRUE,
    '#description' => t('Please enter your MLSpin account password. Please note that you must update this value when you change your MLS account password on the mlspin.com site.'),
  );
  $form['vl_mls_account_settings']['vl_mls_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#default_value' => variable_get('vl_mls_url', 'http://idx.mlspin.com'),
    '#description' => t('Please enter the MLSpin data url.'),
  );
  
  $form['vl_mls_cron_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('CRON Settings'),
    '#description' => t('These settings allow you to configure the CRON process and the 
        size for each process. If the cron is set to run more then once per day, I recommend
        you set the size to a lower number to prevent the process from affecting the 
        site performance. Not - This process can run for a while.'),
  );
  $form['vl_mls_cron_settings']['vl_mls_enable_cron'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable MLSpin cron synch process.'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_enable_cron', FALSE),
    '#description' => t('When enabled, the site will synch your listings with MLSpin.'),
  );
  $form['vl_mls_cron_settings']['vl_mls_cron_num_records'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of Listings Per Cron'),
    '#default_value' => variable_get('vl_mls_cron_num_records', '10'),
	'#size' => 10,
    '#description' => t('Enter the number of records to process in each cron process.'),
  );
  $form['vl_mls_cron_settings']['vl_mls_cron_getremotephotos'] = array(
    '#type' => 'checkbox',
    '#title' => t('Get MLS Photo during import? (No Implimented Yet)'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_cron_getremotephotos', FALSE),
    '#description' => t('When enabled the cron process will attempt to access, and grab the 
        photo files on MLS and store locally, as well as attach to the listing. Not, this 
        will use of space and add to the process time.'),
  );
  
  $form['vl_mls_property_types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Property Types (Stubbed Settings)'),
    '#collapsible' => TRUE, 
    '#collapsed' => TRUE, 
	'#description' => t('The following options provides the ability to customize the type
        of listings imported from the MLS Service. These options are not implimented yet. 
        Sorry. This is on the roadmap.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_cc'] = array(
    '#type' => 'checkbox',
    '#title' => t('Condos'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_cc', 1),
    '#description' => t('When enabled, this option will include Condos Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_sf'] = array(
    '#type' => 'checkbox',
    '#title' => t('Single Family'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_sf', 1),
    '#description' => t('When enabled, this option will include Singel Family Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_ci'] = array(
    '#type' => 'checkbox',
    '#title' => t('Commercial'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_ci', 1),
    '#description' => t('When enabled, this option will include Commercial Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_mf'] = array(
    '#type' => 'checkbox',
    '#title' => t('Mobile Homes'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_mf', 1),
    '#description' => t('When enabled, this option will include Mobile Home Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_bu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Business Opportunity'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_bu', 1),
    '#description' => t('When enabled, this option will include Business Opportunity Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_ld'] = array(
    '#type' => 'checkbox',
    '#title' => t('Land'),
    '#return_value' => '1',
    '#default_value' => variable_get('verylisted_prop_types_ld', 1),
    '#description' => t('When enabled, this option will include Land Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_rn'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rentals'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_rn', 1),
    '#description' => t('When enabled, this option will include Rental Listings.'),
  );
  $form['vl_mls_property_types']['vl_mls_prop_types_mf'] = array(
    '#type' => 'checkbox',
    '#title' => t('Multi-Family'),
    '#return_value' => '1',
    '#default_value' => variable_get('vl_mls_prop_types_mf', 1),
    '#description' => t('When enabled, this option will include Multi-Family Listings. '),
  );
  
  $form['vl_mls_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manual Import'),
	'#description' => t("<div id='mls-statictics'></div><br><div id='poll-choices'></div>"),
  );
  $form['vl_mls_options']['vl_mls_getstats_btn'] = array(
    '#type' => 'submit',
    '#title' => t('Get MLSpin Listing Statistics'),
	'#value' => 'Get MLS  Listing Stats',
    '#description' => t("If the amount of boxes above isn't enough, click here to add more choices. <div id='poll-choices'>kkk</div>"),
    '#weight' => 1,
    '#submit' => array('poll_more_choices_submit'), // If no javascript action.
    '#ahah' => array(
      'path' => 'admin/settings/verylisted/mls/statistics',
      'wrapper' => 'mls-statictics',
      'method' => 'replace',
      'effect' => 'fade',
      ),
    );
  $form['vl_mls_options']['vl_mls_processlisting_btn'] = array(
    '#type' => 'submit',
    '#title' => t('Process 10 Listings'),
	'#value' => 'Process 10 Listings',
    '#description' => t("If the amount of boxes above isn't enough, click here to add more choices. <div id='poll-choices'>kkk</div>"),
    '#weight' => 1,
    '#submit' => array('poll_more_choices_submit'), // If no javascript action.
    '#ahah' => array(
      'path' => 'admin/settings/verylisted/mls/process',
      'wrapper' => 'mls-statictics',
      'method' => 'replace',
      'effect' => 'fade',
      ),
    );
  $form['vl_mls_options']['vl_mls_manual_btn'] = array(
    '#type' => 'submit',
    '#title' => t('Force Manual Import'),
	'#value' => 'Force Manual Import',
    '#description' => t("If the amount of boxes above isn't enough, click here to add more choices. <div id='poll-choices'></div>"),
    '#weight' => 1,
    '#submit' => array('poll_more_choices_submit'), // If no javascript action.
    '#ahah' => array(
      'path' => 'admin/settings/verylisted/mls/force',
      'wrapper' => 'poll-choices',
      'method' => 'replace',
      'effect' => 'fade',
      ),
    );
  return system_settings_form($form);
}

/*
 This function is a manual process that inports 10 records at a time.
 It looks for null nid and generates the new node records and updates
 the mlsdata table.
 
 TODO: Add in the options for different prop types.
 */
 
function _vl_mls_process_listings() {

  $sql = "SELECT list_no, street_no, street_name, zip_code, 
                 square_feet, t.long as city, t.state, t.county 
		  FROM {mlsdata_cc} d 
		  LEFT JOIN {mlsdata_towns} t on (t.town_num = d.town_num) 
		  WHERE ifNull(nid,0) = 0
		  LIMIT 10";
		  
  $result = db_query($sql);

  $msg = 'To Process:<br>';
  $sqlformat = "UPDATE {mlsdata_cc} set nid=%d, city = '%s', county = '%s', state = upper('%s') where list_no = '%s';";
	
  $i = 0;
  while ($data = db_fetch_object($result)) {
    $titlestr = trim($data->street_no) . '  ' . trim($data->street_name) . ', ' . trim($data->city) . ', ' . trim($data->state) . ', ' . trim($data->zip_code);
	$node = new stdClass();
	$node->type = 'property';
	$node->title = $titlestr;
	$node->list_no = trim($data->list_no);
	$node->body = '';
	$node->teaser = '';
	$node->status = 1;
	$node->promote = 1;
	
    _vl_mls_attach_remote_images($node);
	node_save($node);
	
	$msg = $msg .  $i . ' #' . $data->list_no . '  at ' . $data->street_no . '  ' . $data->street_name . ' vid:' . $node->vid .' <br>';
    db_query($sqlformat, $node->nid, trim($data->city),  trim($data->county), trim($data->state),  $data->list_no );
    $i += 1;
  }
 
  return drupal_json(array('status' => TRUE, 'data' => 'Statistics:' .$msg ));
}

/* 
 This function gets valid statistics on the number of records in the 
 MLSData_CC table that have corresponding nodes.
 
 TODO: Add in the other property types.
 TODO: Add in a other count fields for total records, etc.
 */
 
function _vl_mls_get_listing_statistics() {

  $sql = 'select count(*)  as totalrecs from {mlsdata_cc} where ifnull(nid,0) > 0';
  $results = db_query($sql);
  
  $row = db_result($results);
  $msg = 'Total Records:' . $row . '.';
  
  return drupal_json(array('status' => TRUE, 'data' => 'Stats:' .$msg ));
}

/*
 This function generates the raw text files and imports them into the 
 data tables. This process needs to have the Prop Type values added.
 */
 
function _vl_mls_import_pipe_data() {

     $u = variable_get('vl_mls_username', '');
     $p = variable_get('vl_mls_password', '');
     $h = variable_get('vl_mls_url', '');
     
     //-------------------------------------------------------------------
     $url = $h.'/areas.asp';     
     $xml = drupal_http_request($url);
	 $msg .= '<b>Connecting to MLS idx.mlspin.com server.</b><br>';
	
      if (isset($xml->data)) {

	     $file_path = file_directory_path() . '/mlsdata_areas.txt';
	     $ourFileHandle = fopen($file_path, 'w') or die("can't open file");
		 fwrite($ourFileHandle, $xml->data);
	
	    $msg .=  '1. Generated the local ' . file_create_filename( 'mlsdata_areas.txt', file_directory_path() ) . '<br>';
		$sql = "LOAD DATA LOCAL INFILE 'sites/default/files/mlsdata_areas.txt'  REPLACE INTO TABLE vl_areas FIELDS TERMINATED BY '\|';";
		
		$results = db_query($sql);
		$msg .= 'Updated Module table.<br>';
      }
      else {
        // Connection likely broken; prepare to give up.
        //$fail[$fetch_url_base][$key] = 1;
		$msg .= "1. Got no Data for areas table.<br>";
      }
	  
	 //--------------------------------------------------------------------------------------------------------
     $url = $h."/towns.asp";
     $xml = drupal_http_request($url);
	 
      if (isset($xml->data)) {

	     $file_path = file_directory_path() . '/mlsdata_towns.txt';
	     $ourFileHandle = fopen($file_path, 'w') or die("can't open file");
		 fwrite($ourFileHandle, $xml->data);
	
	    $msg .= '2. Generated the local ' . file_create_filename( 'mlsdata_cc.txt', file_directory_path() ) . '<br>';
		$sql = "LOAD DATA LOCAL INFILE 'sites/default/files/mlsdata_towns.txt'  REPLACE INTO TABLE mlsdata_towns FIELDS TERMINATED BY '\|';";
		
		$results = db_query($sql);
		$msg .= 'Updated Module table.<br>';
      }
      else {
        // Connection likely broken; prepare to give up.
        //$fail[$fetch_url_base][$key] = 1;
		$msg .= "2. Got no Data for Towns Table<br>";
      }
	  
	 //--------------------------------------------------------------------------------------------------------
	 // Get the CC prop type. 
	 
     $url = $h."/idx.asp?user=".$u."&pass=".$p."&proptype=CC";
     $xml = drupal_http_request($url);

      if (isset($xml->data)) {

	     $file_path = file_directory_path() . '/mlsdata_cc.txt';
	     $ourFileHandle = fopen($file_path, 'w') or die("can't open file");
		 fwrite($ourFileHandle, $xml->data);
	
	     $msg .= '3. Generated the local '.file_create_filename( 'mlsdata_cc.txt', file_directory_path() ) . '<br>';
		 $sql = "LOAD DATA LOCAL INFILE 'sites/default/files/mlsdata_cc.txt' REPLACE INTO TABLE mlsdata_cc FIELDS TERMINATED BY '\|' IGNORE 1 LINES;";
		
		 $results = db_query($sql);
		 $msg .= 'Updated Module table.<br>';
      }
      else {
        // Connection likely broken; prepare to give up.
        //$fail[$fetch_url_base][$key] = 1;
		$msg .= "3. Got no Data CC Listings.<br>";
      }

	 //--------------------------------------------------------------------------------------------------------
	 // Get all the data. 
	 
	 $url = $h."/idx.asp?user=".$u."&pass=".$p;
     $xml = drupal_http_request($url);

      if (isset($xml->data)) {

	     $file_path = file_directory_path() . '/mlsdata_all.txt';
	     $ourFileHandle = fopen($file_path, 'w') or die("can't open file");
		 fwrite($ourFileHandle, $xml->data);
	
	     //$msg =  $msg . '2. Generated the local '.file_create_filename( 'mlsdata_cc.txt', file_directory_path() ) . '<br>';
		 //$sql = "LOAD DATA LOCAL INFILE 'sites/default/files/mlsdata_cc.txt' REPLACE INTO TABLE mlsdata_cc IGNORE 1 LINES FIELDS TERMINATED BY '\|';";
		
		 //$results = db_query($sql);
		 //$msg = $msg . 'Updated Module table.<br>';
      }
      else {
        // Connection likely broken; prepare to give up.
        //$fail[$fetch_url_base][$key] = 1;
		$msg .= "Got no Data All Table<br>";
      }
      
	  $msg = $msg . '4. Preparing Node update.<br>';
		
  return drupal_json(array('status' => TRUE, 'data' => "MLS Live Sych:<br><blockquote>" . $msg . '</blockquote>'  ));
}
