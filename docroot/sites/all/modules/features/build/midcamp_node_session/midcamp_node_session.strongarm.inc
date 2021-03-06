<?php
/**
 * @file
 * midcamp_node_session.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function midcamp_node_session_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__session';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'user_page_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'schedule' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '17',
        ),
        'redirect' => array(
          'weight' => '15',
        ),
        'metatags' => array(
          'weight' => '18',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(
        'scamp_schedule_half' => array(
          'schedule' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'user_page_teaser' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
        ),
        'scamp_schedule_room' => array(
          'schedule' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'user_page_teaser' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_session';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_session';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_session';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_session';
  $strongarm->value = '0';
  $export['node_preview_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_session';
  $strongarm->value = 0;
  $export['node_submitted_session'] = $strongarm;

  return $export;
}
