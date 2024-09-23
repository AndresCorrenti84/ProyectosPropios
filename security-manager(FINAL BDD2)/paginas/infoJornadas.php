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

<?php include "conectar.php"; ?>

    <form name="jornadas" action="jornada-1.php" method="get">
        <h2>Seleccione el Nombre del guardia para ver sus jornadas realizadas</h2>
        <table>
            <tr>
                <td>Nombre </td>
                <td>
                    <select name="Nombre">
                        <?php
                        $sql = "SELECT DISTINCT Nombre FROM jornadas"; // Utilizamos DISTINCT para obtener nombres únicos

                        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));

                        while ($a = mysqli_fetch_array($result))
                        {
                        ?>
                            <option value='<?php echo $a['Nombre']; ?>'><?php echo $a['Nombre']; ?></option>
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

</body>

<?php include "footer.php"; ?>

</html>
