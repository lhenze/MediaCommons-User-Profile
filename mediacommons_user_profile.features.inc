<?php
/**
 * @file
 * mediacommons_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediacommons_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
