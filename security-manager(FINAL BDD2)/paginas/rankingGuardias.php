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

<?php

include "conectar.php";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $fechaInicio = $_POST["fechaInicio"];
    $fechaFin = $_POST["fechaFin"];

    if ($fechaInicio > $fechaFin) {
        echo "La fecha de inicio debe ser anterior a la fecha de fin.";
    } else {
        // Consulta SQL para obtener el ranking de guardias por la cantidad de jornadas dentro del rango de fechas
        $sql = "SELECT g.DNI, g.Nombre, g.Apellido, COUNT(*) AS CantidadJornadas
                FROM guardia g
                INNER JOIN jornadas j ON g.DNI = j.DNI
                WHERE j.FechaAct BETWEEN '$fechaInicio' AND '$fechaFin'
                GROUP BY g.DNI, g.Nombre, g.Apellido
                ORDER BY CantidadJornadas DESC";

        $result = $conect->query($sql);

        if ($result->num_rows > 0) {
            echo "<h2>Ranking de Guardias para el rango de fechas $fechaInicio - $fechaFin:</h2>";
            echo "<table border='1'>";
            echo "<tr><th>DNI</th><th>Nombre</th><th>Apellido</th><th>Cantidad de Jornadas</th></tr>";

            while ($row = $result->fetch_assoc()) {
                echo "<tr><td>" . $row["DNI"] . "</td><td>" . $row["Nombre"] . "</td><td>" . $row["Apellido"] . "</td><td>" . $row["CantidadJornadas"] . "</td></tr>";
            }

            echo "</table>";
        } else {
            echo "No se encontraron resultados para el rango de fechas $fechaInicio - $fechaFin.";
        }
    }
}


?>

<form name="visualizar" action="regresar.php" method="get">
        <br><input type="submit" name="enviar" value="Regresar">
</form>
    
</div>
</body>

<?php include "footer.php"; ?>

</html>
