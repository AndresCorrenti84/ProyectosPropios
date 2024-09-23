<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP</title>
</head>
<body style="background-color: lightblue">

<img src="logo-uch.png" width="80px" style="position: absolute; top: 0; right: 0;">
<img src="logo-uch.png" width="80px" style="position: absolute; bottom: 0; left: 0;">

    <form action="procesar.php" method="post">
        <label for="filas">Cantidad de Filas:</label>
        <input type="number" name="filas" id="filas" required> <br>
        
        <label for="columnas">Cantidad de Columnas:</label>
        <input type="number" name="columnas" id="columnas" required> <br> <br>
        
        <input type="submit" value="Enviar Datos">
    </form>
    
</body>
</html>