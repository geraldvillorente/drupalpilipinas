<?php
/**
 * @file
 * photo_album.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function photo_album_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function photo_album_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function photo_album_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery_field' => array(
      'name' => t('Gallery Field'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
