const char MAIN_page[] PROGMEM = R"====(
<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Web controlled LED</title>
  <script src='https://code.jquery.com/jquery-3.3.1.min.js'></script>
  <style>
    .center {
      display: flex;
      justify-content: center;
    }
    #button {
      cursor: pointer;
      padding: 20px 40px;
      font-size: 2em;
    }
    .css_on {
      background-color: green;
      color: white;
    }
    .css_off {
      background-color: red;
      color: black;
    }
  </style>
</head>

<body>
  <div class="center">
    <input type='button' id="button" class="css_off" value="LED Off">
  </div>
  
  <script>
    $(document).ready(function() {
      $('#button').click(function() {
        // returns true if not "css_off"
        var button_state = $("#button").hasClass("css_off");

        if (button_state == true) {
          $.ajax({
            type: 'POST',
            url: '/led',
            data: { browser_state: "On" },
          });
          $("#button").val("LED On");
          $("#button").removeClass("css_off").addClass("css_on");
        } else {
          $.ajax({
            type: 'POST',            
            url: '/led',
            data: { browser_state: "Off" },
          });
          $("#button").val("LED Off");
          $("#button").removeClass("css_on").addClass("css_off");
        }
        
      });
    });
  </script>
</body>

</html>
)====";
