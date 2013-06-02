<?php
/**
 * @file
 * photo_album.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function photo_album_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/gallery-field
  $menu_links['navigation:node/add/gallery-field'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/gallery-field',
    'router_path' => 'node/add/gallery-field',
    'link_title' => 'Gallery Field',
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
  t('Gallery Field');


  return $menu_links;
}
