```html
<!doctype html>
<html lang="en">
  <head>
    <title>Title</title>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
  </head>
  <body>
      <div class="container">
        <img src="" id="rainbow" width="200">
        <script>

            catchRainbow().catch(error => {
                console.error(error);
            });;

            async function catchRainbow() {
                const response = await fetch('images/rainbow.jpg');
                const blob = await response.blob();
                document.getElementById('rainbow').src = URL.createObjectURL(blob);;

            };

            /* console.log('about to fetch a rainbow');
            fetch('images/rainbow.jpg')
            .then(function response(res){
                console.log(res);
                return res.blob();
            })
            .then(function blob(res){
                console.log(res);
                document.getElementById('rainbow').src = URL.createObjectURL(res);;
            })
            .catch(function error(){ //fungerar ej?
                console.log(error);
            }); */

            /* console.log('about to fetch a rainbow');
            fetch('images/rainbow.jpg')
            .then(response => {
                console.log(response);
                return response.blob();
            })
            .then(blob => {
                console.log(blob);
                document.getElementById('rainbow').src = URL.createObjectURL(blob);
            })
            .catch(error => {
                console.error(error);
            }); */
        </script>

      </div>
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
  </body>
</html>
```
