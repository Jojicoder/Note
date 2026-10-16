<?php

/*$name = "John";
$age = 22;
$gpa = 3.8;
$isStudent = true;

echo "Name: ". $name . "\n";
echo "Age: ".$age . "\n";

var_dump($name);
var_dump($age);
var_dump($gpa);
var_dump($isStudent);

echo "Hello, " . $name ."!\n";

$x = "100";
$y = 25.75;

var_dump($x);
var_dump($y);

$a = (int)$x;
$b = (int)$y;

var_dump($a);
var_dump($b);

$number = 500;
$text = (string)$number;

var_dump($text);

$num1 = 10;
$num2 = "20";

echo $num1 + $num2 . "\n";
echo $num1 . $num2 . "\n";$age = 22;

        if($age >= 18){
            echo "You are an adult.\n";
        }else
        {
            echo "You are a minor.\n";
        }

        $score =85;

        if($score >= 90){
            echo "Grade A\n";
        }elseif($score >= 80){
            echo "Grade C\n";
        }elseif($score >= 70){
            echo "Grade B\n";
        }else{
            echo "Grade F\n";
        }

        $hasID = true;

        if($age >= 21 && $hasID){
            echo "Entry allowed.\n";
        }else{
            echo "Entry denied.\n";
        }for($i = 1; $i <= 5;$i++)
            {
                echo "For: ". $i. "\n";
            }
            
            $x = 1;

            while($x <= 5){
                echo "While: " . $x . "\n";
                $x++;
            }

            $y = 1;

            do{
                echo "Do While: " . $y . "\n";
                $y++;
            }while ($y <= 5);

            $total = 0;
            for($i = 1; $i <=10;$i++)
            {
                $total += $i;
            }

            echo "Total" .$total. "\n";*/

            $fruits = ["Apple", "Banana", "Orange"];

            echo $fruits[0] . "\n";

            $fruits[] = "Mango";

            foreach ($fruits as $fruit){
                echo $fruit ."";
            }

            $studnet = [
                "name" => "John",
                "age" => 22,
                "major" => "Computer Science"
            ];

            echo $studnet["name"] . "\n";

            foreach($studnet as $key =>$value){
                echo $key . ": " . $value . "\n";
            }

?>
