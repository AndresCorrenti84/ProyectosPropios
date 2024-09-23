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
        $IdLugar = $_GET['Id-Lugar'];

        $sql = "SELECT * FROM `cobertura` WHERE `Id-Lugar` = $IdLugar";

        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        
        $m = mysqli_fetch_array($result);
        ?>

<form name="visualizar" action="info-2.php" method="get">
        <h1>Vizualizacion de los Datos</h1>
        <table>
            <tr>
                <td>Id del lugar </td><td><input type="text" name="Id-Lugar" value="<?php echo $m["Id-Lugar"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Nombre del lugar</td><td><input type="text" name="Nombre-lugar" value="<?php echo $m["Nombre-lugar"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Codigo del lugar</td><td><input type="text" name="CodLugar" value="<?php echo $m["CodLugar"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Codigo postal</td><td><input type="text" name="Cod-postal" value="<?php echo $m["Cod-postal"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Fecha de alta</td><td><input type="text" name="Fecha-Alta" value="<?php echo $m["Fecha-Alta"]; ?>" readonly></td>
            </tr>
            <tr>
                <td>Estado </td><td><input type="text" name="Estado" value="<?php echo $m["Estado"]; ?>" readonly></td>
            </tr>
            <tr>
                <td><input type="submit" name="enviar" value="Regresar"></td>
            </tr>
        </table>
    </form>

            </div>
        </div>
    </div>
</body>

<?php include "footer.php"; ?>

</html>