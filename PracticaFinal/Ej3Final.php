<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario de Tabla</title>
</head>
<body style="background-color: gray;">

<?php
// Funciones para generar combos desplegables
function generarCombo1a100() {
    $options = '';
    for ($i = 1; $i <= 100; $i++) {
        $options .= "<option value=\"$i\">$i</option>";
    }
    return $options;
}
?>

<form action="procesarEj3.php" method="post">
    <label for="filas">Cantidad de filas de la tabla:</label>
    <select name="filas" required>
        <?php echo generarCombo1a100(); ?>
    </select>

    <label for="columnas">Cantidad de columnas de la tabla:</label>
    <select name="columnas" required>
        <?php echo generarCombo1a100(); ?>
    </select>

    <label for="cantListas">Cantidad de listas:</label>
    <select name="cantListas" required>
        <?php echo generarCombo1a100(); ?>
    </select>

    <label for="itemsPorLista">Cantidad de items por lista:</label>
    <select name="itemsPorLista" required>
        <?php echo generarCombo1a100(); ?>
    </select>

    <input type="submit" name="enviar" value="Enviar Datos">
    <input type="submit" name="cancelar" value="Cancelar">
</form>

</body>
</html>