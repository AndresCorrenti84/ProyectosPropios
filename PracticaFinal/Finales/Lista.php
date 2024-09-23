<!DOCTYPE html>
<html lang="es">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Examen Final</title>
</head>

<body style="background-color: gray;">

    <center>
        <h1>Examen Final</h1>
    </center>

    <!-- Imágenes en los ángulos -->
    <img id="Superior Derecha" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; top: 0; right: 0;">
    <img id="Inferior izquierda" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; bottom: 0; left: 0;">

    <?php
    // Función de cálculo
    function calculo($numeroLista, $numeroItem) {
        $suma = $numeroLista + $numeroItem;
        return ($suma % 2 == 0) ? 'p' : 'i';
    }

    // Procesamiento del formulario
    if ($_POST) { //verifica si hay datos en el post
        // Si se ha enviado el formulario
        $cantidadListas = $_POST["cantidadListas"];
        $cantidadItems = $_POST["cantidadItems"];
    ?>

        <form action='' method='post'>
            <table>
                <tr>
                    <th>Cantidad de Listas</th>
                    <td><?php echo $cantidadListas; ?></td>
                </tr>
                <tr>
                    <th>Cantidad de Ítems</th>
                    <td><?php echo $cantidadItems; ?></td>
                </tr>
            </table>
            <input type='submit' name='confirmar' value='Confirmar'>
            <a href="Lista.php">Volver</a>
            <input type='hidden' name='cantidadListas' value='<?php echo $cantidadListas; ?>'>
            <input type='hidden' name='cantidadItems' value='<?php echo $cantidadItems; ?>'>
        </form>

        <?php
        // Procesamiento de la confirmación
        if (isset($_POST["confirmar"])) {
            // Generar listas y mostrar contenido
            for ($i = 1; $i <= $cantidadListas; $i++) {
                echo "<h3>Lista $i</h3>";
                echo "<ul>";
                for ($j = 1; $j <= $cantidadItems; $j++) {
                    $resultado = calculo($i, $j);
                    echo "<li>Item $j: $resultado</li>";
                }
                echo "</ul>";
            }
        }
        ?>

    <?php
    } else {
        // Formulario
        ?>
        <form action='' method='post'>
            <label for='cantidadListas'>Cantidad de Listas:</label>
            <input type='number' name='cantidadListas' required>
            <br>

            <label for='cantidadItems'>Cantidad de Items en cada Lista:</label>
            <input type='number' name='cantidadItems' required>
            <br>

            <input type='submit' value='Enviar Datos'>
        </form>
    <?php
    }
    ?>

</body>

</html>