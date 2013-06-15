(function ($) {

  Drupal.behaviors.drupalpilipinas = {
    attach: function (context, settings) {
      var width = parseInt($('#block-drupinas-core-login').width()) + 20;
      $('#block-search-form').css('right', width + 'px');
     
      if ($('#secondary-menu')) {
        $('.region-user').css('margin-right', '20px');
      }
      var width = $('body').width();
      var deducted_width = width - 300;
      var hero_title_side = deducted_width / 2;
      $(".view-hero div div.views-row.views-row-1 > div + div").css('width' , hero_title_side + 'px');
      $(".view-hero div div.views-row.views-row-3 > div + div").css('width' , hero_title_side + 'px');
      //alert(hero_title_side);
      
    }
  };

})(jQuery);
