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

            <h2>Registro de Guardias</h2>
                <form name="guardia" action="cargaGuardias.php" method="post">
                    <!--<input type="button" name="volver" value="volver al menu" onclick="location.replace('menu_prueba.php')"> -->
                    <table>
                        <tr>
                            <td>DNI <input type="text" name="DNI"></td>
                        </tr>
                        <tr>
                            <td>Nombre <input type="text" name="Nombre"></td>
                        </tr>
                        <tr>
                            <td>Apellido <input type="text" name="Apellido"></td>
                        </tr>
                        <tr>
                            <td>Telefono <input type="text" name="Telefono"></td>
                        </tr>
                        <tr>
                            <td>Email <input type="text" name="Email"></td>
                        </tr>
                        <tr>
                            <td>Domicilio <input type="text" name="Domicilio"></td>
                        </tr>
                        <tr>
                          <td>Especialidad</td>
                          <td>
                              <select id="CodEspecialidad" name="CodEspecialidad">
                                  <?php
                                  $sql = "SELECT * FROM `especialidad` ORDER BY CodEspecialidad";
      
                                  $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
      
                                  while ($a = mysqli_fetch_array($result))
                                  {
                                  ?>
                                      <option value='<?php echo $a['CodEspecialidad']; ?>'><?php echo $a['DescripcionEspecialidad']; ?></option>
                                  <?php
                                  }
                                  ?>
                              </select>
                          </td>
                       </tr>
                        <tr>
                            <td colspan=2 align=left><input type="submit" name="envia" value="Enviar"></td>
                        </tr>
                    </table>
                </form>
        </div>
</body>

<?php include "footer.php"; ?>

</html>