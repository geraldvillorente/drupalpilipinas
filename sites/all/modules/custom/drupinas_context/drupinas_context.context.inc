<?php
/**
 * @file
 * drupinas_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupinas_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'common_blocks';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'nav',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user',
          'weight' => '-10',
        ),
        'drupinas_core-login' => array(
          'module' => 'drupinas_core',
          'delta' => 'login',
          'region' => 'user',
          'weight' => '-9',
        ),
        'menu-menu-navigate' => array(
          'module' => 'menu',
          'delta' => 'menu-navigate',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['common_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hero-block' => array(
          'module' => 'views',
          'delta' => 'hero-block',
          'region' => 'hero',
          'weight' => '-10',
        ),
        'menu-menu-hero-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-hero-menu',
          'region' => 'hero',
          'weight' => '-9',
        ),
        'views-featured_on_blog-block' => array(
          'module' => 'views',
          'delta' => 'featured_on_blog-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'event',
          'weight' => '-10',
        ),
        'views-jobs-block' => array(
          'module' => 'views',
          'delta' => 'jobs-block',
          'region' => 'jobs',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('homepage');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = '';
  $context->tag = 'user';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
        'users/*' => 'users/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'nav',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user',
          'weight' => '-10',
        ),
        'drupinas_core-login' => array(
          'module' => 'drupinas_core',
          'delta' => 'login',
          'region' => 'user',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('user');
  $export['user'] = $context;

  return $export;
}
