<?php
/**
 * @file
 * sponsors.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sponsors_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/sponsors
  $menu_links['navigation:node/add/sponsors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sponsors',
    'router_path' => 'node/add/sponsors',
    'link_title' => 'Sponsors',
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
  t('Sponsors');


  return $menu_links;
}
