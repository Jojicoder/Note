<?php
echo "Welcome to PHP Programming!<br>";

$name = "joji";
$age = 20;
$gpa = 3.8;
$isStudent = true;
$nothing = null;
echo $name."<br>";
var_dump($name,$age,$gpa,$isStudent,$nothing);

$a = "10";
$b = "20";
echo "<br>". ($a+$b)."<br>";

define("SITE_NAME", "MyWebsite");
echo SITE_NAME."<br>";

$x=5;
var_dump(isset($x));
unset($x);
var_dump(isset($x));

$testVar = "";
echo empty($testVar) ? "<br>Empty<br>" : "<br>Not empty<br>";

$num = 42.5;
echo gettype($num)."<br>";
var_dump($num);
?>