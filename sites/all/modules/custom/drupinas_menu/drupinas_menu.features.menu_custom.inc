<?php
/**
 * @file
 * drupinas_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupinas_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-hero-menu.
  $menus['menu-hero-menu'] = array(
    'menu_name' => 'menu-hero-menu',
    'title' => 'Hero Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hero Menu');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
