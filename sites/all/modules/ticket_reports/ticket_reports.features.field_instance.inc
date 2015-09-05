<?php
/**
 * @file
 * ticket_reports.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ticket_reports_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_order-commerce_order-field_related_event'
  $field_instances['commerce_order-commerce_order-field_related_event'] = array(
    'bundle' => 'commerce_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'commerce_order',
    'fences_wrapper' => '',
    'field_name' => 'field_related_event',
    'label' => 'Related Event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'fields' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
        'type_settings' => array(
          'allow_existing' => FALSE,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'commerce_order-commerce_order-field_ticketholder_name'
  $field_instances['commerce_order-commerce_order-field_ticketholder_name'] = array(
    'bundle' => 'commerce_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_ticketholder_name',
    'label' => 'Ticketholder Name',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Related Event');
  t('Ticketholder Name');

  return $field_instances;
}
