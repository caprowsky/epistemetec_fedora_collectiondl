<?php

/**
 * Implementation of hook_user_default_roles().
 */
function epistemetec_fedora_collectiondl_user_default_roles() {
  $roles = array();

  // Exported role: DL administrator
  $roles['DL administrator'] = array(
    'name' => 'DL administrator',
  );

  // Exported role: DL user
  $roles['DL user'] = array(
    'name' => 'DL user',
  );

  return $roles;
}
