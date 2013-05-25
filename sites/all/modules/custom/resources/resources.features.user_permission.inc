<?php
/**
 * @file
 * resources.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: create resources content.
  $permissions['create resources content'] = array(
    'name' => 'create resources content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any resources content.
  $permissions['delete any resources content'] = array(
    'name' => 'delete any resources content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own resources content.
  $permissions['delete own resources content'] = array(
    'name' => 'delete own resources content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any resources content.
  $permissions['edit any resources content'] = array(
    'name' => 'edit any resources content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own resources content.
  $permissions['edit own resources content'] = array(
    'name' => 'edit own resources content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
