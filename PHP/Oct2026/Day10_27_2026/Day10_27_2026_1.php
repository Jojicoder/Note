<?php
function showCourse($code, $name,$grade){
    echo "$code - $name : $grade<br>";
}
showCourse("MAC272","PHP Programming","A");
showCourse("MAC101","Intro to Computers","B+");

function maxNum($a,$b){
    return ($a > $b) ? $a : $b;
}

echo maxNum(5,12)."<br>";

function add($a,$b)
{
    return $a*$b;
}
echo add(4,6)."<br>";

$num =10;

function modifyNum(){
    $num = 20;
}
echo "Before: $num<br>";
modifyNum();
echo "After (no global): $num<br>";

function modifyNumGlobal(){
    global $num;
    $num = 20;
}

modifyNumGlobal();
echo "After global): $num<br>";
?>