<?php
/**
 * @file
 * resources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/resources
  $menu_links['navigation:node/add/resources'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/resources',
    'router_path' => 'node/add/resources',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');


  return $menu_links;
}
