<?php
/**
 * @file
 * recent_questions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recent_questions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function recent_questions_views_api() {
  return array("api" => "3.0");
}
