<?php
/**
 * @file
 * slideshow.features.inc
 */

/**
 * Implements hook_node_info().
 */
function slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
