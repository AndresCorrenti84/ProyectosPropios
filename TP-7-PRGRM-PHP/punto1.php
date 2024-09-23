<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Programacion Web</title>
</head>
<body style="background-color: lightblue">

<img src="logo-uch.png" width="80px" style="position: absolute; top: 0; right: 0;">
<img src="logo-uch.png" width="80px" style="position: absolute; bottom: 0; left: 0;">

<table>
<?php

for ($i=0; $i < 10; $i++) { 
    
    echo "<tr>";
    for ($j=0; $j < 6; $j++) { 
        
        $resultado = ($i+$j)**2;
        echo "<td>$resultado</td>";
    }
    echo "</tr>";

}

?>
</table>
    
</body>
</html>