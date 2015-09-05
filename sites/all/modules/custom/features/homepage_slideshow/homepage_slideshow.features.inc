<?php
/**
 * @file
 * homepage_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function homepage_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_slideshow.
  $styles['homepage_slideshow'] = array(
    'name' => 'homepage_slideshow',
    'label' => 'Homepage Slideshow',
    'effects' => array(
      32 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'style_name' => 'homepage_slideshow',
        ),
        'weight' => -10,
      ),
      30 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_effect',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'hp_slideshow_background',
          'landscape' => 'homepage_slideshow_full_frame',
          'ratio_adjustment' => 1.25,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: homepage_slideshow_full_frame.
  $styles['homepage_slideshow_full_frame'] = array(
    'name' => 'homepage_slideshow_full_frame',
    'label' => 'Homepage Slideshow Full Frame',
    'effects' => array(
      31 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slideshow_video_thumb.
  $styles['homepage_slideshow_video_thumb'] = array(
    'name' => 'homepage_slideshow_video_thumb',
    'label' => 'Homepagem Slideshow Video Thumbnail',
    'effects' => array(
      44 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 480,
          'height' => 270,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
      45 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_effect',
        'dimensions passthrough' => TRUE,
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'path' => 'sites/default/files/play-icon.png',
        ),
        'weight' => 3,
      ),
      46 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 100,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: homepage_slideshow_video_thumbnail.
  $styles['homepage_slideshow_video_thumbnail'] = array(
    'name' => 'homepage_slideshow_video_thumbnail',
    'label' => 'Homepage Slideshow Video',
    'effects' => array(
      40 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 482,
          'height' => 272,
          'anchor' => 'center-center',
        ),
        'weight' => -10,
      ),
      50 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      41 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_effect',
        'dimensions passthrough' => TRUE,
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'path' => 'sites/default/files/play-icon.png',
        ),
        'weight' => -8,
      ),
      42 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 0,
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => 5,
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      51 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 300,
            'xpos' => 'center',
            'ypos' => 'top',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -6,
      ),
      43 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'sites/default/files/notes-bg.jpg',
          'dimensions' => 'background',
        ),
        'weight' => -5,
      ),
      47 => array(
        'label' => 'Text',
        'help' => 'Add static or dynamic (coded) text to an image.',
        'dimensions passthrough' => TRUE,
        'form callback' => 'image_effects_text_form',
        'effect callback' => 'image_effects_text_effect',
        'summary theme' => 'image_effects_text_summary',
        'module' => 'image_effects_text',
        'name' => 'image_effects_text',
        'data' => array(
          'size' => 32,
          'xpos' => 'center',
          'ypos' => 'bottom-7',
          'halign' => 'center',
          'valign' => 'bottom',
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'alpha' => 100,
          'angle' => 0,
          'fontfile' => 'sites/default/files/fontyourface/local_fonts/Mathlete_Bulky-normal-bold/Mathlete-Bulky-webfont.ttf',
          'text_source' => 'text',
          'text' => 'New Video: Rise Again Indiegogo Campaign',
          'php' => 'if (!$image_context[\'entity\']) {
  return \'No referring entity\';
}
$entity_type = \'node\';
$field_name = \'my_field\';
$entity = $image_context[\'entity\'];
$field = field_get_items($entity_type, $entity, $field_name);
if ($field) {
  return isset($field[0][\'value\']) ? $field[0][\'value\'] : \'No field value\';
}
',
        ),
        'weight' => -4,
      ),
    ),
  );

  // Exported image style: hp_slideshow_background.
  $styles['hp_slideshow_background'] = array(
    'name' => 'hp_slideshow_background',
    'label' => 'Homepage Slideshow w/ background',
    'effects' => array(
      19 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 290,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      28 => array(
        'label' => 'Rounded Corners',
        'help' => 'This is true cropping, not overlays, so the result <em>can</em> be transparent.',
        'effect callback' => 'canvasactions_roundedcorners_effect',
        'dimensions passthrough' => TRUE,
        'form callback' => 'canvasactions_roundedcorners_form',
        'summary theme' => 'canvasactions_roundedcorners_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 4,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => -8,
      ),
      26 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#333333',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 1,
            'rightdiff' => 2,
            'topdiff' => 1,
            'bottomdiff' => 2,
          ),
        ),
        'weight' => -7,
      ),
      24 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 5,
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -6,
      ),
      20 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 300,
            'xpos' => 'left',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -5,
      ),
      18 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'sites/default/files/notes-bg.jpg',
          'dimensions' => 'original',
        ),
        'weight' => -4,
      ),
      48 => array(
        'label' => 'Text',
        'help' => 'Add static or dynamic (coded) text to an image.',
        'dimensions passthrough' => TRUE,
        'form callback' => 'image_effects_text_form',
        'effect callback' => 'image_effects_text_effect',
        'summary theme' => 'image_effects_text_summary',
        'module' => 'image_effects_text',
        'name' => 'image_effects_text',
        'data' => array(
          'size' => 36,
          'xpos' => 300,
          'ypos' => 'center',
          'halign' => 'left',
          'valign' => 'bottom',
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'alpha' => 100,
          'angle' => 0,
          'fontfile' => 'sites/default/files/fontyourface/local_fonts/Mathlete_Bulky-normal-bold/Mathlete-Bulky-webfont.ttf',
          'text_source' => 'text',
          'text' => '[node:title]',
          'php' => 'if (!$image_context[\'entity\']) {
  return \'No referring entity\';
}
$entity_type = \'node\';
$field_name = \'my_field\';
$entity = $image_context[\'entity\'];
$field = field_get_items($entity_type, $entity, $field_name);
if ($field) {
  return isset($field[0][\'value\']) ? $field[0][\'value\'] : \'No field value\';
}
',
        ),
        'weight' => 7,
      ),
    ),
  );

  // Exported image style: hp_slideshow_nav.
  $styles['hp_slideshow_nav'] = array(
    'name' => 'hp_slideshow_nav',
    'label' => 'Homepage Slideshow Thumbnail',
    'effects' => array(
      52 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 132,
          'height' => 82,
          'keepproportions' => 1,
          'style_name' => 'hp_slideshow_nav',
        ),
        'weight' => 0,
      ),
      53 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 132,
          'height' => 82,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
