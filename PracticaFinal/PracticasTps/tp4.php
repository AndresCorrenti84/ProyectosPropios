<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<form action="" method="post">
        <!-- Etiqueta para el campo de nombre -->
        <label for="nombre">Nombre:</label>
        <input type="text" id="nombre" name="nombre" required>
        <br>

        <!-- Etiqueta para el campo de correo -->
        <label for="correo">Correo electrónico:</label>
        <input type="email" id="correo" name="correo" required>
        <br>

        <!-- Etiqueta para el campo de mensaje -->
        <label for="mensaje">Mensaje:</label>
        <textarea id="mensaje" name="mensaje" rows="4" required></textarea>
        <br>

        <!-- Botón de envío -->
        <input type="submit" value="Enviar">
    </form>
</body>
</html>