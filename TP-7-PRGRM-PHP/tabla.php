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
    $filas = intval($_GET["filas"]);
    $columnas = intval($_GET["columnas"]);

    echo "<table border='1'>";
    for ($i = 1; $i <= $filas; $i++) {
        echo "<tr>";
        for ($j = 1; $j <= $columnas; $j++) {
            echo "<td>Fila $i, Columna $j</td>";
        }
        echo "</tr>";
    }
    echo "</table>";
    ?>
    
</body>
</html>