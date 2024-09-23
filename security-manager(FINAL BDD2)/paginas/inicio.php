<?php

include "conectar.php";

session_start(); 

$Email = $_GET['Email'];// LE PIDE EL MAIL PARA GUARDARLO
$Contraseña = $_GET['Contraseña'];

$sql = "SELECT * FROM usuario WHERE Email = '$Email'";

$result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));

if(mysqli_num_rows($result) == 0){ //SI EL NUMERO DE FILAS DEL RESULTADO ES 0, ERROR.
    ?>
        <script>
            alert("El usuario no existe");
            location.replace("../index.html");
        </script>
        <?php
} else {
    $fila = mysqli_fetch_array($result); //ACA LO QUE HACE EL FETCH ARRAY DEVUELVE COMO UNA FILA COMO UN ARRAY
    if($fila["Contraseña"] <> $Contraseña){ //VERIFICA LA CONTRASEÑA
        ?>
        <script>
            alert("La contraseña es incorrecta");
            location.replace("../index.html");
        </script>
        <?php
    } else {
        $_SESSION["Email"] = $_GET['Email'];
        ?>
        <script>
            location.replace("../paginas/inicio.html");
        </script>
        <?php
    }
}

?>

