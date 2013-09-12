<?php

/**
 * @file
 * Plugin to provide access control based upon ca_event admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Event: node type'),
  'description' => t('Control access by event node type.'),
  'callback' => 'ca_events_node_template_access_check',
  'settings form' => 'ca_events_node_template_access_settings',
  'settings form submit' => 'ca_events_node_template_access_settings_submit',
  'summary' => 'ca_events_node_template_access_summary',
);

/**
 * Settings form for the 'by event node type' access plugin.
 */
function ca_events_node_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_events_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Event\'s node template'),
    '#options' => array(
      'ca_events_node_template_one' => t('Template one'),
      'ca_events_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_events_node_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_events_node_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_events_node_template_access_check($conf, $context) {
  return $conf['ca_events_node_template'] == variable_get('ca_events_node_template', 'ca_events_node_template_one');
}

/**
 * Provide a summary description based upon the checked event node type.
 */
function ca_events_node_template_access_summary($conf, $context) {
  if ($conf['ca_events_node_template'] == 'ca_events_node_template_one') {
    $template = t('Template one');
  }
  else {
    $template = t('Template two');
  }

  return t('Display template is set to: ' . $template);
}
