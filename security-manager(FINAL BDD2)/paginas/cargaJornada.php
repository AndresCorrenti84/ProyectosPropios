<?php
include "conectar.php";

if ($_SERVER["REQUEST_METHOD"] == "GET") { //los datos son enviados por el metodo get
    $guardia_dni = $_GET['guardia_dni'];
    $NombreLugar = $_GET['NombreLugar'];
    $FechaAct = $_GET['FechaAct'];
    $HoraEnt = $_GET['HoraEnt'];
    $HoraSal = $_GET['HoraSal'];

    // Consulta SQL para obtener el nombre del guardia por su DNI
    $sql_obtener_nombre_guardia = "SELECT Nombre FROM guardia WHERE DNI = '$guardia_dni'";
    $result_nombre_guardia = mysqli_query($conect, $sql_obtener_nombre_guardia);

    if ($result_nombre_guardia) {
        $row = mysqli_fetch_assoc($result_nombre_guardia);
        $nombre_guardia = $row["Nombre"];

        // Insertar la jornada en la tabla de jornadas con el DNI y nombre del guardia
        $sql_insert_jornada = "INSERT INTO jornadas (DNI, Nombre, NombreLugar, FechaAct, HoraEnt, HoraSal) 
                               VALUES ('$guardia_dni', '$nombre_guardia', '$NombreLugar', '$FechaAct', '$HoraEnt', '$HoraSal')";

        if (mysqli_query($conect, $sql_insert_jornada)) {
            ?> 
            <script>
                alert("Se cargo la jornada, sera redirigido");
                location.replace("registroJornada.php");
            </script> 
            <?php
        } else {
            echo "Error al registrar la jornada: " . mysqli_error($conect);
        }
    } else {
        echo "Error al obtener el nombre del guardia: " . mysqli_error($conect);
    }
}

mysqli_close($conect);
?>
