<?php

$contador = 0;
$nro = rand(1, 20);

echo "Nro aleatorio: $nro <br>";
echo "Los numeros generados son: ";

for ($i=1; $i < $nro ; $i++) {

    if($i % 2 != 0 ){
    echo "$i ";
    $contador ++;
    }
}
echo "<br> La cantidad de numeros impares es: $contador";

?>
