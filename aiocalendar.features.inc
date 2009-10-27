<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiocalendar_content_default_fields() {
  module_load_include('inc', 'aiocalendar', 'aiocalendar.defaults');
  $args = func_get_args();
  return call_user_func_array('_aiocalendar_content_default_fields', $args);
}

/**
 * Implementation of hook_node_info().
 */
function aiocalendar_node_info() {
  module_load_include('inc', 'aiocalendar', 'aiocalendar.features.node');
  $args = func_get_args();
  return call_user_func_array('_aiocalendar_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function aiocalendar_user_default_permissions() {
  module_load_include('inc', 'aiocalendar', 'aiocalendar.defaults');
  $args = func_get_args();
  return call_user_func_array('_aiocalendar_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function aiocalendar_views_default_views() {
  module_load_include('inc', 'aiocalendar', 'aiocalendar.features.views');
  $args = func_get_args();
  return call_user_func_array('_aiocalendar_views_default_views', $args);
}
