<html>
    <body>
        <?php
        include "conectar.php";

        $DNI = $_GET['DNI'];
        $Nombre = $_GET['Nombre'];
        $Apellido = $_GET['Apellido'];
        $Telefono = $_GET['Telefono'];
        $Email = $_GET['Email'];
        $Domicilio = $_GET['Domicilio'];
        $FechaAlta = $_GET['Fecha-Alta'];
        $Estado = $_GET['Estado'];
        $CodEspecialidad = $_GET['CodEspecialidad'];
                
        $sql = "UPDATE `guardia` SET `Apellido` = '$Apellido', `Nombre` = '$Nombre', `Telefono` = '$Telefono', `Email` = '$Email', `Domicilio` = '$Domicilio', `Fecha-Alta` = '$FechaAlta', 
                `Estado` = '$Estado', `CodEspecialidad` = $CodEspecialidad WHERE `DNI` = $DNI";
                     
        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        ?>
    </body>
</html>

<script>
    alert("Se modifico el Guardia, sera redirigido");
    location.replace("modificaGuardias.php");
</script>