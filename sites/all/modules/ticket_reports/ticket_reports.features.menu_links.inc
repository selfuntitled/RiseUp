<?php
/**
 * @file
 * ticket_reports.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ticket_reports_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_ticket-sales-report:ticket-report
  $menu_links['management_ticket-sales-report:ticket-report'] = array(
    'menu_name' => 'management',
    'link_path' => 'ticket-report',
    'router_path' => 'ticket-report',
    'link_title' => 'Ticket Sales Report',
    'options' => array(
      'identifier' => 'management_ticket-sales-report:ticket-report',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_store:admin/commerce',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ticket Sales Report');


  return $menu_links;
}
