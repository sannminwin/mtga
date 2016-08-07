<?php
/**
 * @file
 * mtga_3.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mtga_3_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_us|node|airline|default';
  $field_group->group_name = 'group_about_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'airline';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'About Us',
    'weight' => '23',
    'children' => array(
      0 => 'field_about_us',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-us field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_about_us|node|airline|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|airline|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'airline';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'field_about_us',
      2 => 'field_profile_photo',
      3 => 'field_banner_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about|node|airline|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_air_contact|node|airline|default';
  $field_group->group_name = 'group_air_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'airline';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '24',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_address_profile',
      2 => 'field_mobile_phone',
      3 => 'field_email',
      4 => 'field_facebook_url',
      5 => 'field_website',
      6 => 'field_fax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-air-contact field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_air_contact|node|airline|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|airline|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'airline';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'group_air_contact',
      1 => 'group_about_us',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-contact field-group-htabs',
        'description' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_contact|node|airline|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|airline|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'airline';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_address_profile',
      1 => 'field_email',
      2 => 'field_facebook_url',
      3 => 'field_website',
      4 => 'field_fax',
      5 => 'field_phone_text_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|airline|form'] = $field_group;

  return $export;
}
