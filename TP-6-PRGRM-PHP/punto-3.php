<?php

$nro = rand(1, 20);

echo "El numero aleatorio es: $nro <br>";

$nrosImpares = array();

for ($i=0; $i < $nro; $i++) { 

    if($i % 2 !== 0){

        $nrosImpares[] = $i;
    }
}

$cantidad = count($nrosImpares); //count cuenta todos los elementos del array

echo "Los numeros impares generados son: ";
for ($i = 0; $i < count($nrosImpares); $i++) {
    echo $nrosImpares[$i];
    if ($i < count($nrosImpares) - 1) {
        echo ", ";
    }
}
echo "<br>";

echo "La cantidad de números impares es: $cantidad";

?>