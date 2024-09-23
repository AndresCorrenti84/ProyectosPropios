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

<?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $filas = intval($_POST["filas"]);
        $columnas = intval($_POST["columnas"]);

        echo "<table border='1' align='center'>";
        echo "<tr><td>Cantidad de Filas:</td><td>$filas</td></tr>";
        echo "<tr><td>Cantidad de Columnas:</td><td>$columnas</td></tr>";
        echo "<tr><td colspan='2' align='center'><a href='punto4.php'>Cancelar</a> | 
        <a href='tabla.php?filas=$filas&columnas=$columnas'>Confirmar</a></td></tr>";
        
        echo "</table>";
    } else {
        echo "Los datos del formulario no fueron enviados correctamente.";
    }
?>
    
</body>
</html>
