<?php

$score = 85;

if($score >=90)
{
    echo "Grade: A";
}elseif($score >= 80)
{
    echo "Grade: B";
}elseif($score >= 70)
{
    echo "Grade: C";
}else{
    echo "Grade: F";
}
echo "<br>";

$x =2;
switch($x){
    case 1:
        echo "Number: 1";
        break;
    case 2:
        echo "Number: 2";
        break;
    default:
        echo "No number between 1 and 3";
}
echo "<br>";

$i =1;
while($i <=3){
    echo "while: $i<br>";
    $i++;
}

$i = 1;
do{
    $i++;
    echo "do: $i<br>";
}while($i<=3);

for($i = 1;$i<=3;$i++)
{
    echo "for: $i<br>";
}

$x = 10;
$x +=5; echo $x."<br>";
$x -=3; echo $x."<br>";
$x *=2; echo $x."<br>";
$x /=4; echo $x."<br>";
$x %=5; echo $x."<br>";

echo 10%3 ."<br>";
echo 5 /2 ."<br>";
echo "a == c: ". (10==10)."<br>";
echo "false: [".(5>8)."]<br>";

$a = 10;
$b = 5;
if($a > 0 && $b > 0)echo "Both positive<br>";
if($a == 10 || $b == 7)echo "At least one true<br>";
if(!($a==$b)) echo "Not equal<br>";

?>