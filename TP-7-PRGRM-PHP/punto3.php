<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Programacion Web</title>
</head>
<body style="background-color: lightblue">

<img src="logo-uch.png" width="80px" style="position: absolute; top: 0; right: 0;">
<img src="logo-uch.png" width="80px" style="position: absolute; bottom: 0; left: 0;">

    <form method="post" action="formulario.php">
        <label for="cantidad_listas">Cantidad de Listas:</label>
        <select name="cantidad_listas" id="cantidad_listas">
            <?php
            for ($i = 1; $i <= 10; $i++) {
                echo "<option value='$i'>$i</option>";
            }
            ?>
        </select>

        <br>

        <label for="cantidad_items">Cantidad de Ítems por Lista:</label>
        <select name="cantidad_items" id="cantidad_items">
            <?php
            for ($i = 1; $i <= 20; $i++) {
                echo "<option value='$i'>$i</option>";
            }
            ?>
        </select>

        <br><br>
        <input type="submit" value="Crear Listas e Ítems">

    </form>
    
</body>
</html>