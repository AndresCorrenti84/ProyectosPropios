<?php

include "conectar.php";

$IdLugar = $_POST['Id-Lugar'];
$Nombrelugar = $_POST['Nombre-lugar'];
$CodLugar = $_POST['CodLugar'];
$Codpostal = $_POST['Cod-postal'];
$FechaAlta = $_POST['Fecha-Alta'];
$Estado = $_POST['Estado'];

$sql = "INSERT INTO `cobertura` (`Id-Lugar`, `Nombre-lugar`, `CodLugar`, `Cod-postal`, `Fecha-Alta`, `Estado`) 
VALUES (FLOOR(RAND()*(999-1)+1), '$Nombrelugar', '$CodLugar', '$Codpostal', now(), '1')";

$result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));

?>

<script>
    alert("Se cargo un nuevo lugar, sera redirigido");
    location.replace("registroCobertura.php");
</script>