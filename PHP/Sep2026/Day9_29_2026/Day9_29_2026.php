<?php
ECHO "Hello World!<br>";
echo "Hello World!<br>";
EcHo "Hello World!<br>";

// 1
echo "Welcome to PHP Programming!";
echo "<br/>";
//2
$str = "This is string";
$int =1;
$double = 2.0;
$boolean = true;


// 3
$x = "10";
$y = "20";
echo "<br/>";
echo $x+$y;

// 4
define("SITE_NAME","MyWebsite");
echo SITE_NAME;
echo "<br/>";
//5
$Checker = "";

if(isset($Chekcer))
{
    echo "This is set.";
    echo "<br/>";
}else
{
    echo "There is not set";
    echo "<br/>";
}

$Chekcer = "Hello";

if(isset($Checker))
{
    echo "This is set";
    echo "<br/>";
}
else{
    echo "This is not set";
    echo "<br/>";
}
//6
$testVar ="";
if(empty($Checker))
{
    echo "This is not empty";
    echo "<br/>";
}
else
{
echo "This is empty";
echo "<br/>";
}
//7
$num =42.5;
echo "<br/>";
 
echo gettype($num);
echo "<br/>";
echo var_dump($num);
?>