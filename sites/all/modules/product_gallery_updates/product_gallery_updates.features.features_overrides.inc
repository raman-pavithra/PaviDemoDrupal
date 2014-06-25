<?php
/**
 * @file
 * product_gallery_updates.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function product_gallery_updates_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.product_gallery.display|default|display_options|fields|title"] = array(
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'label' => '',
    'element_type' => 'h6',
    'element_class' => 'center',
    'element_label_colon' => FALSE,
  );

 return $overrides;
}
