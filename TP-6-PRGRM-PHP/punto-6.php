<?php

$vector = array();
for ($i = 0; $i < 10; $i++) {
    $vector[] = rand(1, 100);
}

$minValue = min($vector); //funcion para encontrar el elemento de menor valor
$maxValue = max($vector); //funcion para encontrar el elemento de mayor valor

echo "Vector generado: ";
for ($i = 0; $i < count($vector); $i++) {
    echo $vector[$i];
    if ($i < count($vector) - 1) {
        echo ", ";
    }
}
echo "<br>";

echo "Elemento de menor valor: $minValue <br>";
echo "Elemento de mayor valor: $maxValue <br>";

?>
