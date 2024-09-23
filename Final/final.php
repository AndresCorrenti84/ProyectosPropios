<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Examen final programacion IV</title>
    <style>
        table {    
            border-collapse: collapse;
            width: 50%;
        }
        th, td {
            border: 1px solid;
        }
    </style>
</head>
<body style="background-color: gray;">
<img id="" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; top: 0; right: 0;">
<img id="" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; bottom: 0; left: 0;">

    <?php
        function opciones($min, $max) {
            for ($i = $min; $i <= $max; $i++) {
                echo "<option value='$i'>$i</option>";
            }
        }

        if (isset($_GET["calcular"])) {
            $numero1 = $_GET["numero1"];
            $numero2 = $_GET["numero2"];
            $operacion = $_GET["operacion"];
            $mostrar_resultado = true;

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
        <label for="numero1">Seleccione un numero:</label>
        <select name="numero1">
            <?php opciones(10, 100); ?>
        </select>

        <label for="numero2">Seleccione otro numero:</label>
        <select name="numero2">
            <?php opciones(1, 50); ?>
        </select>

        <label for="operacion">Elija operacion matematica:</label>
        <select name="operacion">
            <option value="suma">Suma</option>
            <option value="resta">Resta</option>
            <option value="multiplicacion">Multiplicacion</option>
            <option value="division">Division</option>
        </select>

        <input type="submit" name="calcular" value="Calcular">
    </form>

    <center>
    <?php
        
        if (isset($mostrar_resultado) && $mostrar_resultado) {
            echo "<table>";
            echo "<tr><th>Fila 1</th><td>$numero1</td></tr>";
            echo "<tr><th>Fila 2</th><td>$numero2</td></tr>";
            echo "<br><tr><th>Fila 3</th><td>$operacion</td></tr>";
            echo "<br><tr><th>Fila 4</th><td><a href='?resultado=$resultado'>Enviar datos</a></td></tr>";
            echo "<br><tr><th>Fila 5</th><td><a href='final.php'>Cancelar</a></td></tr>";
            echo "</table>";
            echo "<div class='buttons'>";
            echo "</div>";
        }

        if (isset($_GET["resultado"])) {
            $resultado = $_GET["resultado"];
            echo "<p>El resultado es: $resultado</p>";
        }
    ?>
    </center>
</body>
</html>