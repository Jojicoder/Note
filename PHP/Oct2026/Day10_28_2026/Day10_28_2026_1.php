<?php
echo "Hello";
$name = "Joji";

$first = "Hello";
echo $first. " World";

if($a === "5"){
    echo "Same number";
}

$user = ["name" => "Joji","age" =>20];

$fruits = ["apple","banana","orange"];
echo count($fruits);

foreach ($user as $key => $value)
{
    echo "$key: $value<br>";
}

for($i = 0; $i < 5;$i++)
{
    echo $i;
}

function add($a,$b){
    return $a+$b;
}

echo strlen("PHP");

if(isset($_POST["email"])){
    $email = $_POST["email"];
}


require "config.php";
echo htmlspecialchars($input);
?>
