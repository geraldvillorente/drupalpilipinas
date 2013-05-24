<?php
/**
 * @file
 * drupinas_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupinas_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_do_nickname|profile2|main|form';
  $field_group->group_name = 'group_profile_do_nickname';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DO Nickname',
    'weight' => '6',
    'children' => array(
      0 => 'field_profile_drupal_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'DO Nickname',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_do_nickname|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_gender|profile2|main|form';
  $field_group->group_name = 'group_profile_gender';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gender',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_gender',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Gender',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_gender|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_interests|profile2|main|form';
  $field_group->group_name = 'group_profile_interests';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Interests',
    'weight' => '5',
    'children' => array(
      0 => 'field_profile_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Interests',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_interests|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_irc|profile2|main|form';
  $field_group->group_name = 'group_profile_irc';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IRC',
    'weight' => '8',
    'children' => array(
      0 => 'field_profile_irc_nick',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'IRC',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_irc|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_social|profile2|main|form';
  $field_group->group_name = 'group_profile_social';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Network Pages',
    'weight' => '7',
    'children' => array(
      0 => 'field_profile_linkedin',
      1 => 'field_profile_facebook_page',
      2 => 'field_profile_twitter_url',
      3 => 'field_profile_google',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social Network Pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_social|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_website|profile2|main|form';
  $field_group->group_name = 'group_profile_website';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Website',
    'weight' => '4',
    'children' => array(
      0 => 'field_profile_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Website',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_website|profile2|main|form'] = $field_group;

  return $export;
}
