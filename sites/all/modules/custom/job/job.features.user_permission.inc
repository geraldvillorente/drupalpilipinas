<?php
/**
 * @file
 * job.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function job_user_default_permissions() {
  $permissions = array();

  // Exported permission: create job content.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any job content.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own job content.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any job content.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own job content.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
