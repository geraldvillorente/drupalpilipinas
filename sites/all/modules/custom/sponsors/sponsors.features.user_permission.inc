<?php
/**
 * @file
 * sponsors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sponsors content.
  $permissions['create sponsors content'] = array(
    'name' => 'create sponsors content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any sponsors content.
  $permissions['delete any sponsors content'] = array(
    'name' => 'delete any sponsors content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own sponsors content.
  $permissions['delete own sponsors content'] = array(
    'name' => 'delete own sponsors content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any sponsors content.
  $permissions['edit any sponsors content'] = array(
    'name' => 'edit any sponsors content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own sponsors content.
  $permissions['edit own sponsors content'] = array(
    'name' => 'edit own sponsors content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
