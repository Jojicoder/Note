<?php
$fruits = array("Apple", "Banana","Cherry");
$fruits = ["Apple","Banana","Cherry"];
echo $fruits[1]."<br>";

$fruits[3] = "Mango";

$len = count($fruits);
for($i = 0;$i<$len;$i++)
{
    echo $fruits[$i]."<br>";
}

$age = [
    'Joe' =>22,
    'Alex' => 25,
];
$age['Peter'] =30;
echo $age['Joe'] . "<br>";

$schedule = [16 => 'My Birthday', 20 => 'Special Dinner'];
echo $schedule[20]."<br>";

foreach($fruits as $value)
{
    echo $value . " ";
}
echo "<br>";

foreach ($age as $name => $years){
    echo "My names is $name, and age is $years<br>";
}

$cars = array(
    array("Volvo", 22,18),
    array("BMW",15,13),
    array("Saab",5,2)
);
echo $cars[1][0]. ": In stock: " .$cars[1][1]. ", sold: ".$car[1][2]."<br>";

for($row = 0;$row < 3;$row++)
{
    echo "Row $row: ";
    for($col = 0;$col < 3;$col++)
    {
        echo $cars[$row][$col]." ";
    }
    echo"<br>";
}