<?php
/**
 * @file
 * humanitarianresponse_clusters.features.inc
 */

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_clusters_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
