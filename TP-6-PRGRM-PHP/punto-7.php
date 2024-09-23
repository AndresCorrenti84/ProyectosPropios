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

// Determinar si el valor mínimo es par o impar
echo "Elemento de menor valor: $minValue - ";
switch ($minValue % 2) {
    case 0:
        echo "Es par";
        break;
    case 1:
        echo "Es impar";
        break;
}
echo "<br>";

// Determinar si el valor máximo es par o impar
echo "Elemento de mayor valor: $maxValue - ";
switch ($maxValue % 2) {
    case 0:
        echo "Es par";
        break;
    case 1:
        echo "Es impar";
        break;
}

?>
