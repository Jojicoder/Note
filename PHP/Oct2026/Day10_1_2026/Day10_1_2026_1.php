<?php
$age = 25;
$price = 19.99;
$score = "88";

var_dump($age);
var_dump($price);
var_dump($score);

if(is_numeric($score)){
    echo "Score is numeric\n";
}

$score = (int)$score;

echo "Score: ".$score."\n";


$score = 85;

if($score >=90){
    echo "GradeA\n";
}elseif($score >= 80)
{
    echo "GradeB\n";
}

for($i = 1;$i <=5;$i++)
{
    echo $i."\n";
}
?> 