<?php
/**
 * @file
 * photo_album.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function photo_album_user_default_permissions() {
  $permissions = array();

  // Exported permission: create album content.
  $permissions['create album content'] = array(
    'name' => 'create album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create gallery_field content.
  $permissions['create gallery_field content'] = array(
    'name' => 'create gallery_field content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any album content.
  $permissions['delete any album content'] = array(
    'name' => 'delete any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gallery_field content.
  $permissions['delete any gallery_field content'] = array(
    'name' => 'delete any gallery_field content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own album content.
  $permissions['delete own album content'] = array(
    'name' => 'delete own album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own gallery_field content.
  $permissions['delete own gallery_field content'] = array(
    'name' => 'delete own gallery_field content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any album content.
  $permissions['edit any album content'] = array(
    'name' => 'edit any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any gallery_field content.
  $permissions['edit any gallery_field content'] = array(
    'name' => 'edit any gallery_field content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own album content.
  $permissions['edit own album content'] = array(
    'name' => 'edit own album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own gallery_field content.
  $permissions['edit own gallery_field content'] = array(
    'name' => 'edit own gallery_field content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
