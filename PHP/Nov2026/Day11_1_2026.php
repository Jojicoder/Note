<?php
setcookie("visits",($_COOKIE["visits"]?? 0)+ 1, time() + 3600);
$msg = "";
if(isset($_GET["age"]))
{
    $age = trim($_GET["age"]);
    if(empty($age))             $msg = "Age is required";
    elseif (!is_numeric($age))  $msg = "Numbers only";
    else                        $msg = "Age: ".(int) $age;
}

define("MAX", 3);
$x = "";
var_dump(isset($x), empty($x));
echo "x". 2+3, " ", 10 % 4 * 2, "<br>";

$m = [[1,2],[3,4]];
$i = 0;
while($i < 2){
    echo $m[$i][1]; 
    $i++;
}

echo " ". strlen("PHP"). strtoupper("ok"). "<br>";

$total = 0;
function addTo($n){
    $GLOBALS["total"] +=$n;
}
for($k = 1; $k <= MAX; $k++)
    addTo($k);

echo $total . "<br>";
?>
<form method="get">
    Age: <input name="age"> <input type="submit"> <?= $msg ?>
</form>
Visits: <?= $_COOKIE["visits"] ?? 0 ?>