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
    $cantidadListas = $_POST["cantidad_listas"];
    $cantidadItems = $_POST["cantidad_items"];


    if (!is_numeric($cantidadListas) || !is_numeric($cantidadItems)) {
        echo "Por favor, ingrese valores numéricos válidos.";
    } else {
        // Crear las listas
        for ($lista = 1; $lista <= $cantidadListas; $lista++) {
            echo "<h3>Lista $lista:</h3>";
            echo "<ul>";
            
            for ($item = 1; $item <= $cantidadItems; $item++) {
                $valorItem = $item * $item;
                echo "<li>Item $item: $valorItem</li>";
            }

            echo "</ul>";
        }
    }
}
?>
    
</body>
</html>
