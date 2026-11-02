<?php
echo "Hello World<br>";

$name = "John";
$age = 25;
$price = 10.5;
$is_actice = true;

echo "I love $name!<br>";
echo 'I love $name!<br>';

echo $name." is ". $age."<br>";

$x = 10;
$y = "20";
echo "x + y is: ", $x+$y,"<br>";

define("PI",3.14);
const SITE = "MyWebsite";
echo PI." ".SITE."<br>";

$var = "Hello";
echo isset($var) ? "set" :"not set";
echo "<br>";
unset($var);
echo isset($var) ? "set" :"not set";
echo "<br>";

$var = "0";
echo empty($varX) ? "empty" : "not empty";
echo "<br>";

echo gettype("4 months")."<br>";
var_dump(5985);
echo "<br>";

$color = "red";
ECHO "My car is ".$color."<br>";

echo "Hello", ",","World!<br>";
$result = print "Hi there!<br>";

$a =5;
$b =4;
echo $a+$b."<br>";
echo "$a + $b<br>";

?>