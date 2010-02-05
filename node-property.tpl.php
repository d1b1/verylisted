<?php
  global $base_url; 
?>
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

<?php print $picture ?>

<?php if ($page == 0): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>


  <div class="content clear-block">
    
	<? $f = $node->field_photos; ?>
	<? $primaryimage = $base_url."/".$f[0]["filepath"]; ?>
	
	<h2>
	<?php print $node->street_no; ?> 
	<?php print $node->street_name; ?>
	<?php print $node->unit_no; ?>
	<?php print $node->city; ?>,
	<?php print $node->state; ?>
	<?php print $node->zip_code; ?>
	</H2>
	
	<h2>
	Price: $<?php print $node->list_price; ?> 
	</H2>
	
	<div style="width: 250px; position: relative; padding: 0px; margin:0px !important; float: right;">
    <table width="200" align="right" style="padding: 0px; margin:0px !important;" border=1>
	  <tr>
	    <td align="right">MLS ID:</td>
		<td><?php print $node->list_no; ?></td>
	  </tr>
	  <tr>
	    <td align="right">List Price:</td>
		<td><?php print $node->list_price; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Square Feet:</td>
		<td><?php print $node->square_feet; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Rooms:</td>
		<td><?php print $node->no_rooms; ?></td>
	  </tr>
	  <tr>
	    <td align="right"># of Levels:</td>
		<td><?php print $node->no_living_levels; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Style:</td>
		<td><?php print $node->style; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Status:</td>
		<td><?php print $node->status; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Property Type:</td>
		<td><?php print $node->cc_type; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Lot Size:</td>
		<td><?php print $node->lot_size; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Acres:</td>
		<td><?php print $node->acre; ?></td>
	  </tr>
	  <tr>
	    <td align="right">Full/Half Bath:</td>
		<td><?php print $node->no_full_baths; ?>/<?php print $node->no_half_baths; ?></td>
	  </tr>
	</table>
	</div>
	
	<div style="border:1px solid #DFDFDF; height: 350px; width: 400px; overflow: hidden; position:relative; float: left;">
	<img src="<?php print $primaryimage; ?>">
	</div>
	
    <? echo $$output; ?>
    	
    <div style="width: 600px; position: relative; float: left;">	
	<?php print $node->body; ?>
	</div>
	

	<BR style="clear: both;" >
	
	<div style="padding :4px; margin-top: 10px; width: 99%; border:1px solid #DFDFDF;" >
	<? $ff = $node->field_photos_gallery; ?>

	<? for ( $c = 0; $c <= count($ff)-1; $c += 1) { ?>
	<? $d = $ff[$c]["filepath"]; ?>
	<img src="<?php print $base_url.'/'.$d; ?>" width="100">
	<? } ?>
    </div>
	
	
    <?php //print $content ?>
  </div>

  <div class="clear-block">
    <div class="meta">
    <?php if ($taxonomy): ?>
      <div class="terms"><?php print $terms ?></div>
    <?php endif;?>
    </div>

    <?php if ($links): ?>
      <div class="links"><?php print $links; ?></div>
    <?php endif; ?>
  </div>

</div>
