<?php

include "conectar.php";

$DNI = $_POST['DNI'];
$Nombre = $_POST['Nombre'];
$Apellido = $_POST['Apellido'];
$Telefono = $_POST['Telefono'];
$Email = $_POST['Email'];
$Domicilio = $_POST['Domicilio'];
$FechaAlta = $_POST['Fecha-Alta'];
$Estado = $_POST['Estado'];
$CodEspecialidad = $_POST['CodEspecialidad'];

// Consulta para verificar si el DNI ya existe
$verificar_sql = "SELECT COUNT(*) AS count FROM `guardia` WHERE `DNI` = '$DNI'";
$result_verificar = mysqli_query($conect, $verificar_sql);
$row = mysqli_fetch_assoc($result_verificar); //recupera una fila de resultados d una consulta

if ($row['count'] > 0) {
    // El DNI ya existe en la base de datos, redirigir al usuario
    echo '<script>alert("El DNI ya está registrado. Por favor, verifique el DNI e intente nuevamente.");';
    echo 'window.location.replace("registroGuardias.php");</script>';
} else {
    // El DNI es único, proceder con la inserción
    $sql = "INSERT INTO `guardia` (`DNI`, `Nombre`, `Apellido`, `Telefono`, `Email`, `Domicilio`, `Fecha-Alta`, `Estado`, `CodEspecialidad`) 
    VALUES ('$DNI', '$Nombre', '$Apellido', '$Telefono', '$Email', '$Domicilio', now(), '1', '$CodEspecialidad')";

    $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
    echo '<script>alert("Se agregó un nuevo guardia.");';
    echo 'window.location.replace("registroGuardias.php");</script>';
}

?>
