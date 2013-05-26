<?php
/**
 * @file
 * resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resources_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function resources_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function resources_node_info() {
  $items = array(
    'resources' => array(
      'name' => t('Resources'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
