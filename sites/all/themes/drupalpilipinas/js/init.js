(function ($) {

  Drupal.behaviors.drupalpilipinas = {
    attach: function (context, settings) {
      var width = parseInt($('#secondary-menu').width()) + 20;
      $('.user-login').css('right', width + 'px');
      
    }
  };
})(jQuery);
