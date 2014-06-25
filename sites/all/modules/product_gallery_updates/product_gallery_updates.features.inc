<?php
/**
 * @file
 * product_gallery_updates.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function product_gallery_updates_views_default_views_alter(&$data) {
  if (isset($data['product_gallery'])) {
    $data['product_gallery']->display['default']->display_options['fields']['title'] = array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'element_type' => 'h6',
      'element_class' => 'center',
      'element_label_colon' => FALSE,
    ); /* WAS: '' */
  }
}
