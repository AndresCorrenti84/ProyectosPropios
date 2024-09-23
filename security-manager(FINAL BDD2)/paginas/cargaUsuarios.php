<?php

include "conectar.php";

$DNIUsuario = $_GET['DNI-Usuario'];
$Nombre = $_GET['Nombre'];
$Apellido = $_GET['Apellido'];
$Telefono = $_GET['Telefono'];
$Email = $_GET['Email'];
$Contraseña = $_GET['Contraseña'];
$Domicilio = $_GET['Domicilio'];
$FechaAlta = $_GET['Fecha-Alta'];
$Estado = $_GET['Estado'];

// Consulta para verificar si el DNI ya existe
$verificar_sql = "SELECT COUNT(*) AS count FROM `usuario` WHERE `DNI-Usuario` = '$DNIUsuario'";
$result_verificar = mysqli_query($conect, $verificar_sql);
$row = mysqli_fetch_assoc($result_verificar);

if ($row['count'] > 0) {
    // El DNI ya existe en la base de datos, redirigir al usuario
    echo '<script>alert("El DNI ya está registrado. Por favor, verifique el DNI e intente nuevamente.");';
    echo 'window.location.replace("registroUsuarios.html");</script>';
} else {
    // El DNI es único, proceder con la inserción
    $sql = "INSERT INTO `usuario` (`DNI-Usuario`, `Nombre`, `Apellido`, `Telefono`, `Email`, `Contraseña`,`Domicilio`, `Fecha-Alta`, `Estado`) 
    VALUES ('$DNIUsuario', '$Nombre', '$Apellido', '$Telefono', '$Email', '$Contraseña','$Domicilio', now(), '1')";

    $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
    echo '<script>alert("Se agrego un nuevo usuario, sera redirigido al inicio de sesion.");';
    echo 'window.location.replace("../index.html");</script>';
}

?>
