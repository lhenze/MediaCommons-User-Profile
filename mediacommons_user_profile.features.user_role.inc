<?php
/**
 * @file
 * mediacommons_user_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mediacommons_user_profile_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
  );

  return $roles;
}
