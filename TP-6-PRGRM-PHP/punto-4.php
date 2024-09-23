<?php

$nro = rand(1, 20);

echo "El numero aleatorio es: $nro <br>";

$contador = 1;
$nrosImpares = array();

while ($contador <= $nro) {
    if ($contador % 2 !== 0) {
        $nrosImpares[] = $contador;
    }
    $contador++;
}

$cantidad = count($nrosImpares);

echo "Los numeros impares generados son: " . implode(', ', $nrosImpares) . "<br>";
echo "La cantidad de números impares es: $cantidad";

?>

<?php

$nro = rand(1, 20);

echo "<br><br> El numero aleatorio es: $nro <br>";

$contador = 1;
$nrosImpares = array();

do {
    if ($contador % 2 !== 0) {
        $nrosImpares[] = $contador;
    }
    $contador++;
} while ($contador <= $nro);

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