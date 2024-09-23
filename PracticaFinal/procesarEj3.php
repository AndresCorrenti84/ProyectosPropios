<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Procesar Datos</title>
    <style>
        table {
            margin: 20px auto;
            border-collapse: collapse;
            width: 20%;
        }

        th, td {
            border: 1px solid #ddd;
            padding: 8px;
            text-align: left;
        }

        th {
            background-color: #4caf50;
            color: white;
        }
    </style>
</head>
<body style="background-color: gray;">

<?php
if (isset($_POST["filas"], $_POST["columnas"], $_POST["cantListas"], $_POST["itemsPorLista"])) {
    // Obtener los valores del formulario
    $filas = (int)$_POST["filas"];
    $columnas = (int)$_POST["columnas"];
    $cantListas = (int)$_POST["cantListas"];
    $itemsPorLista = (int)$_POST["itemsPorLista"];

    if (isset($_POST["enviarDatos"])) {
        // Mostrar matriz con listas y llamada a la función cálculo
        echo '<div>';
        echo '<h2>Matriz con Listas:</h2>';
        echo '<table>';
        for ($i = 1; $i <= $filas; $i++) {
            echo '<tr>';
            for ($j = 1; $j <= $columnas; $j++) {
                echo '<td>';
                for ($k = 1; $k <= $cantListas; $k++) {
                    for ($l = 1; $l <= $itemsPorLista; $l++) {
                        echo ' ' . calculo($k, $l) . ' ';
                    }
                    echo '<br>';
                }
                echo '</td>';
            }
            echo '</tr>';
        }
        echo '</table>';
        echo '</div>';
    } else {
        // Mostrar formulario para enviar o cancelar
        echo '<div>';
        echo '<h2>Confirmación de Opciones:</h2>';
        echo '<table>';
        echo '<tr><th>Fila 1: Cantidad de filas</th><td>' . $filas . '</td></tr>';
        echo '<tr><th>Fila 2: Cantidad de columnas</th><td>' . $columnas . '</td></tr>';
        echo '<tr><th>Fila 3: Cantidad de listas</th><td>' . $cantListas . '</td></tr>';
        echo '<tr><th>Fila 4: Cantidad de items</th><td>' . $itemsPorLista . '</td></tr>';
        echo '</table>';
        echo '<form action="procesarEj3.php" method="post">';
        echo '<input type="hidden" name="filas" value="' . $filas . '">';
        echo '<input type="hidden" name="columnas" value="' . $columnas . '">';
        echo '<input type="hidden" name="cantListas" value="' . $cantListas . '">';
        echo '<input type="hidden" name="itemsPorLista" value="' . $itemsPorLista . '">';
        echo '<input type="submit" name="enviarDatos" value="Enviar Datos">';
        echo '<input type="submit" name="cancelar" value="Cancelar">';
        echo '</form>';
        echo '</div>';
    }
} elseif (isset($_POST["cancelar"])) {
    // Redireccionar al inicio en caso de cancelación
    header("Location: index.php");
    exit;
}

// Función cálculo
function calculo($lista, $item) {
    return ($lista + $item) % 2 === 0 ? 'p' : 'i';
}
?>

</body>
</html>