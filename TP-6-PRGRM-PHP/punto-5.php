<?php

$vector = array();

for ($i=0; $i < 10; $i++) { 

    $numeros = rand(1, 100);
    array_push($vector, $numeros); //incluye los elementos al array
}

sort($vector); //ordenar el vector ascendente
echo "Numeros aleatorios en forma ascendente: ";
$longitud = count($vector);
for ($i = 0; $i < $longitud; $i++) {
    echo $vector[$i] . " ";
}
echo "<br>";

rsort($vector); //ordenar el vector descendente
echo "Numeros aleatorios en forma descendente: ";
for ($i = 0; $i < $longitud; $i++) {
    echo $vector[$i] . " ";
}

?>
