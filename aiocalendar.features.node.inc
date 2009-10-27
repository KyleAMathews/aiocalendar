<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _aiocalendar_node_info() {
  $items = array(
    'calendar_event' => array(
      'name' => t('Calendar Event'),
      'module' => 'features',
      'description' => t('Events to be shown in the All-in-One Calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
    ),
  );
  return $items;
}
