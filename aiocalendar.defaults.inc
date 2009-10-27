<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _aiocalendar_content_default_fields() {
  $fields = array();

  // Exported field: field_event_contact
  $fields[] = array(
    'field_name' => 'field_event_contact',
    'type_name' => 'calendar_event',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'token' => array(
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
      'matching' => '0',
      'num_results' => '10',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Contact',
      'weight' => '-2',
      'description' => '',
      'type' => 'cck_autocomplete',
      'module' => 'cck_autocomplete',
    ),
  );

  // Exported field: field_event_date
  $fields[] = array(
    'field_name' => 'field_event_date',
    'type_name' => 'calendar_event',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 1,
    'repeat_collapsed' => '0',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+10',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup_repeat',
      'module' => 'date',
    ),
  );

  // Exported field: field_event_image
  $fields[] = array(
    'field_name' => 'field_event_image',
    'type_name' => 'calendar_event',
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
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'imceimage',
    'required' => '0',
    'multiple' => '0',
    'module' => 'imceimage',
    'active' => '1',
    'imceimage_file_types' => 'png,gif,jpg,jpeg',
    'widget' => array(
      'imceimage_file_types' => 'png,gif,jpg,jpeg',
      'default_value' => array(
        '0' => array(
          'imceimage_path' => '',
          'imceimage_width' => '',
          'imceimage_height' => '',
          'imceimage_alt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Image',
      'weight' => '1',
      'description' => '',
      'type' => 'imceimage',
      'module' => 'imceimage',
    ),
  );

  // Exported field: field_event_location
  $fields[] = array(
    'field_name' => 'field_event_location',
    'type_name' => 'calendar_event',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'token' => array(
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
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Contact'),
    t('Date'),
    t('Image'),
    t('Location'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _aiocalendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views
  $permissions[] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: administer views
  $permissions[] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: create calendar_event content
  $permissions[] = array(
    'name' => 'create calendar_event content',
    'roles' => array(
      '0' => 'Admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any calendar_event content
  $permissions[] = array(
    'name' => 'delete any calendar_event content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: delete own calendar_event content
  $permissions[] = array(
    'name' => 'delete own calendar_event content',
    'roles' => array(
      '0' => 'Sports Approver',
      '1' => 'Admin',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit any calendar_event content
  $permissions[] = array(
    'name' => 'edit any calendar_event content',
    'roles' => array(
      '0' => 'Sports Approver',
      '1' => 'Admin',
    ),
  );

  // Exported permission: edit field_event_contact
  $permissions[] = array(
    'name' => 'edit field_event_contact',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'Academic Author/Editor',
      '2' => 'Conferences Approver',
      '3' => 'Conferences Author/Editor',
      '4' => 'Sports Approver',
      '5' => 'Sports Author/Editor',
      '6' => 'Fine Arts Author/Editor',
      '7' => 'Fine Arts Approver',
      '8' => 'Events Author/Editor',
      '9' => 'Events Approver',
      '10' => 'Devotionals Approver',
      '11' => 'Devotionals Author/Editor',
      '12' => 'Alumni Approver',
      '13' => 'Academic Approver',
      '14' => 'Admin',
      '15' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_event_date
  $permissions[] = array(
    'name' => 'edit field_event_date',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'Academic Author/Editor',
      '2' => 'Conferences Approver',
      '3' => 'Conferences Author/Editor',
      '4' => 'Sports Approver',
      '5' => 'Sports Author/Editor',
      '6' => 'Fine Arts Author/Editor',
      '7' => 'Fine Arts Approver',
      '8' => 'Events Author/Editor',
      '9' => 'Events Approver',
      '10' => 'Devotionals Approver',
      '11' => 'Devotionals Author/Editor',
      '12' => 'Alumni Approver',
      '13' => 'Academic Approver',
      '14' => 'Admin',
      '15' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_event_location
  $permissions[] = array(
    'name' => 'edit field_event_location',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'Academic Author/Editor',
      '2' => 'Conferences Approver',
      '3' => 'Conferences Author/Editor',
      '4' => 'Sports Approver',
      '5' => 'Sports Author/Editor',
      '6' => 'Fine Arts Author/Editor',
      '7' => 'Fine Arts Approver',
      '8' => 'Events Author/Editor',
      '9' => 'Events Approver',
      '10' => 'Devotionals Approver',
      '11' => 'Devotionals Author/Editor',
      '12' => 'Alumni Approver',
      '13' => 'Academic Approver',
      '14' => 'Admin',
      '15' => 'authenticated user',
    ),
  );

  // Exported permission: edit own calendar_event content
  $permissions[] = array(
    'name' => 'edit own calendar_event content',
    'roles' => array(
      '0' => 'Sports Approver',
      '1' => 'Admin',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_event_contact
  $permissions[] = array(
    'name' => 'view field_event_contact',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'Academic Author/Editor',
      '2' => 'Conferences Approver',
      '3' => 'Conferences Author/Editor',
      '4' => 'Sports Approver',
      '5' => 'Sports Author/Editor',
      '6' => 'Fine Arts Author/Editor',
      '7' => 'Fine Arts Approver',
      '8' => 'Events Author/Editor',
      '9' => 'Events Approver',
      '10' => 'Devotionals Approver',
      '11' => 'Devotionals Author/Editor',
      '12' => 'Alumni Approver',
      '13' => 'Academic Approver',
      '14' => 'Admin',
    ),
  );

  // Exported permission: view field_event_date
  $permissions[] = array(
    'name' => 'view field_event_date',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'anonymous user',
      '2' => 'Academic Author/Editor',
      '3' => 'Conferences Approver',
      '4' => 'Conferences Author/Editor',
      '5' => 'Sports Approver',
      '6' => 'Sports Author/Editor',
      '7' => 'Fine Arts Author/Editor',
      '8' => 'Fine Arts Approver',
      '9' => 'Events Author/Editor',
      '10' => 'Events Approver',
      '11' => 'Devotionals Approver',
      '12' => 'Devotionals Author/Editor',
      '13' => 'Alumni Approver',
      '14' => 'Academic Approver',
      '15' => 'Admin',
      '16' => 'authenticated user',
    ),
  );

  // Exported permission: view field_event_image
  $permissions[] = array(
    'name' => 'view field_event_image',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'anonymous user',
      '2' => 'Academic Author/Editor',
      '3' => 'Conferences Approver',
      '4' => 'Conferences Author/Editor',
      '5' => 'Sports Approver',
      '6' => 'Sports Author/Editor',
      '7' => 'Fine Arts Author/Editor',
      '8' => 'Fine Arts Approver',
      '9' => 'Events Author/Editor',
      '10' => 'Events Approver',
      '11' => 'Devotionals Approver',
      '12' => 'Devotionals Author/Editor',
      '13' => 'Alumni Approver',
      '14' => 'Academic Approver',
      '15' => 'Admin',
      '16' => 'authenticated user',
    ),
  );

  // Exported permission: view field_event_location
  $permissions[] = array(
    'name' => 'view field_event_location',
    'roles' => array(
      '0' => 'Alumni Author/Editor',
      '1' => 'anonymous user',
      '2' => 'Academic Author/Editor',
      '3' => 'Conferences Approver',
      '4' => 'Conferences Author/Editor',
      '5' => 'Sports Approver',
      '6' => 'Sports Author/Editor',
      '7' => 'Fine Arts Author/Editor',
      '8' => 'Fine Arts Approver',
      '9' => 'Events Author/Editor',
      '10' => 'Events Approver',
      '11' => 'Devotionals Approver',
      '12' => 'Devotionals Author/Editor',
      '13' => 'Alumni Approver',
      '14' => 'Academic Approver',
      '15' => 'Admin',
      '16' => 'authenticated user',
    ),
  );

  return $permissions;
}
