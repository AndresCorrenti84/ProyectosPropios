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
              <h2>Registro de Lugares</h2>
                <form name="cobertura" action="cargaCobertura.php" method="post">
                    <!--<input type="button" name="volver" value="volver al menu" onclick="location.replace('menu_prueba.php')"> -->
                    <table>
                        <tr>
                            <td>Nombre del lugar <input type="text" name="Nombre-lugar"></td>
                        </tr>
						<tr>
                          <td>Codigo del lugar</td>
                          <td>
                              <select id="CodLugar" name="CodLugar">
                                  <?php
                                  $sql = "SELECT * FROM `lugares` ORDER BY CodLugar";
      
                                  $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));
      
                                  while ($a = mysqli_fetch_array($result))
                                  {
                                  ?>
                                      <option value='<?php echo $a['CodLugar']; ?>'><?php echo $a['DescripcionLugar']; ?></option>
                                  <?php
                                  }
                                  ?>
                              </select>
                          </td>
                       </tr>
                        <tr>
                            <td>Codigo postal <input type="text" name="Cod-postal"></td>
                        </tr>
                        <tr>
                            <td colspan=2 align=left><input type="submit" name="envia" value="Enviar"></td>
                        </tr>
                    </table>
                </form>
            </div>
        </div>
</body>

<?php include "footer.php"; ?>


</html>