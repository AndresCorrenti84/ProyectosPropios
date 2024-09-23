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

    <form method="post" action="matriz.php">
        <label for="filas">Filas:</label>
        <select name="filas" id="filas">
            <?php
            for ($i = 1; $i <= 10; $i++) {
                echo "<option value='$i'>$i</option>";
            }
            ?>
        </select>
        <br>
        <label for="columnas">Columnas:</label>
        <select name="columnas" id="columnas">
            <?php
            for ($j = 1; $j <= 10; $j++) {
                echo "<option value='$j'>$j</option>";
            }
            ?>
        </select>
        <br><br>
        <input type="submit" value="Crear Matriz">
    </form>
    
</body>
</html>