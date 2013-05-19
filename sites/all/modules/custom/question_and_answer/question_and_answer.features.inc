<?php
/**
 * @file
 * question_and_answer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function question_and_answer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function question_and_answer_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function question_and_answer_node_info() {
  $items = array(
    'question_and_answer' => array(
      'name' => t('Question and Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
