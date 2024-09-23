<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Final Programacion IV</title>
</head>
<body style="background-color: gray;">

    <img src="/img/uch-universidad-champagnat-140.png" alt="Esquina Superior Derecha" style="position: fixed; top: 0; right: 0;">
    <img src="/img/uch-universidad-champagnat-140.png" alt="Esquina Inferior Izquierda" style="position: fixed; bottom: 0; left: 0;">

    <?php
        // Verificar si el formulario ha sido enviado
        if (isset($_POST["cantidadListas"], $_POST["cantidadItems"])) {
            // Obtener la cantidad de listas y la cantidad de items por lista seleccionados
            $cantidadListas = $_POST["cantidadListas"];
            $cantidadItems = $_POST["cantidadItems"];
    ?>
            <h2>Selección Actual:</h2>
            <table>
                <tr>
                <th>Lista 1</th>
                <td><?php echo $cantidadListas; ?></td>
                </tr>
                <tr>
                <th>Lista 2</th>
                <td><?php echo $cantidadItems; ?></td>
                </tr>
                <tr>
                <th>Lista 3</th>
                <td><a href="FinalProgramacion.php">Cancelar</a></td>
                </tr>
                <th>Lista 4</th>
                <td>Ver Listas</td>
            </table>
            
            <!-- Botón adicional para ir a MostrarLista.php -->
            <form method="post" action="MostrarLista.php">
                <input type="hidden" name="cantidadListas" value="<?php echo $cantidadListas; ?>">
                <input type="hidden" name="cantidadItems" value="<?php echo $cantidadItems; ?>">
                <input type="submit" value="Ir a MostrarLista">
            </form>
            <form method="post" action="">
                <label for="cantidadListas">Selecciona la cantidad de listas (2-50):</label>
                <select name="cantidadListas">
                    <?php
                        // Generar opciones del 2 al 50
                        for ($i = 2; $i <= 50; $i++) {
                            echo "<option value=\"$i\">$i</option>";
                        }
                    ?>
                </select>

                <label for="cantidadItems">Selecciona la cantidad de items por lista (2-50):</label>
                <select name="cantidadItems">
                    <?php
                        // Generar opciones del 2 al 50
                        for ($i = 2; $i <= 50; $i++) {
                            echo "<option value=\"$i\">$i</option>";
                        }
                    ?>
                </select>

                <input type="submit" value="Mostrar Selección">
            </form>
    <?php
        }
    ?>

</body>
</html>