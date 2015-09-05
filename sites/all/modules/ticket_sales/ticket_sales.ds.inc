<?php
/**
 * @file
 * ticket_sales.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function ticket_sales_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'show_tickets_sales';
  $ds_field->label = 'Conditional Show/Hide Ticket Sales';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'event|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  $field = field_get_items(\'node\', $entity, \'field_track_tickets_for_this_eve\');
  if ($field[0][value]) {
   print render(field_view_field(\'node\', $entity, \'field_buy_tickets\'));
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['show_tickets_sales'] = $ds_field;

  return $export;
}
