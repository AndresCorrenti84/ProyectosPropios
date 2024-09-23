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
    <h2>Registro de jornadas</h2>

    <?php include "conectar.php"; ?>

    <form name="jornadas" action="cargaJornada.php" method="get">
        <table>
        <tr>
            <td>Selecciona un guardia:</td>
        </tr>
        <tr>
            <td>
                <select name="guardia_dni" id="guardiaSelect" onchange="mostrarDNI()">
                    <?php
                    // Conexión a la base de datos (como se mostró anteriormente)
                    
                    // Consulta SQL para obtener los DNIs y nombres de los guardias
                    $sql_guardias = "SELECT DNI, Nombre FROM guardia";
                    $result_guardias = mysqli_query($conect, $sql_guardias);
                    
                    // Generar las opciones del select con los DNIs de los guardias
                    while ($row = mysqli_fetch_assoc($result_guardias)) {
                        $dni_guardia = $row["DNI"];
                        $nombre_guardia = $row["Nombre"];
                        echo "<option value='$dni_guardia'>$nombre_guardia</option>";
                    }
                    ?>
                </select>
            </td>
        </tr>
        <tr>
            <td>Numero de DNI: <span id="nombreGuardia"></span></td>
        </tr>
        <tr>
            <td>Nombre del lugar <input type="text" name="NombreLugar"></td>
        </tr>
        <tr>
            <td>Fecha de jornada <input type="date" name="FechaAct" ></td>
        </tr>
        <tr>
            <td>Hora de entrada <input type="time" name="HoraEnt"></td>
        </tr>
        <tr>
            <td>Hora de salida <input type="time" name="HoraSal"></td>
        </tr>
        <tr>
            <td colspan=2 align=left><input type="submit" name="envia" value="Enviar"></td>
        </tr>
        </table>
    </form>
    </div>
</body>

<?php include "footer.php"; ?>

</html>

<script>
function mostrarDNI() {
    var select = document.getElementById("guardiaSelect");
    var nombreGuardia = document.getElementById("nombreGuardia");
    
    // Obtener el valor seleccionado (DNI del guardia)
    var dniSeleccionado = select.value;
    
    // Mostrar el nombre del guardia en el <span>
    nombreGuardia.textContent = dniSeleccionado;
}
</script>
