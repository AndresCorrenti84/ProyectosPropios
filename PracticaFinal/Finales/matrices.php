<!DOCTYPE html>
<html lang="es">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Examen Final</title>
    
</head>

<body style="background-color: blueviolet;">

    <center>
    <h1 style="text-align: center;">Examen Final</h1>

<!-- Imágenes en los ángulos -->
<img id="Superior Derecha" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; top: 0; right: 0;">
<img id="Inferior izquierda" src="/img/uch-universidad-champagnat-140.png" style="position: absolute; bottom: 0; left: 0;">

<?php
// Función para generar opciones de combo
function generarCombo($nombre, $desde, $hasta) {
    echo "<select name='$nombre'>";
    for ($i = $desde; $i <= $hasta; $i++) {
        echo "<option value='$i'>$i</option>";
    }
    echo "</select>";
}

// Función de cálculo
function calculo($numeroLista, $numeroItem) {
    $suma = $numeroLista + $numeroItem;
    return ($suma % 2 == 0) ? 'p' : 'i';
}

// Procesamiento del formulario
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $filas = isset($_POST["filas"]) ? $_POST["filas"] : 0;
    $columnas = isset($_POST["columnas"]) ? $_POST["columnas"] : 0;
    $cantidadListas = isset($_POST["cantidadListas"]) ? $_POST["cantidadListas"] : 0;
    $cantidadItems = isset($_POST["cantidadItems"]) ? $_POST["cantidadItems"] : 0;

    if (isset($_POST["cancelar"])) {
        header("Location: {$_SERVER['PHP_SELF']}");
        exit();
    }
?>

    <form action='' method='post'>
        <table>
            <tr>
                <th>Cantidad de filas</th>
                <td><?php echo $filas; ?></td>
            </tr>
            <tr>
                <th>Cantidad de columnas</th>
                <td><?php echo $columnas; ?></td>
            </tr>
            <tr>
                <th>Cantidad de listas</th>
                <td><?php echo $cantidadListas; ?></td>
            </tr>
            <tr>
                <th>Cantidad de items</th>
                <td><?php echo $cantidadItems; ?></td>
            </tr>
        </table>
        <button type='submit' name='confirmar'>Confirmar</button>
        <button type='submit' name='cancelar'>Cancelar</button>
        <input type='hidden' name='filas' value='<?php echo $filas; ?>'>
        <input type='hidden' name='columnas' value='<?php echo $columnas; ?>'>
        <input type='hidden' name='cantidadListas' value='<?php echo $cantidadListas; ?>'>
        <input type='hidden' name='cantidadItems' value='<?php echo $cantidadItems; ?>'>
    </form>

<?php
    if (isset($_POST["confirmar"])) {
?>

        <table border="1px">
            <?php
            for ($i = 1; $i <= $filas; $i++) {
                echo "<tr>";
                for ($j = 1; $j <= $columnas; $j++) {
                    echo "<td>";
                    echo "<ul>";
                    for ($k = 1; $k <= $cantidadListas; $k++) {
                        echo "<li>Lista $k: " . calculo($k, $j) . "</li>";
                    }
                    echo "</ul>";
                    echo "</td>";
                }
                echo "</tr>";
            }
            ?>
        </table>

<?php
    }
} else {
// Formulario
?>
    <form action='' method='post'>
        <label for='filas'>Cantidad de filas:</label>
        <?php generarCombo('filas', 1, 100); ?>
        <br>

        <label for='columnas'>Cantidad de columnas:</label>
        <?php generarCombo('columnas', 1, 100); ?>
        <br>

        <label for='cantidadListas'>Cantidad de listas:</label>
        <?php generarCombo('cantidadListas', 1, 100); ?>
        <br>

        <label for='cantidadItems'>Cantidad de items:</label>
        <?php generarCombo('cantidadItems', 1, 100); ?>
        <br>

        <button type='submit' name='enviar'>Enviar Datos</button>
        <button type='submit' name='cancelar'>Cancelar</button>
    </form>
<?php
}
?>
    </center>

</body>

</html>