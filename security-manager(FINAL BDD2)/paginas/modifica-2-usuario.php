<html>
    <body>
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
                
        $sql = "UPDATE `usuario` SET `Apellido` = '$Apellido', `Nombre` = '$Nombre', `Telefono` = '$Telefono', `Email` = '$Email', `Contraseña` = '$Contraseña', `Domicilio` = '$Domicilio', `Fecha-Alta` = '$FechaAlta', 
                `Estado` = '$Estado' WHERE `DNI-Usuario` = $DNIUsuario";
                
        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        ?>
    </body>
</html>

<script>
    alert("Se modifico el Usuario, sera redirigido");
    location.replace("modificaUsuarios.php");
</script>