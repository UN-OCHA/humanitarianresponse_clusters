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

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_cluster_image']['id'] = 'field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['table'] = 'field_data_field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['field'] = 'field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['label'] = '';
  $handler->display->display_options['fields']['field_cluster_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cluster_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_cluster_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  $handler->display->display_options['path'] = 'clusters';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Home */
  $handler = $view->new_display('panel_pane', 'Home', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_cluster_image']['id'] = 'field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['table'] = 'field_data_field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['field'] = 'field_cluster_image';
  $handler->display->display_options['fields']['field_cluster_image']['label'] = '';
  $handler->display->display_options['fields']['field_cluster_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cluster_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_cluster_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $translatables['clusters'] = array(
    t('Master'),
    t('Clusters'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
    t('Home'),
    t('View panes'),
  );
  $export['clusters'] = $view;

  return $export;
}
