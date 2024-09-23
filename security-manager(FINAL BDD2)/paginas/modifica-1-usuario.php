<!DOCTYPE html>
<html>
<head>
	<title>Pagina Principal</title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
    <link rel="stylesheet" href="../css/estilo-inicio.css">
</head>
<body>

<?php include "control-inicio.php"; ?>
	<?php include "side-bar.php"; ?>

			<div class="col-lg-10">


        <?php
        include "conectar.php";
        $DNIUsuario = $_GET['DNI-Usuario'];

        $sql = "SELECT * FROM `usuario` WHERE `DNI-Usuario` = $DNIUsuario";

        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        
        $m = mysqli_fetch_array($result);
        ?>

<form name="modificar" action="modifica-2-usuario.php" method="get">
        <h1>Actualizacion de Datos</h1>
        <table>
            <tr>
                <td>DNI-Usuario </td><td><input type="text" name="DNI-Usuario" value="<?php echo $m["DNI-Usuario"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Nombre </td><td><input type="text" name="Nombre" value="<?php echo $m["Nombre"]; ?>"></td>
            </tr>
            <tr>
                <td>Apellido </td><td><input type="text" name="Apellido" value="<?php echo $m["Apellido"]; ?>"></td>
            </tr>
            <tr>
                <td>Telefono </td><td><input type="text" name="Telefono" value="<?php echo $m["Telefono"]; ?>"></td>
            </tr>
            <tr>
                <td>Email </td><td><input type="text" name="Email" value="<?php echo $m["Email"]; ?>"></td>
            </tr>
            <tr>
                <td>Contraseña </td><td><input type="text" name="Contraseña" value="<?php echo $m["Contraseña"]; ?>"></td>
            </tr>
            <tr>
                <td>Domicilio </td><td><input type="text" name="Domicilio" value="<?php echo $m["Domicilio"]; ?>"></td>
            </tr>
            <tr>
                <td>Fecha-Alta </td><td><input type="text" name="Fecha-Alta" value="<?php echo $m["Fecha-Alta"]; ?>" readonly></td>
            </tr>
            <tr>
                <td><input type="submit" name="enviar" value="Guardar"></td>
            </tr>
        </table>
    </form>

    
    </div>
        </div>
    </div>
</body>

<?php include "footer.php"; ?>

</html>






























 