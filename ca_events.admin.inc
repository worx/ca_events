<?php

/**
 * @file
 * CA_Events admin system, which overrides the default feature settings.
 *
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding events feature settings.
 *
 * @return
 *   Fully formed Form API array.
 */
function ca_events_settings_form() {
  $form = array();

  $form['ca_events_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => variable_get('ca_events_panel_title', 'Events'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_events_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_events_menu_title', 'Events'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_events_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Events per page'),
    '#default_value' => variable_get('ca_events_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many eventss would you like displayed per page?'),
  );
  $form['ca_events_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Events in the block'),
    '#default_value' => variable_get('ca_events_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many eventss would you like displayed in the block?'),
  );
  $form['ca_events_term_display'] = array(
    '#type' => 'select',
    '#title' => t('Event\'s term displays'),
    '#options' => array(
      'ca_events_term_display_false' => t('False'),
      'ca_events_term_display_node' => t('Display on the Node only'),
      'ca_events_term_display_all' => t('Display Everywhere'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_events_term_display', 'ca_events_term_display_node'),
  );
  $form['ca_events_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Events\'s list template'),
    '#options' => array(
      'ca_events_list_template_one' => t('Template one'),
      'ca_events_list_template_two' => t('Template two'),
      'ca_events_list_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_events_list_template', 'ca_events_list_template_one'),
  );
  $form['ca_events_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Events\'s node template'),
    '#options' => array(
      'ca_events_node_template_one' => t('Template one'),
      'ca_events_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_events_node_template', 'ca_events_node_template_one'),
  );
  $form['ca_events_term_template'] = array(
    '#type' => 'select',
    '#title' => t('Events\'s term template'),
    '#options' => array(
      'ca_events_term_template_one' => t('Template one'),
      'ca_events_term_template_two' => t('Template two'),
      'ca_events_term_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_events_term_template', 'ca_events_term_template_one'),
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // We are adding the system_settings_form_submit manually instead of
  // returning system_settings_form($form) in our return statement.
  // This allows for us to add our submit handler after the
  // system_settings_form_submit. hook_form_alter could not handle this for us.
  $form['#submit'][] = 'system_settings_form_submit';
  $form['#submit'][] = 'ca_events_settings_form_submit';

  return $form;
}

/**
 * Handles form submission data from 'ca_events_settings_form'.
 *
 * Determines if we should rebuild the menu router based on form data.
 */
function ca_events_settings_form_submit($form, &$form_state) {
  $old_title = $form['ca_events_menu_title']['#default_value'];
  $new_title = $form_state['values']['ca_events_menu_title'];
  if ($old_title != $new_title) {
    menu_rebuild();
  }
}
