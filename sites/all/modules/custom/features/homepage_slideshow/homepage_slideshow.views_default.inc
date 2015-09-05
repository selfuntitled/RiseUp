<?php
/**
 * @file
 * homepage_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'homepage_slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = TRUE;
  /* Field: Content: Cover Photo */
  $handler->display->display_options['fields']['field_cover_photo']['id'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['table'] = 'field_data_field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['field'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['label'] = '';
  $handler->display->display_options['fields']['field_cover_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cover_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cover_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_photo']['settings'] = array(
    'image_style' => 'homepage_slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_cover_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['field_api_classes'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'homepage_slideshow_video_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
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
  /* Filter criterion: Content: Feature in Slideshow (field_feature_in_slideshow) */
  $handler->display->display_options['filters']['field_feature_in_slideshow_value']['id'] = 'field_feature_in_slideshow_value';
  $handler->display->display_options['filters']['field_feature_in_slideshow_value']['table'] = 'field_data_field_feature_in_slideshow';
  $handler->display->display_options['filters']['field_feature_in_slideshow_value']['field'] = 'field_feature_in_slideshow_value';
  $handler->display->display_options['filters']['field_feature_in_slideshow_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block - Navgiation */
  $handler = $view->new_display('block', 'Block - Navgiation', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'hp_slideshow_nav',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = TRUE;
  /* Field: Content: Cover Photo */
  $handler->display->display_options['fields']['field_cover_photo']['id'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['table'] = 'field_data_field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['field'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['label'] = '';
  $handler->display->display_options['fields']['field_cover_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cover_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cover_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_photo']['settings'] = array(
    'image_style' => 'hp_slideshow_nav',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_cover_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'homepage_slideshow_video_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
  $export['homepage_slideshow'] = $view;

  return $export;
}
