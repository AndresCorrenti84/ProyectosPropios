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

<?php include "conectar.php"; ?>

    <h1>Ranking de Guardias por Jornadas</h1>
    <form method="post" action="rankingGuardias.php">
    <label for="fechaInicio">Fecha de inicio:</label>
    <input type="date" id="fechaInicio" name="fechaInicio">
    <label for="fechaFin">Fecha de fin:</label>
    <input type="date" id="fechaFin" name="fechaFin">
    <input type="submit" value="Mostrar Ranking">
    </form>

    
</div>
</body>

<?php include "footer.php"; ?>

</html>
