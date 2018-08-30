<?php
/**
 * @file
 * bos_component_quote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bos_component_quote_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function bos_component_quote_paragraphs_info() {
  $items = array(
    'quote' => array(
      'name' => 'Quote',
      'bundle' => 'quote',
      'locked' => '1',
    ),
  );
  return $items;
}