<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function epistemetec_fedora_collectiondl_user_default_permissions() {
  $permissions = array();

  // Exported permission: add fedora datastreams
  $permissions['add fedora datastreams'] = array(
    'name' => 'add fedora datastreams',
    'roles' => array(
      '0' => 'DL administrator',
      '1' => 'DL user',
    ),
  );

  // Exported permission: edit fedora meta data
  $permissions['edit fedora meta data'] = array(
    'name' => 'edit fedora meta data',
    'roles' => array(
      '0' => 'DL administrator',
      '1' => 'DL user',
    ),
  );

  // Exported permission: edit tags datastream
  $permissions['edit tags datastream'] = array(
    'name' => 'edit tags datastream',
    'roles' => array(),
  );

  // Exported permission: ingest new fedora objects
  $permissions['ingest new fedora objects'] = array(
    'name' => 'ingest new fedora objects',
    'roles' => array(
      '0' => 'DL administrator',
      '1' => 'DL user',
    ),
  );

  // Exported permission: purge objects and datastreams
  $permissions['purge objects and datastreams'] = array(
    'name' => 'purge objects and datastreams',
    'roles' => array(
      '0' => 'DL administrator',
    ),
  );

  // Exported permission: view fedora collection
  $permissions['view fedora collection'] = array(
    'name' => 'view fedora collection',
    'roles' => array(
      '0' => 'DL administrator',
      '1' => 'DL user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
