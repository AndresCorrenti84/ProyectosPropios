<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mostrar Listas</title>
</head>
<body style="background-color: gray;">
        <?php
        // Función de cálculo (puedes ajustarla según tus necesidades)
        function calculo($lista, $elemento) {
            // Por ejemplo, simplemente multiplicamos el número de lista por el número de elemento
            return $lista * $elemento;
        }

        // Asegúrate de ajustar estas líneas según tus necesidades
        $cantidadListas = isset($_POST["cantidadListas"]) ? $_POST["cantidadListas"] : 0;
        $cantidadItems = isset($_POST["cantidadItems"]) ? $_POST["cantidadItems"] : 0;

        // Generar la matriz cuadrada dinámicamente
        echo "<h2>Matriz Cuadrada Generada:</h2>";
        echo "<table border='1'>";
        for ($i = 1; $i <= $cantidadListas; $i++) {
            echo "<tr>";
            for ($j = 1; $j <= $cantidadItems; $j++) {
                $valor = calculo($i, $j);
                echo "<td>$valor</td>";
            }
            echo "</tr>";
        }
        echo "</table>";
        ?>
        <br><br><br>
        <a href="FinalProgramacion.php">Volver</a>
</body>
</html>