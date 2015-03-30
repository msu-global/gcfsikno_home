<?php
/**
 * @file
 * gcfsikno_home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gcfsikno_home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'global_footer';
  $mini->category = '';
  $mini->admin_title = 'Global Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'spartan_threecol_tworow';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'upper_left' => NULL,
      'upper_middle' => NULL,
      'upper_right' => NULL,
      'lower_left' => NULL,
      'lower_middle' => NULL,
      'lower_right' => NULL,
    ),
    'lower_left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9e967332-1ba3-45fb-b35d-adaa4f0465cd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e7612b8-d9e3-4dab-838f-0c61e7ae5088';
    $pane->panel = 'lower_left';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Admin Masquerade',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e7612b8-d9e3-4dab-838f-0c61e7ae5088';
    $display->content['new-8e7612b8-d9e3-4dab-838f-0c61e7ae5088'] = $pane;
    $display->panels['lower_left'][0] = 'new-8e7612b8-d9e3-4dab-838f-0c61e7ae5088';
    $pane = new stdClass();
    $pane->pid = 'new-6ea1ac13-cb29-4d22-91ed-547da3354162';
    $pane->panel = 'upper_left';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'about',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ea1ac13-cb29-4d22-91ed-547da3354162';
    $display->content['new-6ea1ac13-cb29-4d22-91ed-547da3354162'] = $pane;
    $display->panels['upper_left'][0] = 'new-6ea1ac13-cb29-4d22-91ed-547da3354162';
    $pane = new stdClass();
    $pane->pid = 'new-03c3313d-1cf8-4923-a7b8-164e6460c31f';
    $pane->panel = 'upper_middle';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'partners',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03c3313d-1cf8-4923-a7b8-164e6460c31f';
    $display->content['new-03c3313d-1cf8-4923-a7b8-164e6460c31f'] = $pane;
    $display->panels['upper_middle'][0] = 'new-03c3313d-1cf8-4923-a7b8-164e6460c31f';
    $pane = new stdClass();
    $pane->pid = 'new-97bafa5d-5145-4d55-a57d-5319744054bb';
    $pane->panel = 'upper_right';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'mission',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '97bafa5d-5145-4d55-a57d-5319744054bb';
    $display->content['new-97bafa5d-5145-4d55-a57d-5319744054bb'] = $pane;
    $display->panels['upper_right'][0] = 'new-97bafa5d-5145-4d55-a57d-5319744054bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['global_footer'] = $mini;

  return $export;
}
