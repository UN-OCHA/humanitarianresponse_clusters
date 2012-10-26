<?php
/**
 * @file
 * humanitarianresponse_clusters.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_clusters_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer clusters vocabulary terms.
  $permissions['administer clusters vocabulary terms'] = array(
    'name' => 'administer clusters vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
