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
        ?>
        <form name="guardia" action="guardias-inactivos.php" method="get">
            <h1>visualizar guardias inactivos</h1>
            <table>
                <tr>
                    <td>Guardia</td>
                    <td>
                        <select name="DNI">
                            <?php
                            $sql = "SELECT * FROM `guardia` WHERE Estado = 0 ORDER BY Apellido";

                            $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));

                            while ($a = mysqli_fetch_array($result))
                            {
                            ?>
                                <option value='<?php echo $a['DNI']; ?>'><?php echo $a['Apellido']; ?></option>
                            <?php
                            }
                            ?>
                        </select>
                    </td>
                </tr>
                <tr>
                    <td><input type="submit" name="enviar" value="Enviar"></td>
                </tr>
            </table>
        </form>
            </div>
        </div>
    </div>

</body>

<?php include "footer.php"; ?>

</html>