<?php
/**
 * @file
 * mtga_3.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mtga_3_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clone of Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['css_class'] = 'directory-all';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Star Rating */
  $handler->display->display_options['fields']['field_star_rating']['id'] = 'field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['table'] = 'field_data_field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['field'] = 'field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['label'] = '';
  $handler->display->display_options['fields']['field_star_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_star_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_star_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_star_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'smart',
    'text' => 'none',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address_profile']['id'] = 'field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['table'] = 'field_data_field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['field'] = 'field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['label'] = '';
  $handler->display->display_options['fields']['field_address_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_profile']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_address_profile']['settings'] = array(
    'trim_length' => '20',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '

 ';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: AddThis */
  $handler->display->display_options['fields']['field_addthis']['id'] = 'field_addthis';
  $handler->display->display_options['fields']['field_addthis']['table'] = 'field_data_field_addthis';
  $handler->display->display_options['fields']['field_addthis']['field'] = 'field_addthis';
  $handler->display->display_options['fields']['field_addthis']['label'] = '';
  $handler->display->display_options['fields']['field_addthis']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addthis']['alter']['text'] = '<div class="directory">
<span class="title">[title] </span>
[field_star_rating] <hr/>
<i class="fa fa-home"></i> &nbsp;[field_address_profile]<hr/>
<i class="fa  fa-phone"></i> &nbsp;[field_phone]<hr/>
<i class="fa  fa-globe"></i> &nbsp;[field_website]<hr/>
[field_addthis]
</div>';
  $handler->display->display_options['fields']['field_addthis']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_addthis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_addthis']['type'] = 'addthis_basic_toolbox';
  $handler->display->display_options['fields']['field_addthis']['settings'] = array(
    'share_services' => 'facebook,twitter',
    'buttons_size' => 'addthis_16x16_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'airline' => 'airline',
    'boat_river_cruise' => 'boat_river_cruise',
    'car_rental' => 'car_rental',
    'gift_souvenir_shop' => 'gift_souvenir_shop',
    'hotel' => 'hotel',
    'restaurant' => 'restaurant',
    'staff_tourism_' => 'staff_tourism_',
    'page' => 'page',
    'travel_agency' => 'travel_agency',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Type Name of Business';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Page: Directory All */
  $handler = $view->new_display('page', 'Page: Directory All', 'page');
  $handler->display->display_options['path'] = 'directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'MTGA Directory';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page: Directory Airlines */
  $handler = $view->new_display('page', 'Page: Directory Airlines', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'airline' => 'airline',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/airlines';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Airlines';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Boat & River Cruise */
  $handler = $view->new_display('page', 'Page: Directory Boat & River Cruise', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boat_river_cruise' => 'boat_river_cruise',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/boat_and_river_cruise';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'River Cruises';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Car Rental */
  $handler = $view->new_display('page', 'Page: Directory Car Rental', 'page_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'car_rental' => 'car_rental',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/car_rentals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Car Rentals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Gift & Souvenir Shop */
  $handler = $view->new_display('page', 'Page: Directory Gift & Souvenir Shop', 'page_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gift_souvenir_shop' => 'gift_souvenir_shop',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/gift_souvenir_shops';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Gift & Souvenir Shops';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Hotel */
  $handler = $view->new_display('page', 'Page: Directory Hotel', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hotel' => 'hotel',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/hotels';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Hotels';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Restaurant */
  $handler = $view->new_display('page', 'Page: Directory Restaurant', 'page_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'restaurant' => 'restaurant',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/restaurants';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Restaurants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Staff (Tourism) */
  $handler = $view->new_display('page', 'Page: Directory Staff (Tourism)', 'page_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff_tourism_' => 'staff_tourism_',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/staffs_in_tourism';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Staffs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Tourist Guide */
  $handler = $view->new_display('page', 'Page: Directory Tourist Guide', 'page_8');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/tourist-guides';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Tourist Guides';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Travel Agent */
  $handler = $view->new_display('page', 'Page: Directory Travel Agent', 'page_9');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'travel_agency' => 'travel_agency',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/travel_agents';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Travel Agents';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['clone_of_directory'] = $view;

  $view = new view();
  $view->name = 'directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['css_class'] = 'directory-all';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Star Rating */
  $handler->display->display_options['fields']['field_star_rating']['id'] = 'field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['table'] = 'field_data_field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['field'] = 'field_star_rating';
  $handler->display->display_options['fields']['field_star_rating']['label'] = '';
  $handler->display->display_options['fields']['field_star_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_star_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_star_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_star_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'smart',
    'text' => 'none',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address_profile']['id'] = 'field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['table'] = 'field_data_field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['field'] = 'field_address_profile';
  $handler->display->display_options['fields']['field_address_profile']['label'] = '';
  $handler->display->display_options['fields']['field_address_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_profile']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_address_profile']['settings'] = array(
    'trim_length' => '20',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '

 ';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: AddThis */
  $handler->display->display_options['fields']['field_addthis']['id'] = 'field_addthis';
  $handler->display->display_options['fields']['field_addthis']['table'] = 'field_data_field_addthis';
  $handler->display->display_options['fields']['field_addthis']['field'] = 'field_addthis';
  $handler->display->display_options['fields']['field_addthis']['label'] = '';
  $handler->display->display_options['fields']['field_addthis']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addthis']['alter']['text'] = '<div class="directory">
<span class="title">[title] </span>
[field_star_rating] <hr/>
<i class="fa fa-home"></i> &nbsp;[field_address_profile]<hr/>
<i class="fa  fa-phone"></i> &nbsp;[field_phone]<hr/>
<i class="fa  fa-globe"></i> &nbsp;[field_website]<hr/>
[field_addthis]
</div>';
  $handler->display->display_options['fields']['field_addthis']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_addthis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_addthis']['type'] = 'addthis_basic_toolbox';
  $handler->display->display_options['fields']['field_addthis']['settings'] = array(
    'share_services' => 'facebook,twitter',
    'buttons_size' => 'addthis_16x16_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'airline' => 'airline',
    'boat_river_cruise' => 'boat_river_cruise',
    'car_rental' => 'car_rental',
    'gift_souvenir_shop' => 'gift_souvenir_shop',
    'hotel' => 'hotel',
    'restaurant' => 'restaurant',
    'staff_tourism_' => 'staff_tourism_',
    'page' => 'page',
    'travel_agency' => 'travel_agency',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Type Name of Business';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Page: Directory All */
  $handler = $view->new_display('page', 'Page: Directory All', 'page');
  $handler->display->display_options['path'] = 'directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'MTGA Directory';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page: Directory Airlines */
  $handler = $view->new_display('page', 'Page: Directory Airlines', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'airline' => 'airline',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/airlines';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Airlines';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Boat & River Cruise */
  $handler = $view->new_display('page', 'Page: Directory Boat & River Cruise', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boat_river_cruise' => 'boat_river_cruise',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/boat_and_river_cruise';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'River Cruises';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Car Rental */
  $handler = $view->new_display('page', 'Page: Directory Car Rental', 'page_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'car_rental' => 'car_rental',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/car_rentals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Car Rentals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Gift & Souvenir Shop */
  $handler = $view->new_display('page', 'Page: Directory Gift & Souvenir Shop', 'page_5');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gift_souvenir_shop' => 'gift_souvenir_shop',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/gift_souvenir_shops';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Gift & Souvenir Shops';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Hotel */
  $handler = $view->new_display('page', 'Page: Directory Hotel', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hotel' => 'hotel',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/hotels';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Hotels';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Restaurant */
  $handler = $view->new_display('page', 'Page: Directory Restaurant', 'page_6');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'restaurant' => 'restaurant',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/restaurants';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Restaurants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Staff (Tourism) */
  $handler = $view->new_display('page', 'Page: Directory Staff (Tourism)', 'page_7');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff_tourism_' => 'staff_tourism_',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/staffs_in_tourism';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Staffs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Directory Tourist Guide */
  $handler = $view->new_display('page', 'Page: Directory Tourist Guide', 'page_8');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Select Type of Business';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'directory/tourist-guides';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Tourist Guides';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['directory'] = $view;

  $view = new view();
  $view->name = 'mtga_cecs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MTGA CECs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MTGA CECs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cec' => 'cec',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mtga-cecs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MTGA CECs';
  $handler->display->display_options['menu']['name'] = 'devel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '<span class="user-picture">[field_photo]</span>';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '50x50',
    'image_link' => 'content',
  );
  $export['mtga_cecs'] = $view;

  $view = new view();
  $view->name = 'reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reference:Audio/Song';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Related Topic (field_related_topic) */
  $handler->display->display_options['filters']['field_related_topic_tid']['id'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['table'] = 'field_data_field_related_topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['field'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['value'] = array(
    248 => '248',
    242 => '242',
    236 => '236',
    239 => '239',
    241 => '241',
    237 => '237',
    244 => '244',
    235 => '235',
    238 => '238',
    234 => '234',
    240 => '240',
    243 => '243',
    246 => '246',
    245 => '245',
    247 => '247',
  );
  $handler->display->display_options['filters']['field_related_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator_id'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['label'] = 'Related Topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['identifier'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_topic_tid']['vocabulary'] = 'related_topics';
  /* Filter criterion: Field: Related Location (field_related_location) */
  $handler->display->display_options['filters']['field_related_location_tid']['id'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['table'] = 'field_data_field_related_location';
  $handler->display->display_options['filters']['field_related_location_tid']['field'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['value'] = array(
    15 => '15',
    113 => '113',
    181 => '181',
    79 => '79',
    127 => '127',
    30 => '30',
    78 => '78',
    138 => '138',
    122 => '122',
    118 => '118',
    91 => '91',
    126 => '126',
    20 => '20',
    83 => '83',
    17 => '17',
    65 => '65',
    176 => '176',
    74 => '74',
    62 => '62',
    24 => '24',
    143 => '143',
    171 => '171',
    44 => '44',
    150 => '150',
    163 => '163',
    108 => '108',
    149 => '149',
    94 => '94',
    40 => '40',
    50 => '50',
    134 => '134',
    192 => '192',
    101 => '101',
    54 => '54',
    117 => '117',
    12 => '12',
    36 => '36',
    96 => '96',
    104 => '104',
    193 => '193',
    53 => '53',
    63 => '63',
    77 => '77',
    25 => '25',
    189 => '189',
    88 => '88',
    56 => '56',
    98 => '98',
    66 => '66',
    130 => '130',
    196 => '196',
    61 => '61',
    115 => '115',
    142 => '142',
    106 => '106',
    67 => '67',
    170 => '170',
    38 => '38',
    169 => '169',
    89 => '89',
    147 => '147',
    76 => '76',
    68 => '68',
    14 => '14',
    160 => '160',
    39 => '39',
    137 => '137',
    125 => '125',
    156 => '156',
    128 => '128',
    159 => '159',
  );
  $handler->display->display_options['filters']['field_related_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator_id'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['label'] = 'Related Location';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['identifier'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_location_tid']['vocabulary'] = 'forums';
  $handler->display->display_options['filters']['field_related_location_tid']['hierarchy'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'view_node' => 'view_node',
  );
  /* Filter criterion: Content: Select type (field_type_of_document) */
  $handler->display->display_options['filters']['field_type_of_document_tid']['id'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['table'] = 'field_data_field_type_of_document';
  $handler->display->display_options['filters']['field_type_of_document_tid']['field'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['value'] = array(
    228 => '228',
  );
  $handler->display->display_options['filters']['field_type_of_document_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_document_tid']['vocabulary'] = 'type_of_document';

  /* Display: All Reference */
  $handler = $view->new_display('page', 'All Reference', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reference:All';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'reference';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reference';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Topics */
  $handler = $view->new_display('page', 'Topics', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reference:Topics';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'reference/topics';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Topics';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Ebooks */
  $handler = $view->new_display('page_with_page_title', 'Page: Ebooks', 'page_with_page_title_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Book Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = 'by';
  /* Field: Content: Book Cover */
  $handler->display->display_options['fields']['field_book_cover']['id'] = 'field_book_cover';
  $handler->display->display_options['fields']['field_book_cover']['table'] = 'field_data_field_book_cover';
  $handler->display->display_options['fields']['field_book_cover']['field'] = 'field_book_cover';
  $handler->display->display_options['fields']['field_book_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_book_cover']['settings'] = array(
    'image_style' => '150x150',
    'image_link' => '',
  );
  /* Field: Content: Book Name */
  $handler->display->display_options['fields']['field_book_name']['id'] = 'field_book_name';
  $handler->display->display_options['fields']['field_book_name']['table'] = 'field_data_field_book_name';
  $handler->display->display_options['fields']['field_book_name']['field'] = 'field_book_name';
  $handler->display->display_options['fields']['field_book_name']['label'] = '';
  $handler->display->display_options['fields']['field_book_name']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Select type (field_type_of_document) */
  $handler->display->display_options['filters']['field_type_of_document_tid']['id'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['table'] = 'field_data_field_type_of_document';
  $handler->display->display_options['filters']['field_type_of_document_tid']['field'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['value'] = array(
    207 => '207',
  );
  $handler->display->display_options['filters']['field_type_of_document_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_document_tid']['vocabulary'] = 'type_of_document';
  /* Filter criterion: Content: Book Categories (field_book_categories) */
  $handler->display->display_options['filters']['field_book_categories_tid']['id'] = 'field_book_categories_tid';
  $handler->display->display_options['filters']['field_book_categories_tid']['table'] = 'field_data_field_book_categories';
  $handler->display->display_options['filters']['field_book_categories_tid']['field'] = 'field_book_categories_tid';
  $handler->display->display_options['filters']['field_book_categories_tid']['value'] = array(
    179 => '179',
    16 => '16',
    73 => '73',
    55 => '55',
    81 => '81',
    121 => '121',
    31 => '31',
    109 => '109',
    32 => '32',
    129 => '129',
    124 => '124',
    18 => '18',
    148 => '148',
    82 => '82',
    37 => '37',
    28 => '28',
    111 => '111',
    58 => '58',
    116 => '116',
    90 => '90',
    80 => '80',
    100 => '100',
    158 => '158',
    186 => '186',
    187 => '187',
    52 => '52',
    190 => '190',
    41 => '41',
    49 => '49',
    51 => '51',
  );
  $handler->display->display_options['filters']['field_book_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_categories_tid']['expose']['operator_id'] = 'field_book_categories_tid_op';
  $handler->display->display_options['filters']['field_book_categories_tid']['expose']['label'] = 'Book Categories';
  $handler->display->display_options['filters']['field_book_categories_tid']['expose']['operator'] = 'field_book_categories_tid_op';
  $handler->display->display_options['filters']['field_book_categories_tid']['expose']['identifier'] = 'field_book_categories_tid';
  $handler->display->display_options['filters']['field_book_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_book_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_book_categories_tid']['vocabulary'] = 'catalog';
  $handler->display->display_options['filters']['field_book_categories_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'reference/ebooks';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ebooks Library';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page: Video/Movie */
  $handler = $view->new_display('page_with_page_title', 'Page: Video/Movie', 'page_with_page_title_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Upload Movie */
  $handler->display->display_options['fields']['field_upload_movie']['id'] = 'field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['table'] = 'field_data_field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['field'] = 'field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['label'] = '';
  $handler->display->display_options['fields']['field_upload_movie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_movie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_movie']['type'] = 'file_video';
  $handler->display->display_options['fields']['field_upload_movie']['settings'] = array(
    'controls' => 0,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '200',
    'height' => '150',
    'multiple_file_behavior' => 'tags',
  );
  $handler->display->display_options['fields']['field_upload_movie']['delta_offset'] = '0';
  /* Field: Content: YouTube Link */
  $handler->display->display_options['fields']['field_you_']['id'] = 'field_you_';
  $handler->display->display_options['fields']['field_you_']['table'] = 'field_data_field_you_';
  $handler->display->display_options['fields']['field_you_']['field'] = 'field_you_';
  $handler->display->display_options['fields']['field_you_']['label'] = '';
  $handler->display->display_options['fields']['field_you_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_you_']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_you_']['settings'] = array(
    'youtube_size' => 'custom',
    'youtube_width' => '200',
    'youtube_height' => '150',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Related Location (field_related_location) */
  $handler->display->display_options['filters']['field_related_location_tid']['id'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['table'] = 'field_data_field_related_location';
  $handler->display->display_options['filters']['field_related_location_tid']['field'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator_id'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['label'] = 'Related Location';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['identifier'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_location_tid']['vocabulary'] = 'forums';
  /* Filter criterion: Content: Related Topic (field_related_topic) */
  $handler->display->display_options['filters']['field_related_topic_tid']['id'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['table'] = 'field_data_field_related_topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['field'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator_id'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['label'] = 'Related Topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['identifier'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_topic_tid']['vocabulary'] = 'related_topics';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );
  /* Filter criterion: Content: Select type (field_type_of_document) */
  $handler->display->display_options['filters']['field_type_of_document_tid']['id'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['table'] = 'field_data_field_type_of_document';
  $handler->display->display_options['filters']['field_type_of_document_tid']['field'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['value'] = array(
    229 => '229',
    249 => '249',
  );
  $handler->display->display_options['filters']['field_type_of_document_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_document_tid']['vocabulary'] = 'type_of_document';
  $handler->display->display_options['path'] = 'reference/video';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Video/Movie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: Audio/Sound */
  $handler = $view->new_display('page_with_page_title', 'Page: Audio/Sound', 'page_with_page_title_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reference:Audio/Song';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Descritpion';
  /* Field: Content: Upload Audio */
  $handler->display->display_options['fields']['field_upload_audio']['id'] = 'field_upload_audio';
  $handler->display->display_options['fields']['field_upload_audio']['table'] = 'field_data_field_upload_audio';
  $handler->display->display_options['fields']['field_upload_audio']['field'] = 'field_upload_audio';
  $handler->display->display_options['fields']['field_upload_audio']['label'] = '';
  $handler->display->display_options['fields']['field_upload_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_audio']['type'] = 'file_audio';
  $handler->display->display_options['fields']['field_upload_audio']['settings'] = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'multiple_file_behavior' => 'tags',
  );
  $handler->display->display_options['path'] = 'reference/audio';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Audio/Sound';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: Images */
  $handler = $view->new_display('page_with_page_title', 'Page: Images', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['path'] = 'reference/images';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: Other */
  $handler = $view->new_display('page_with_page_title', 'Page: Other', 'page_with_page_title_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reference:Other';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_document_file' => 'field_document_file',
    'field_document_file_1' => 'field_document_file_1',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_file_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Descritpion';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_document_file']['id'] = 'field_document_file';
  $handler->display->display_options['fields']['field_document_file']['table'] = 'field_data_field_document_file';
  $handler->display->display_options['fields']['field_document_file']['field'] = 'field_document_file';
  $handler->display->display_options['fields']['field_document_file']['label'] = 'Download Link';
  $handler->display->display_options['fields']['field_document_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'reference/other';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Other';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: Video/Movie second */
  $handler = $view->new_display('page_with_page_title', 'Page: Video/Movie second', 'page_with_page_title_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Upload Movie */
  $handler->display->display_options['fields']['field_upload_movie']['id'] = 'field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['table'] = 'field_data_field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['field'] = 'field_upload_movie';
  $handler->display->display_options['fields']['field_upload_movie']['label'] = '';
  $handler->display->display_options['fields']['field_upload_movie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_movie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_movie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_movie']['type'] = 'file_video';
  $handler->display->display_options['fields']['field_upload_movie']['settings'] = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '450',
    'height' => '',
    'multiple_file_behavior' => 'tags',
  );
  $handler->display->display_options['fields']['field_upload_movie']['delta_offset'] = '0';
  /* Field: Content: YouTube Link */
  $handler->display->display_options['fields']['field_you_']['id'] = 'field_you_';
  $handler->display->display_options['fields']['field_you_']['table'] = 'field_data_field_you_';
  $handler->display->display_options['fields']['field_you_']['field'] = 'field_you_';
  $handler->display->display_options['fields']['field_you_']['label'] = '';
  $handler->display->display_options['fields']['field_you_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_you_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_you_']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_you_']['settings'] = array(
    'youtube_size' => '420x315',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_upload_movie]
[field_you_]<br/>
[title] ( by [name] )
[body]
 [comments_link][field_addthis]
<hr/>


';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Related Topic (field_related_topic) */
  $handler->display->display_options['filters']['field_related_topic_tid']['id'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['table'] = 'field_data_field_related_topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['field'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['value'] = array(
    248 => '248',
    242 => '242',
    236 => '236',
    239 => '239',
    241 => '241',
    237 => '237',
    244 => '244',
    235 => '235',
    238 => '238',
    234 => '234',
    240 => '240',
    243 => '243',
    246 => '246',
    245 => '245',
    247 => '247',
  );
  $handler->display->display_options['filters']['field_related_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator_id'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['label'] = 'Related Topic';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['operator'] = 'field_related_topic_tid_op';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['identifier'] = 'field_related_topic_tid';
  $handler->display->display_options['filters']['field_related_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_topic_tid']['vocabulary'] = 'related_topics';
  /* Filter criterion: Field: Related Location (field_related_location) */
  $handler->display->display_options['filters']['field_related_location_tid']['id'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['table'] = 'field_data_field_related_location';
  $handler->display->display_options['filters']['field_related_location_tid']['field'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['value'] = array(
    15 => '15',
    113 => '113',
    181 => '181',
    79 => '79',
    127 => '127',
    30 => '30',
    78 => '78',
    138 => '138',
    122 => '122',
    118 => '118',
    91 => '91',
    126 => '126',
    20 => '20',
    83 => '83',
    17 => '17',
    65 => '65',
    176 => '176',
    74 => '74',
    62 => '62',
    24 => '24',
    143 => '143',
    171 => '171',
    44 => '44',
    150 => '150',
    163 => '163',
    108 => '108',
    149 => '149',
    94 => '94',
    40 => '40',
    50 => '50',
    134 => '134',
    192 => '192',
    101 => '101',
    54 => '54',
    117 => '117',
    12 => '12',
    36 => '36',
    96 => '96',
    104 => '104',
    193 => '193',
    53 => '53',
    63 => '63',
    77 => '77',
    25 => '25',
    189 => '189',
    88 => '88',
    56 => '56',
    98 => '98',
    66 => '66',
    130 => '130',
    196 => '196',
    61 => '61',
    115 => '115',
    142 => '142',
    106 => '106',
    67 => '67',
    170 => '170',
    38 => '38',
    169 => '169',
    89 => '89',
    147 => '147',
    76 => '76',
    68 => '68',
    14 => '14',
    160 => '160',
    39 => '39',
    137 => '137',
    125 => '125',
    156 => '156',
    128 => '128',
    159 => '159',
  );
  $handler->display->display_options['filters']['field_related_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_related_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator_id'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['label'] = 'Related Location';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['operator'] = 'field_related_location_tid_op';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['identifier'] = 'field_related_location_tid';
  $handler->display->display_options['filters']['field_related_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_related_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_location_tid']['vocabulary'] = 'forums';
  $handler->display->display_options['filters']['field_related_location_tid']['hierarchy'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'view_node' => 'view_node',
  );
  /* Filter criterion: Content: Select type (field_type_of_document) */
  $handler->display->display_options['filters']['field_type_of_document_tid']['id'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['table'] = 'field_data_field_type_of_document';
  $handler->display->display_options['filters']['field_type_of_document_tid']['field'] = 'field_type_of_document_tid';
  $handler->display->display_options['filters']['field_type_of_document_tid']['value'] = array(
    229 => '229',
  );
  $handler->display->display_options['filters']['field_type_of_document_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_document_tid']['vocabulary'] = 'type_of_document';
  $handler->display->display_options['path'] = 'reference/video/all';
  $handler->display->display_options['menu']['title'] = 'Video/Movie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['reference'] = $view;

  return $export;
}
