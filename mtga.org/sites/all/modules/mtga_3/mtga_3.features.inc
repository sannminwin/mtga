<?php
/**
 * @file
 * mtga_3.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtga_3_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mtga_3_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mtga_3_node_info() {
  $items = array(
    'airline' => array(
      'name' => t('Airline'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'boat_river_cruise' => array(
      'name' => t('Boat & River Cruise'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'car_rental' => array(
      'name' => t('Car Rental'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cec' => array(
      'name' => t('CEC'),
      'base' => 'node_content',
      'description' => t('To create a list of MTGA cec.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gift_souvenir_shop' => array(
      'name' => t('Gift & Souvenir Shop'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'hotel' => array(
      'name' => t('Hotel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'restaurant' => array(
      'name' => t('Restaurant'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff_tourism_' => array(
      'name' => t('Staff (Tourism)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'travel_agency' => array(
      'name' => t('Travel Agency'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
