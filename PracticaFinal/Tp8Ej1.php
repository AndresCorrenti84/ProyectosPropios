<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Examen Final</title>
</head>
<body style="background-color: gray;">
<img src="/img/uch-universidad-champagnat-140.png" alt="Esquina Superior Derecha" style="position: fixed; top: 0; right: 0;">
<img src="/img/uch-universidad-champagnat-140.png" alt="Esquina Inferior Izquierda" style="position: fixed; bottom: 0; left: 0;">

<?php
// Funciones para generar combos desplegables
function generarCombo2a10() {
    $options = '';
    for ($i = 2; $i <= 10; $i++) {
        $options .= "<option value=\"$i\">$i</option>";
    }
    return $options;
}

function generarCombo2a100() {
    $options = '';
    for ($i = 2; $i <= 100; $i++) {
        $options .= "<option value=\"$i\">$i</option>";
    }
    return $options;
}
?>

<form action="procesarEJ1.php" method="post">
    <label for="numero1">Elegir un número (2 a 10x):</label>
    <select name="numero1">
        <?php echo generarCombo2a10(); ?>
    </select>

    <br>

    <label for="numero2">Elegir otro número (2 a 100):</label>
    <select name="numero2">
        <?php echo generarCombo2a100(); ?>
    </select>

    <br>

    <label for="operacion">Elegir una operación matemática:</label>
    <select name="operacion">
        <option value="suma">Suma</option>
        <option value="resta">Resta</option>
        <option value="multiplicacion">Multiplicación</option>
        <option value="division">División</option>
    </select>

    <br>

    <input type="submit" name="enviar" value="Enviar Datos">
    <input type="submit" name="cancelar" value="Cancelar">
</form>

</body>
</html>