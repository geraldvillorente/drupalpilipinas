<?php
/**
 * @file
 * job.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function job_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/job
  $menu_links['navigation:node/add/job'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/job',
    'router_path' => 'node/add/job',
    'link_title' => 'Job',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>jobs</em> for posting job vacancies or freelance work.',
      ),
    ),
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
  t('Job');


  return $menu_links;
}
