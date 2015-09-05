<?php
/**
 * @file
 * ticket_sales.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ticket_sales_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle commerce_ticket'.
  $permissions['create commerce_product entities of bundle commerce_ticket'] = array(
    'name' => 'create commerce_product entities of bundle commerce_ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle commerce_ticket'.
  $permissions['edit any commerce_product entity of bundle commerce_ticket'] = array(
    'name' => 'edit any commerce_product entity of bundle commerce_ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle commerce_ticket'.
  $permissions['edit own commerce_product entities of bundle commerce_ticket'] = array(
    'name' => 'edit own commerce_product entities of bundle commerce_ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle commerce_ticket'.
  $permissions['view any commerce_product entity of bundle commerce_ticket'] = array(
    'name' => 'view any commerce_product entity of bundle commerce_ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle commerce_ticket'.
  $permissions['view own commerce_product entities of bundle commerce_ticket'] = array(
    'name' => 'view own commerce_product entities of bundle commerce_ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
