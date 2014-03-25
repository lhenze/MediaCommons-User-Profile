<?php
/**
 * @file
 * mediacommons_user_profile.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function mediacommons_user_profile_filter_default_formats() {
  $formats = array();

  // Exported format: Display Suite code.
  $formats['ds_code'] = array(
    'format' => 'ds_code',
    'name' => 'Display Suite code',
    'cache' => 0,
    'status' => 1,
    'weight' => 12,
    'filters' => array(
      'ds_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
