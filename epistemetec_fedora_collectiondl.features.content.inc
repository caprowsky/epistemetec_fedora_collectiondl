<?php

/**
 * Implementation of hook_content_default_fields().
 */
function epistemetec_fedora_collectiondl_content_default_fields() {
  $fields = array();

  // Exported field: field_fedora_code
  $fields['fedora_collectiondl-field_fedora_code'] = array(
    'field_name' => 'field_fedora_code',
    'type_name' => 'fedora_collectiondl',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fedora_code][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fedora CODE',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fedora_pid
  $fields['fedora_collectiondl-field_fedora_pid'] = array(
    'field_name' => 'field_fedora_pid',
    'type_name' => 'fedora_collectiondl',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '255',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fedora_pid][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fedora PID',
      'weight' => '34',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fedora_reference
  $fields['fedora_collectiondl-field_fedora_reference'] = array(
    'field_name' => 'field_fedora_reference',
    'type_name' => 'fedora_collectiondl',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'fedora_obj' => 'fedora_obj',
      'fedora_collectiondl' => 0,
      'repository' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_fedora_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fedora Reference',
      'weight' => '35',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fedora CODE');
  t('Fedora PID');
  t('Fedora Reference');

  return $fields;
}
