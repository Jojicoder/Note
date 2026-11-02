<?php
var_dump(5);
var_dump(5.34);
var_dump("25");
var_dump(4*2.5);

var_dump(is_int(5985));
var_dump(is_int(59.85));
var_dump(is_float(10.365));
var_dump(is_numeric("5985"));
var_dump(is_numeric("Hello"));
var_dump(is_infinite(1.9e411));
var_dump(sqrt(-1));

echo strlen("Hello world!")."<br>";
echo str_word_count("Hello world!")."<br>";
echo strrev("Hello");
echo strpos("Hello World!","World")."<br>";

$x ="Hello";
$y = "World";

echo $x.$y."<br>";
echo "$x $y<br>";

$a = 10;
$b = '20';
echo "c = ".($a+$b)."<br>";
echo "c = ".($a+$b)."<br>";
var_dump(2/4);
var_dump(4/2);

var_dump((int) 5.35);
var_dump((integer)"25");
var_dump((float)7);
var_dump((double)"9.99");
var_dump((string)100);
var_dump((bool)100);
var_dump((bool)0);
var_dump((bool)"Hello");
var_dump((bool)"0");
?>