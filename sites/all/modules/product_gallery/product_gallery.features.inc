<?php
/**
 * @file
 * product_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function product_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function product_gallery_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Display information about products promoted by the site.'),
      'has_title' => '1',
      'title_label' => t('Product Name'),
      'help' => '',
    ),
  );
  return $items;
}
