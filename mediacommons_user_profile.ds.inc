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
      'weight' => '7',
      'label' => 'above',
      'format' => 'default',
    ),
    'media_commons_comments' => array(
      'weight' => '8',
      'label' => 'above',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'fn p-name',
        'ft' => array(),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'photo u-photo',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'li',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'u-email email',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'h-adr',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_organization' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'p-org org',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_skype' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_twitter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'li',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'li',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
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
        1 => 'name',
        2 => 'field_job_title',
        3 => 'field_organization',
        4 => 'field_email',
        5 => 'field_location',
        6 => 'field_skype',
        7 => 'field_telephone',
        8 => 'field_url',
        9 => 'group_contact_info',
        11 => 'field_twitter',
      ),
      'left' => array(
        10 => 'media_commons_activity',
        12 => 'media_commons_comments',
      ),
      'right' => array(
        13 => 'field_bio',
        14 => 'field_research_interests',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'name' => 'header',
      'field_job_title' => 'header',
      'field_organization' => 'header',
      'field_email' => 'header',
      'field_location' => 'header',
      'field_skype' => 'header',
      'field_telephone' => 'header',
      'field_url' => 'header',
      'group_contact_info' => 'header',
      'media_commons_activity' => 'left',
      'field_twitter' => 'header',
      'media_commons_comments' => 'left',
      'field_bio' => 'right',
      'field_research_interests' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile' => 'profile',
      ),
      'header' => array(
        'h-card' => 'h-card',
        'vcard' => 'vcard',
        'profile' => 'profile',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
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
        1 => 'field_real_name',
        2 => 'group_specialfields',
        3 => 'field_job_title',
        4 => 'picture',
        5 => 'field_organization',
        6 => 'field_location',
        7 => 'field_email',
        8 => 'overlay_control',
        9 => 'field_url',
        10 => 'timezone',
        11 => 'field_telephone',
        12 => 'field_research_interests',
        13 => 'field_bio',
        14 => 'field_skype',
        15 => 'field_twitter',
        17 => 'group_tab1',
        18 => 'group_tab2',
        19 => 'group_bio',
        20 => 'group_admin',
      ),
      'hidden' => array(
        16 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'account' => 'ds_content',
      'field_real_name' => 'ds_content',
      'group_specialfields' => 'ds_content',
      'field_job_title' => 'ds_content',
      'picture' => 'ds_content',
      'field_organization' => 'ds_content',
      'field_location' => 'ds_content',
      'field_email' => 'ds_content',
      'overlay_control' => 'ds_content',
      'field_url' => 'ds_content',
      'timezone' => 'ds_content',
      'field_telephone' => 'ds_content',
      'field_research_interests' => 'ds_content',
      'field_bio' => 'ds_content',
      'field_skype' => 'ds_content',
      'field_twitter' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'group_tab1' => 'ds_content',
      'group_tab2' => 'ds_content',
      'group_bio' => 'ds_content',
      'group_admin' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
