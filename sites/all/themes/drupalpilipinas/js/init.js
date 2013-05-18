(function ($) {

  Drupal.behaviors.drupalpilipinas = {
    attach: function (context, settings) {
      var width = parseInt($('#block-drupinas-core-login').width()) + 20;
      $('#block-search-form').css('right', width + 'px');
     
      if ($('#secondary-menu')) {
        $('.region-user').css('margin-left', '186px');
      }
    }
  };

})(jQuery);
