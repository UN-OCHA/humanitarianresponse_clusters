<?php
/**
 * @file
 * humanitarianresponse_clusters.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_clusters_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|clusters|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'clusters';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cluster_lead_agencies',
        1 => 'field_cluster_website',
        2 => 'field_cluster_strategy_activites',
        3 => 'field_cluster_co_partners',
        4 => 'field_cluster_coordinator',
        5 => 'field_information_focal_points',
      ),
    ),
    'fields' => array(
      'field_cluster_lead_agencies' => 'ds_content',
      'field_cluster_website' => 'ds_content',
      'field_cluster_strategy_activites' => 'ds_content',
      'field_cluster_co_partners' => 'ds_content',
      'field_cluster_coordinator' => 'ds_content',
      'field_information_focal_points' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['taxonomy_term|clusters|default'] = $ds_layout;

  return $export;
}
