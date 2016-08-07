/**
 * @file
 * Turn Drupal messages into Bootstrap Modals!
 */
(function ($) {
  /**
   * Function to open the modal.
   */
  var bootstrap_modal_messages_open = function($settings, $controls_click) {
    // Controls were clicked to open modal.
    if ($controls_click) {
      if ($settings.multiple == 'multiple') {
        if ($settings.messages_storage.length > 0 && $settings.messages.length <= 0) {
          $settings.messages = $settings.messages_storage;
          $('#bmm-modal').find('.modal-body').html($settings.messages[0]);
          $settings.messages.shift();
        }
      }
    }
    // Multiple type messages.
    if (Object.prototype.hasOwnProperty.call($settings, 'messages')) {
      $('#bmm-modal').modal().on('hidden.bs.modal', function (e) {
        if ($settings.messages.length > 0) {
          $('#bmm-modal').find('.modal-body').html($settings.messages[0]).end()
              .modal();
          $settings.messages.shift();
        }
        else {
          $('#bmm-modal').off('hidden.bs.modal');
        }
      });
    }
    // Single - all in one.
    else {
      $('#bmm-modal').modal();
    }

    return false;
  }

  // Main loop.
  Drupal.behaviors.bootstrap_modal_messages = {
    attach: function (context, settings) {
      var $settings = settings.bootstrap_modal_messages || {};
      var $body = $(document.body);
      var $messages_html = 'No messages';
      $body.once('bootstrap-modal-messages', function() {
        // Let's not deal with issues where the person doesn't have BS JS.
        if (!$.isFunction($.fn.modal)) {
          return;
        }
        // Set 1/0 to true/false respectively.
        $.each($settings, function(key, value) {
          if (value == 0) {
            $settings[key] = false;
          }
          if (value == 1) {
            $settings[key] = true;
          }
        });

        var $modal_content = $('<div class="modal fade" id="bmm-modal" tabindex="-1" role="dialog" aria-labelledby="bmm-label" aria-hidden="true">'
          + '<div class="modal-dialog">'
          + '<div class="modal-content">');

        // Modal header.
        if ($settings.show_header) {
          $modal_content.find('.modal-content').append('<div class="modal-header" id="bmm-label">');
          if ($settings.header_close) {
            $modal_content.find('.modal-header').append('<button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>');
          }
          $modal_content.find('.modal-header').append($settings.title);
        }

        // Modal body.
        switch ($settings.multiple) {
          // All messages in 1 modal.
          case 'single':
            if ($body.find($settings.selector).length > 0) {
              $messages_html = '';
              $body.find($settings.selector).each(function(index) {
                $messages_html += $(this).detach().wrap('<p/>').parent().html();
              });
            }
            $modal_content.find('.modal-content').append('<div class="modal-body">' + $messages_html + '</div>');
          break;
          // Multiple modals per message type.
          case 'multiple':
            $settings.messages = [];
            $settings.messages_storage = [];
            $body.find($settings.selector).each(function(index) {
              $settings.messages_storage[index] = $settings.messages[index] = $(this).detach().wrap('<p/>').parent().html();
            });
            if ($settings.messages.length > 0) {
              $messages_html = $settings.messages[0];
              $settings.messages.shift();
            }
            $modal_content.find('.modal-content').append('<div class="modal-body">' + $messages_html + '</div>');
          break;
        }

        // Modal footer.
        if ($settings.show_footer) {
          $modal_content.find('.modal-content').append('<div class="modal-footer">' + $settings.footer_html + '</div>');
        }

        // Now add it to the page.
        $body.append($modal_content);

        // Controls.
        if ($settings.show_controls) {
          var $controls = $('<div class="bmm-modal-controls">' + $settings.controls_html + '</div>');
          $body.append($controls);
          $controls.on('click', function() {
            bootstrap_modal_messages_open($settings, true);
          });
        }

        // Show on load.
        if ($settings.show_onload && $messages_html != 'No messages') {
          bootstrap_modal_messages_open($settings, false);
        }

      });
    }
  };
}(jQuery));
