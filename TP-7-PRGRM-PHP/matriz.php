<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Programacion Web</title>
</head>
<body style="background-color: lightblue">

<img src="logo-uch.png" width="80px" style="position: absolute; top: 0; right: 0;">
<img src="logo-uch.png" width="80px" style="position: absolute; bottom: 0; left: 0;">

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $filas = intval($_POST["filas"]);
    $columnas = intval($_POST["columnas"]);
    
    function calcularValorCelda($fila, $columna) {
        return ($fila + $columna) ** 2;
    }
    
    echo "<h2>Matriz:</h2>";
    echo "<table border='1'>";
    for ($i = 1; $i <= $filas; $i++) {
        echo "<tr>";
        for ($j = 1; $j <= $columnas; $j++) {
            $valor = calcularValorCelda($i, $j);
            echo "<td>$valor</td>";
        }
        echo "</tr>";
    }
    echo "</table>";
}
?>
    
</body>
</html>
