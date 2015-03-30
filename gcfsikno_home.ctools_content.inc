<?php
/**
 * @file
 * gcfsikno_home.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function gcfsikno_home_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'footer_left';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'About the Knowledge Platform',
    'body' => '<p>The GCFSI knowledge platform was created in XXXX by XXXXXX. This is some text; anything could go here.</p>

<p>This is some text; anything could go here. This is some text; anything could go here. This is some text; anything could go here. This is some text; anything could go here.</p>

<p>This is some text; anything could go here.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['footer_left'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'footer_middle';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Our Partners',
    'body' => '<p>The GCFSI knowledge platform is made possible by grants and donations.</p>

<p>This is some text; anything could go here. This is some text; anything could go here. This is some text; anything could go here.</p>

<p>This is some text; anything could go here. This is some text; anything could go here.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['footer_middle'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'footer_right';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Our Mission',
    'body' => '<p><strong>Collaboration</strong><br />
This is some text; anything could go here. This is some text; anything could go here. This is some text; anything could go here.<br />
<strong>Communication</strong><br />
This is some text; anything could go here. This is some text; anything could go here. This is some text; anything could go here..<br />
<strong>Sustainability</strong><br />
This is some text; anything could go here. This is some text; anything could go here.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['footer_right'] = $content;

  return $export;
}
