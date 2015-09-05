<?php
/**
 * @file
 * ticket_sales.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ticket_sales_commerce_product_default_types() {
  $items = array(
    'commerce_ticket' => array(
      'type' => 'commerce_ticket',
      'name' => 'Commerce Ticket',
      'description' => 'A commerce ticket product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ticket_sales_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
