<?php
/**
 * @file
 * humanitarianresponse_clusters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_clusters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clusters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Clusters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clusters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Parent';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Prefix */
  $handler->display->display_options['fields']['field_cluster_prefix']['id'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['table'] = 'field_data_field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['field'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_cluster_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster_prefix']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['element_class'] = '[field_cluster_prefix]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'clusters' => 'clusters',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Parent';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  /* Field: Taxonomy term: Prefix */
  $handler->display->display_options['fields']['field_cluster_prefix']['id'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['table'] = 'field_data_field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['field'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_cluster_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster_prefix']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['element_class'] = '[field_cluster_prefix]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'clusters';

  /* Display: Menu */
  $handler = $view->new_display('block', 'Menu', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Clusters Home Page';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'clusters.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['element_class'] = '[field_cluster_prefix]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Prefix */
  $handler->display->display_options['fields']['field_cluster_prefix_1']['id'] = 'field_cluster_prefix_1';
  $handler->display->display_options['fields']['field_cluster_prefix_1']['table'] = 'field_data_field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix_1']['field'] = 'field_cluster_prefix';
  /* Field: Taxonomy term: Cluster Coordinator */
  $handler->display->display_options['fields']['field_cluster_coordinator']['id'] = 'field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['table'] = 'field_data_field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['field'] = 'field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Information Focal Points */
  $handler->display->display_options['fields']['field_information_focal_points']['id'] = 'field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['table'] = 'field_data_field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['field'] = 'field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_information_focal_points']['delta_offset'] = '0';
  /* Field: Taxonomy term: Lead Agencies */
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['id'] = 'field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['table'] = 'field_data_field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['field'] = 'field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['delta_offset'] = '0';
  /* Field: Taxonomy term: Co-leads / Partners */
  $handler->display->display_options['fields']['field_cluster_co_partners']['id'] = 'field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['table'] = 'field_data_field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['field'] = 'field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['delta_offset'] = '0';
  /* Field: Taxonomy term: Description */
  $handler->display->display_options['fields']['description_field']['id'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
  $handler->display->display_options['fields']['description_field']['field'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Strategy */
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['id'] = 'field_cluster_strategy_activites';
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['table'] = 'field_data_field_cluster_strategy_activites';
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['field'] = 'field_cluster_strategy_activites';
  /* Field: Taxonomy term: Website */
  $handler->display->display_options['fields']['field_cluster_website']['id'] = 'field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['table'] = 'field_data_field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['field'] = 'field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cluster_website']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'clusters.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['element_class'] = '[field_cluster_prefix]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Prefix */
  $handler->display->display_options['fields']['field_cluster_prefix_1']['id'] = 'field_cluster_prefix_1';
  $handler->display->display_options['fields']['field_cluster_prefix_1']['table'] = 'field_data_field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix_1']['field'] = 'field_cluster_prefix';
  /* Field: Taxonomy term: Cluster Coordinator */
  $handler->display->display_options['fields']['field_cluster_coordinator']['id'] = 'field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['table'] = 'field_data_field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['field'] = 'field_cluster_coordinator';
  $handler->display->display_options['fields']['field_cluster_coordinator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Information Focal Points */
  $handler->display->display_options['fields']['field_information_focal_points']['id'] = 'field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['table'] = 'field_data_field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['field'] = 'field_information_focal_points';
  $handler->display->display_options['fields']['field_information_focal_points']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_information_focal_points']['delta_offset'] = '0';
  /* Field: Taxonomy term: Lead Agencies */
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['id'] = 'field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['table'] = 'field_data_field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['field'] = 'field_cluster_lead_agencies';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster_lead_agencies']['delta_offset'] = '0';
  /* Field: Taxonomy term: Co-leads / Partners */
  $handler->display->display_options['fields']['field_cluster_co_partners']['id'] = 'field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['table'] = 'field_data_field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['field'] = 'field_cluster_co_partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['label'] = 'Co Leads Partners';
  $handler->display->display_options['fields']['field_cluster_co_partners']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster_co_partners']['delta_offset'] = '0';
  /* Field: Taxonomy term: Description */
  $handler->display->display_options['fields']['description_field']['id'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
  $handler->display->display_options['fields']['description_field']['field'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Strategy */
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['id'] = 'field_cluster_strategy_activites';
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['table'] = 'field_data_field_cluster_strategy_activites';
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['field'] = 'field_cluster_strategy_activites';
  $handler->display->display_options['fields']['field_cluster_strategy_activites']['alter']['strip_tags'] = TRUE;
  /* Field: Taxonomy term: Website */
  $handler->display->display_options['fields']['field_cluster_website']['id'] = 'field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['table'] = 'field_data_field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['field'] = 'field_cluster_website';
  $handler->display->display_options['fields']['field_cluster_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cluster_website']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'clusters.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'clusters.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );
  $translatables['clusters'] = array(
    t('Master'),
    t('Clusters'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent'),
    t('.'),
    t(','),
    t('Page'),
    t('Menu'),
    t('Home'),
    t('Clusters Home Page'),
    t('XLS'),
    t('Name'),
    t('Prefix'),
    t('Cluster Coordinator'),
    t('Information Focal Points'),
    t('Lead Agencies'),
    t('Co-leads / Partners'),
    t('Description'),
    t('Strategy'),
    t('Website'),
    t('XML'),
    t('Co Leads Partners'),
    t('CSV'),
  );
  $export['clusters'] = $view;

  return $export;
}
