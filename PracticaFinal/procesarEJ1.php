<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Procesar Datos</title>
</head>
<body style="background-color: gray;">

<?php
if (isset($_POST["numero1"], $_POST["numero2"], $_POST["operacion"])) {
    // Obtener los valores del formulario
    $numero1 = $_POST["numero1"];
    $numero2 = $_POST["numero2"];
    $operacion = $_POST["operacion"];

    // Mostrar la tabla
    echo '<table border="1" align="center">';
    echo '<tr><th>Fila 1: Primer número</th><td>' . $numero1 . '</td></tr>';
    echo '<tr><th>Fila 2: Segundo número</th><td>' . $numero2 . '</td></tr>';
    echo '<tr><th>Fila 3: Operación elegida</th><td>' . $operacion . '</td></tr>';
    echo '</table>';

    // Realizar la operación según la opción seleccionada
    switch ($operacion) {
        case "suma":
            echo "Resultado de la suma: " . ($numero1 + $numero2);
            break;
        case "resta":
            echo "Resultado de la resta: " . ($numero1 - $numero2);
            break;
        case "multiplicacion":
            echo "Resultado de la multiplicación: " . ($numero1 * $numero2);
            break;
        case "division":
            if ($numero2 != 0) {
                echo "Resultado de la división: " . ($numero1 / $numero2);
            } else {
                echo "Error: División por cero";
            }
            break;
        default:
            echo "Operación no válida";
            break;
    }
} else {
    echo "Datos del formulario no recibidos.";
}
?>

</body>
</html>