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

    <style>
    table {
        border-collapse: collapse;
        width: 100%;
    }

    table, th, td {
        border: 1px solid black; /* Puedes ajustar el estilo del borde según tus preferencias */
    }

    th, td {
        padding: 8px; /* Añade espacio interno al contenido de las celdas */
        text-align: left; /* Alinea el texto a la izquierda dentro de las celdas */
    }
</style>

</head>
<body>

<?php include "control-inicio.php"; ?>
	<?php include "side-bar.php"; ?>

    <div class="col-lg-10">
				
        <?php
        include "conectar.php";
        $Nombre = $_GET['Nombre'];

        $sql = "SELECT * FROM jornadas WHERE Nombre = '" . mysqli_real_escape_string($conect, $Nombre) . "'";

        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        
        $m = mysqli_fetch_array($result);
        ?>

    <table>
        <tr>
            <th>DNI del Guardia</th>
            <th>Nombre</th>
            <th>Nombre del lugar</th>
            <th>Fecha de alta</th>
            <th>Hora de entrada</th>
            <th>Hora de salida</th>
        </tr>

        <?php
        while ($m = mysqli_fetch_array($result))
        {
        ?>
        <tr>
            <td><?php echo $m["DNI"]; ?></td>
            <td><?php echo $m["Nombre"]; ?></td>
            <td><?php echo $m["NombreLugar"]; ?></td>
            <td><?php echo $m["FechaAct"]; ?></td>
            <td><?php echo $m["HoraEnt"]; ?></td>
            <td><?php echo $m["HoraSal"]; ?></td>
        </tr>
        <?php
        }
        ?>
    </table>

    <form name="visualizar" action="jornada-2.php" method="get">
        <br><input type="submit" name="enviar" value="Regresar">
    </form>

</div>
</body>

<?php include "footer.php"; ?>

</html>