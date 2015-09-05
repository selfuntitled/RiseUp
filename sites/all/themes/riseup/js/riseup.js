(function ($) {
  Drupal.behaviors.searchToggle = {
    attach: function(context, settings) {            
      $('#views-exposed-form-search-page').before('<a href="#" class="search-toggle" title="' + Drupal.t("Toggle Search") + '">' +
          '<span class="toggle-help">' + Drupal.t("Search") + '</span></a>');
      $('#views-exposed-form-search-page').removeClass('element-invisible');
      
      $('.search-toggle').click(function(){
        $('#views-exposed-form-search-page').slideToggle(5);
      });
    }
  };
})(jQuery);

/**For mobile version of menu, h2 and below are hidden always, for all screen resolutions.
Line 6 makes them visible so that when their parent is toggled in line 9, they appear.
For search, do we have a second search box?  Probably.  Why not create two block views here, one that's mobile and one that's desktop.
**/
