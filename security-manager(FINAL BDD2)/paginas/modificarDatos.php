<?php
        include "conectar.php";

        session_start();

        $sql = "SELECT * FROM usuario WHERE Email = '" . $_SESSION["Email"] . "'";

        $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
        
        $m = mysqli_fetch_array($result);
?>

<script>
    location.replace("modifica-1-usuario.php?DNI-Usuario=<?php echo $m["DNI-Usuario"];?>");
</script>