<?php
/**
 * @file
 * hero.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hero_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hero_node_info() {
  $items = array(
    'hero' => array(
      'name' => t('Hero'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
