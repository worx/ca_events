<?php
/**
 * @file
 * ca_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_events_node_view_1_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Events: Node View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_event' => 'ca_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_events_node_template',
          'settings' => array(
            'ca_events_node_template' => 'ca_events_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-event-node ca-event-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a839c121-3cbb-4801-82fb-b03f5ad57bd4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d6e419d-62bd-4479-b819-b4eeec07a7fd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_node-ca_event_node_view_1_a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d6e419d-62bd-4479-b819-b4eeec07a7fd';
    $display->content['new-7d6e419d-62bd-4479-b819-b4eeec07a7fd'] = $pane;
    $display->panels['middle'][0] = 'new-7d6e419d-62bd-4479-b819-b4eeec07a7fd';
    $pane = new stdClass();
    $pane->pid = 'new-c9c18083-4fdd-4a55-a216-385fea68def5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_node-ca_event_node_view_1_b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9c18083-4fdd-4a55-a216-385fea68def5';
    $display->content['new-c9c18083-4fdd-4a55-a216-385fea68def5'] = $pane;
    $display->panels['middle'][1] = 'new-c9c18083-4fdd-4a55-a216-385fea68def5';
    $pane = new stdClass();
    $pane->pid = 'new-6e8c123e-9ee3-468b-a53b-ea1a04d57a2a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_events_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'view_mode' => 'ctools_custom',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '6e8c123e-9ee3-468b-a53b-ea1a04d57a2a';
    $display->content['new-6e8c123e-9ee3-468b-a53b-ea1a04d57a2a'] = $pane;
    $display->panels['middle'][2] = 'new-6e8c123e-9ee3-468b-a53b-ea1a04d57a2a';
    $pane = new stdClass();
    $pane->pid = 'new-85160859-c8ad-41c5-a9be-f4a65a9a4060';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_events_e_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '85160859-c8ad-41c5-a9be-f4a65a9a4060';
    $display->content['new-85160859-c8ad-41c5-a9be-f4a65a9a4060'] = $pane;
    $display->panels['middle'][3] = 'new-85160859-c8ad-41c5-a9be-f4a65a9a4060';
    $pane = new stdClass();
    $pane->pid = 'new-c241c561-8f5d-4b25-b854-77493a9f4131';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'c241c561-8f5d-4b25-b854-77493a9f4131';
    $display->content['new-c241c561-8f5d-4b25-b854-77493a9f4131'] = $pane;
    $display->panels['middle'][4] = 'new-c241c561-8f5d-4b25-b854-77493a9f4131';
    $pane = new stdClass();
    $pane->pid = 'new-9893d716-1179-4a9e-8bfc-f11e99473393';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9893d716-1179-4a9e-8bfc-f11e99473393';
    $display->content['new-9893d716-1179-4a9e-8bfc-f11e99473393'] = $pane;
    $display->panels['middle'][5] = 'new-9893d716-1179-4a9e-8bfc-f11e99473393';
    $pane = new stdClass();
    $pane->pid = 'new-bdc57b02-a32e-44fe-bf8f-96922b621822';
    $pane->panel = 'middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'bdc57b02-a32e-44fe-bf8f-96922b621822';
    $display->content['new-bdc57b02-a32e-44fe-bf8f-96922b621822'] = $pane;
    $display->panels['middle'][6] = 'new-bdc57b02-a32e-44fe-bf8f-96922b621822';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_events_node_view_1_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_events_node_view_2_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Ca Events: Node View Temlate Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_event' => 'ca_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_events_node_template',
          'settings' => array(
            'ca_events_node_template' => 'ca_events_node_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-event-node ca-event-node-template-2',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7b53edc6-944d-4c21-a373-c88d621b3c3a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6df90c4d-c49b-4032-8f71-eb88d15e65b4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_node-ca_event_node_view_calendar_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6df90c4d-c49b-4032-8f71-eb88d15e65b4';
    $display->content['new-6df90c4d-c49b-4032-8f71-eb88d15e65b4'] = $pane;
    $display->panels['left'][0] = 'new-6df90c4d-c49b-4032-8f71-eb88d15e65b4';
    $pane = new stdClass();
    $pane->pid = 'new-5ab7407e-c2e2-4e2b-af78-07365fd0f428';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_node-ca_event_node_view_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ab7407e-c2e2-4e2b-af78-07365fd0f428';
    $display->content['new-5ab7407e-c2e2-4e2b-af78-07365fd0f428'] = $pane;
    $display->panels['right'][0] = 'new-5ab7407e-c2e2-4e2b-af78-07365fd0f428';
    $pane = new stdClass();
    $pane->pid = 'new-df5ac14d-7a2d-4247-b9a1-c75c3de0261d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_events_e_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df5ac14d-7a2d-4247-b9a1-c75c3de0261d';
    $display->content['new-df5ac14d-7a2d-4247-b9a1-c75c3de0261d'] = $pane;
    $display->panels['right'][1] = 'new-df5ac14d-7a2d-4247-b9a1-c75c3de0261d';
    $pane = new stdClass();
    $pane->pid = 'new-7355ecc6-083d-4c7b-bcc5-26c9c692802c';
    $pane->panel = 'right';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '7355ecc6-083d-4c7b-bcc5-26c9c692802c';
    $display->content['new-7355ecc6-083d-4c7b-bcc5-26c9c692802c'] = $pane;
    $display->panels['right'][2] = 'new-7355ecc6-083d-4c7b-bcc5-26c9c692802c';
    $pane = new stdClass();
    $pane->pid = 'new-be7c479e-754c-4c5c-be0d-e2673e64f07d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'be7c479e-754c-4c5c-be0d-e2673e64f07d';
    $display->content['new-be7c479e-754c-4c5c-be0d-e2673e64f07d'] = $pane;
    $display->panels['right'][3] = 'new-be7c479e-754c-4c5c-be0d-e2673e64f07d';
    $pane = new stdClass();
    $pane->pid = 'new-0768ebc3-5adb-47c7-a5a2-e0dcddb81295';
    $pane->panel = 'right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '0768ebc3-5adb-47c7-a5a2-e0dcddb81295';
    $display->content['new-0768ebc3-5adb-47c7-a5a2-e0dcddb81295'] = $pane;
    $display->panels['right'][4] = 'new-0768ebc3-5adb-47c7-a5a2-e0dcddb81295';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_events_node_view_2_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_events_term_view_1_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Events: Term Calendar View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-events-calendar-term ca-events-calendar-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_events_categories' => 'ca_events_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_events_term_template',
          'settings' => array(
            'ca_events_term_template' => 'ca_events_term_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '65b4888c-386f-40a7-b23a-2d5d26b94524';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43127c04-5116-4922-adef-7e79bd2da66e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_term-ca_event_term_view_calendar_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43127c04-5116-4922-adef-7e79bd2da66e';
    $display->content['new-43127c04-5116-4922-adef-7e79bd2da66e'] = $pane;
    $display->panels['center'][0] = 'new-43127c04-5116-4922-adef-7e79bd2da66e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_events_term_view_1_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_events_term_view_2_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Events: Term List View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-events-list-term ca-events-list-term-template-2',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_events_categories' => 'ca_events_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_events_term_template',
          'settings' => array(
            'ca_events_term_template' => 'ca_events_term_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'b1ae1136-4402-4655-8027-c190481cb810';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d7bd756d-13e6-4084-8151-751ecf0590f3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_term-ca_event_term_view_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7bd756d-13e6-4084-8151-751ecf0590f3';
    $display->content['new-d7bd756d-13e6-4084-8151-751ecf0590f3'] = $pane;
    $display->panels['middle'][0] = 'new-d7bd756d-13e6-4084-8151-751ecf0590f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d7bd756d-13e6-4084-8151-751ecf0590f3';
  $handler->conf['display'] = $display;
  $export['ca_events_term_view_2_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_events_add_event';
  $page->task = 'page';
  $page->admin_title = 'CA Events: Add Event';
  $page->admin_description = '';
  $page->path = 'events/add_event';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 256820458,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Event',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_add_event_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_add_event';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_event',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_events_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_events_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Events: Admin';
  $page->admin_description = '';
  $page->path = 'events/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 256820458,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Events: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-events-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = '167bc7b2-9f3d-4f50-b3c4-f94a24edd886';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9bf4890-8c08-46bd-ba33-62c6586291af';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_admin-ca_event_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9bf4890-8c08-46bd-ba33-62c6586291af';
    $display->content['new-c9bf4890-8c08-46bd-ba33-62c6586291af'] = $pane;
    $display->panels['middle'][0] = 'new-c9bf4890-8c08-46bd-ba33-62c6586291af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_events_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_events_calendar_view';
  $page->task = 'page';
  $page->admin_title = 'CA Events: Calendar View';
  $page->admin_description = '';
  $page->path = 'events/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Events',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_calendar_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_calendar_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Events: Calendar View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'ca_events_list_template',
          'settings' => array(
            'ca_events_list_template' => 'ca_events_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-event-calendar-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c1a7d7f9-8632-451a-9d74-d15f93cd7218';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-281e7fa4-5fa8-4888-a081-22bfa8d51d04';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_list-ca_event_calendar_view_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '281e7fa4-5fa8-4888-a081-22bfa8d51d04';
    $display->content['new-281e7fa4-5fa8-4888-a081-22bfa8d51d04'] = $pane;
    $display->panels['middle'][0] = 'new-281e7fa4-5fa8-4888-a081-22bfa8d51d04';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_calendar_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_calendar_view';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Events: List View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_events_list_template',
          'settings' => array(
            'ca_events_list_template' => 'ca_events_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-event-list ca-event-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '29620eb5-4f8d-4730-8154-599e844d609d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd9ca21f-d189-4941-9b56-daffa09c14e3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_list-ca_event_list_view_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd9ca21f-d189-4941-9b56-daffa09c14e3';
    $display->content['new-bd9ca21f-d189-4941-9b56-daffa09c14e3'] = $pane;
    $display->panels['middle'][0] = 'new-bd9ca21f-d189-4941-9b56-daffa09c14e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_calendar_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_calendar_view';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CA Events: List View Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_events_list_template',
          'settings' => array(
            'ca_events_list_template' => 'ca_events_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-event-list ca-event-list-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd7af0f90-120c-4d9b-9f6e-33e9ba366e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6e2a64be-2af9-485d-811a-eaf5772dc600';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_events_list-ca_event_list_view_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e2a64be-2af9-485d-811a-eaf5772dc600';
    $display->content['new-6e2a64be-2af9-485d-811a-eaf5772dc600'] = $pane;
    $display->panels['middle'][0] = 'new-6e2a64be-2af9-485d-811a-eaf5772dc600';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_events_calendar_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_events_taxonomy_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Events: Taxonomy Admin';
  $page->admin_description = '';
  $page->path = 'events/admin/taxonomy';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 256820458,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Taxonomy Admin',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_events_taxonomy_admin__ca_events_taxonomy_admin';
  $handler->task = 'page';
  $handler->subtask = 'ca_events_taxonomy_admin';
  $handler->handler = 'menu_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Events: Taxonomy Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ca_events_taxonomy_admin',
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => 'ca_events_categories',
    'context_admin_vocabulary_options' => 'list',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_events_taxonomy_admin'] = $page;

  return $pages;

}
