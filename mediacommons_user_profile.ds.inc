<?php
/**
 * @file
 * mediacommons_user_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_user_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'media_commons_activity' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
    ),
    'media_commons_comments' => array(
      'weight' => '4',
      'label' => 'above',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_user_profile_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'media_commons_activity';
  $ds_field->label = 'Media Commons Activity';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|content_from_user-block',
    'block_render' => '3',
  );
  $export['media_commons_activity'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'media_commons_comments';
  $ds_field->label = 'Media Commons Comments';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|comments_from_user-block',
    'block_render' => '3',
  );
  $export['media_commons_comments'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_user_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'ds_user_picture',
        1 => 'group_basic_info',
        2 => 'name',
        3 => 'group_contact_info',
        4 => 'field_email',
        5 => 'field_job_title',
        7 => 'field_skype',
        9 => 'field_organization',
        11 => 'field_url',
        12 => 'field_location',
        14 => 'field_twitter',
        15 => 'field_news_hotline',
      ),
      'left' => array(
        6 => 'media_commons_activity',
        8 => 'media_commons_comments',
      ),
      'right' => array(
        10 => 'field_bio',
        13 => 'field_research_interests',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'group_basic_info' => 'header',
      'name' => 'header',
      'group_contact_info' => 'header',
      'field_email' => 'header',
      'field_job_title' => 'header',
      'media_commons_activity' => 'left',
      'field_skype' => 'header',
      'media_commons_comments' => 'left',
      'field_organization' => 'header',
      'field_bio' => 'right',
      'field_url' => 'header',
      'field_location' => 'header',
      'field_research_interests' => 'right',
      'field_twitter' => 'header',
      'field_news_hotline' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'account',
        1 => 'picture',
        2 => 'overlay_control',
        3 => 'group_specialfields',
        4 => 'timezone',
        5 => 'field_job_title',
        6 => 'field_related_file',
        7 => 'field_organization',
        8 => 'field_location',
        9 => 'field_email',
        10 => 'field_url',
        11 => 'field_research_interests',
        12 => 'field_news_hotline',
        13 => 'field_skype',
        14 => 'field_bio',
        15 => 'field_twitter',
        16 => 'group_tab1',
        17 => 'group_tab2',
        18 => 'group_bio',
        19 => 'group_admin',
      ),
    ),
    'fields' => array(
      'account' => 'ds_content',
      'picture' => 'ds_content',
      'overlay_control' => 'ds_content',
      'group_specialfields' => 'ds_content',
      'timezone' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_related_file' => 'ds_content',
      'field_organization' => 'ds_content',
      'field_location' => 'ds_content',
      'field_email' => 'ds_content',
      'field_url' => 'ds_content',
      'field_research_interests' => 'ds_content',
      'field_news_hotline' => 'ds_content',
      'field_skype' => 'ds_content',
      'field_bio' => 'ds_content',
      'field_twitter' => 'ds_content',
      'group_tab1' => 'ds_content',
      'group_tab2' => 'ds_content',
      'group_bio' => 'ds_content',
      'group_admin' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
