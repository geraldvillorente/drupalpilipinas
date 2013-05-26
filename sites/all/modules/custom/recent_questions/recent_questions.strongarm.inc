<?php
/**
 * @file
 * recent_questions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function recent_questions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = '1';
  $strongarm->value = 0;
  $export['1'] = $strongarm;

  return $export;
}
