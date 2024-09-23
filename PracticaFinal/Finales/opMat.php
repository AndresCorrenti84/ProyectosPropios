<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Examen Final</title>
    <style>
        table {
            margin-top: 20px;
            border-collapse: collapse;
            width: 50%;
            margin-left: auto;
            margin-right: auto;
        }
        th, td {
            border: 1px solid #dddddd;
            text-align: left;
            padding: 8px;
        }
        th {
            background-color: #f2f2f2;
        }
        
    </style>
</head>
<body style="background-color: gray;">
<img id="Superior Derecha" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; top: 0; right: 0;">
<img id="Inferior izquierda" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; bottom: 0; left: 0;">

    <?php
        function generarOptions($min, $max) {
            for ($i = $min; $i <= $max; $i++) {
                echo "<option value='$i'>$i</option>";
            }
        }

        if (isset($_GET["calcular"])) {
            $numero1 = $_GET["numero1"];
            $numero2 = $_GET["numero2"];
            $operacion = $_GET["operacion"];
            $mostrar_resultado = true;

            // Realizar la operación matemática
            switch ($operacion) {
                case "suma":
                    $resultado = $numero1 + $numero2;
                    break;
                case "resta":
                    $resultado = $numero1 - $numero2;
                    break;
                case "multiplicacion":
                    $resultado = $numero1 * $numero2;
                    break;
                case "division":
                    $resultado = $numero1 / $numero2;
                    break;
            }
        }
    ?>

    <form method="get">
        <label for="numero1">Elegir un número:</label>
        <select name="numero1">
            <?php generarOptions(2, 100); ?>
        </select>

        <label for="numero2">Elegir otro número:</label>
        <select name="numero2">
            <?php generarOptions(2, 100); ?>
        </select>

        <label for="operacion">Elegir operación matemática:</label>
        <select name="operacion">
            <option value="suma">Suma</option>
            <option value="resta">Resta</option>
            <option value="multiplicacion">Multiplicación</option>
            <option value="division">División</option>
        </select>

        <input type="submit" name="calcular" value="Calcular">
    </form>

    <?php
        // Mostrar el resultado
        if (isset($mostrar_resultado) && $mostrar_resultado) {
            echo "<table>";
            echo "<tr><th>Fila 1</th></tr><tr><td>$numero1</td></tr>";
            echo "<tr><th>Fila 2</th></tr><tr><td>$numero2</td></tr>";
            echo "<tr><th>Fila 3</th></tr><tr><td>$operacion</td></tr>";
            echo "</table>";

            echo "<div class='buttons'>";
            echo "<a href='?resultado=$resultado'>Continuar</a>";
            echo "<a href='opMat.php'>Cancelar</a>";
            echo "</div>";
        }

        if (isset($_GET["resultado"])) {
            $resultado = $_GET["resultado"];
            echo "<p>Resultado de la operación: $resultado</p>";
        }
    ?>
</body>
</html>