# Lab 2

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>

</head>

<body id="bg">
    <button onclick="changeRed()">Red</button>
    <button onclick="changeBlue()">Blue</button>
    <button onclick="addToSel()">Add option</button>
    <button onclick="jumpTo()">Gå till MDH</button>

    <p onmouseover="changeRed()">Johan</p>
    
    <input type="text" onblur="writeH1(value)">
    <input type="text" this.onblur="writeH1()">
    <input type="radio" onchange="changeRed()" name="color">
    <input type="radio" onchange="changeBlue()" name="color">
    <input type="radio" onchange="changeReset()" name="color">

    <select name="drop" id="mySel"></select>

    <script>
        var i = 0;

        function changeRed() {
            console.log('Red');
            document.body.style.backgroundColor = 'red';
        }
        function changeBlue() {
            console.log('Blue');
            document.body.style.backgroundColor = 'blue';
        }
        function changeReset() {
            console.log('White');
            document.body.style.backgroundColor = 'white';
        }
        function addToSel() {
            console.log('Added ' + i);
            var sel = document.getElementById('mySel');
            var opt = document.createElement('option');

            opt.text = 'Option nr ' + i;
            i++;
            sel.add(opt);
        }
        function jumpTo(){
            window.location.href ='https://www.mdh.se';
        }
        function writeH1(text){
            console.log(text);
            var h1 = document.createElement('h1');
            h1.innerText = text;
            document.body.appendChild(h1); 
            console.log(h1);
        }
    </script>
</body>
</html>
```
