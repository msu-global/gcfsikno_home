<?php
/**
 * @file
 * gcfsikno_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gcfsikno_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'The home page for the GCFSI Knowledge Platform, which feature a full-width image, a blog posting, and login.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_home__home';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'home',
  );
  $display = new panels_display();
  $display->layout = 'spartan_homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slogan' => NULL,
      'hero' => NULL,
      'upper_left' => NULL,
      'upper_middle' => NULL,
      'upper_right' => NULL,
      'break' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed77d3ae-f96a-49c7-b8d7-f94765e576df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a075a95-2ef7-463e-9afe-1a996f567fc3';
    $pane->panel = 'break';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_recent-panel_pane_2';
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
    $pane->uuid = '2a075a95-2ef7-463e-9afe-1a996f567fc3';
    $display->content['new-2a075a95-2ef7-463e-9afe-1a996f567fc3'] = $pane;
    $display->panels['break'][0] = 'new-2a075a95-2ef7-463e-9afe-1a996f567fc3';
    $pane = new stdClass();
    $pane->pid = 'new-bb86c7b4-8fb9-4ca7-b4e4-62d16c2c8f21';
    $pane->panel = 'hero';
    $pane->type = 'block';
    $pane->subtype = 'spartan_layout-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'bb86c7b4-8fb9-4ca7-b4e4-62d16c2c8f21';
    $display->content['new-bb86c7b4-8fb9-4ca7-b4e4-62d16c2c8f21'] = $pane;
    $display->panels['hero'][0] = 'new-bb86c7b4-8fb9-4ca7-b4e4-62d16c2c8f21';
    $pane = new stdClass();
    $pane->pid = 'new-490e5282-86b9-4b26-9b26-037909427aa2';
    $pane->panel = 'slogan';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
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
    $pane->uuid = '490e5282-86b9-4b26-9b26-037909427aa2';
    $display->content['new-490e5282-86b9-4b26-9b26-037909427aa2'] = $pane;
    $display->panels['slogan'][0] = 'new-490e5282-86b9-4b26-9b26-037909427aa2';
    $pane = new stdClass();
    $pane->pid = 'new-6686c23e-f12c-489e-8cfc-905fa2503d07';
    $pane->panel = 'upper_left';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'blog',
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
    $pane->uuid = '6686c23e-f12c-489e-8cfc-905fa2503d07';
    $display->content['new-6686c23e-f12c-489e-8cfc-905fa2503d07'] = $pane;
    $display->panels['upper_left'][0] = 'new-6686c23e-f12c-489e-8cfc-905fa2503d07';
    $pane = new stdClass();
    $pane->pid = 'new-1abb2c43-e589-4829-8b50-2154b80537ca';
    $pane->panel = 'upper_middle';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'forum',
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
    $pane->uuid = '1abb2c43-e589-4829-8b50-2154b80537ca';
    $display->content['new-1abb2c43-e589-4829-8b50-2154b80537ca'] = $pane;
    $display->panels['upper_middle'][0] = 'new-1abb2c43-e589-4829-8b50-2154b80537ca';
    $pane = new stdClass();
    $pane->pid = 'new-e5b967bb-fa23-464d-a117-0fff4f29a623';
    $pane->panel = 'upper_right';
    $pane->type = 'spartan_html';
    $pane->subtype = 'spartan_html';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'html' => 'library',
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
    $pane->uuid = 'e5b967bb-fa23-464d-a117-0fff4f29a623';
    $display->content['new-e5b967bb-fa23-464d-a117-0fff4f29a623'] = $pane;
    $display->panels['upper_right'][0] = 'new-e5b967bb-fa23-464d-a117-0fff4f29a623';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
