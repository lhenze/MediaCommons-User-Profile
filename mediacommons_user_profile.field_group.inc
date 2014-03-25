<?php
/**
 * @file
 * mediacommons_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|user|user|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_specialfields';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '14',
    'children' => array(
      0 => 'field_related_file',
      1 => 'timezone',
      2 => 'overlay_control',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|user|user|default';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'basic info',
    'weight' => '1',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_organization',
      2 => 'field_location',
      3 => 'name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'basic info',
      'instance_settings' => array(
        'classes' => 'group-basic-info',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_basic_info|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|user|user|form';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_specialfields';
  $field_group->data = array(
    'label' => 'Bio and Interests',
    'weight' => '13',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_research_interests',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bio field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bio|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|user|user|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'contact info',
    'weight' => '2',
    'children' => array(
      0 => 'field_email',
      1 => 'field_skype',
      2 => 'field_url',
      3 => 'field_twitter',
      4 => 'field_news_hotline',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'contact info',
      'instance_settings' => array(
        'classes' => 'group-contact-info',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contact_info|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_specialfields|user|user|form';
  $field_group->group_name = 'group_specialfields';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'holder',
    'weight' => '2',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab2',
      2 => 'group_admin',
      3 => 'group_bio',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-specialfields field-group-tabs',
      ),
    ),
  );
  $export['group_specialfields|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|user|user|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_specialfields';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '11',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_organization',
      2 => 'field_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Basic',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab1 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab1|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|user|user|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_specialfields';
  $field_group->data = array(
    'label' => 'Social Media and Contacts',
    'weight' => '12',
    'children' => array(
      0 => 'field_email',
      1 => 'field_skype',
      2 => 'field_url',
      3 => 'field_twitter',
      4 => 'field_news_hotline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab2|user|user|form'] = $field_group;

  return $export;
}
