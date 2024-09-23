<html>
    <body>
        <?php
        include "conectar.php";
        ?>
        <form name="usuario" action="modifica-1-usuario.php" method="get">
            <h1>Actualizacion de Usuarios</h1>
            <table>
                <tr>
                    <td>Usuario</td>
                    <td>
                        <select name="DNI-Usuario">
                            <?php
                            $sql = "SELECT * FROM usuario order by Apellido";

                            $result = mysqli_query($conect, $sql) or die ($sql . mysqli_error($conect));

                            while ($a = mysqli_fetch_array($result))
                            {
                            ?>
                                <option value='<?php echo $a['DNI-Usuario']; ?>'><?php echo $a['Apellido']; ?></option>
                            <?php
                            }
                            ?>
                        </select>
                    </td>
                </tr>
                <tr>
                    <td><input type="submit" name="enviar" value="Enviar"></td>
                </tr>
            </table>
        </form>
    </body>
</html>