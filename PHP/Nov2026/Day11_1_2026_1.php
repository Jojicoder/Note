<?php

session_start();
if(isset($_GET["reset"])) unset($_SESSION["color"]);
if($_SERVER["REQUEST_METHOD"] == "POST"&&!empty($_POST["color"]))
{
    $_SESSION["color"] = htmlspecialchars($_POST["color"]);
}

$color = $_SESSION["color"] ?? "";

$a = 5;
echo $a++ + ++$a, " ", $a,"<br>";
var_dump(7 / 2,(string)3.0 ,0 == "");
echo str_word_count("I love PHP"). strrev("cba")."<br>";

$s = [10 => "a", "b", 5 => "c", "d"];
foreach ($s as $k => $v) echo "$k=$v ";
"<br>";

switch("3"){
    case 3: echo "num"; break;
    default: echo "none";
}

echo ($a > 5 ? "big" : "small")."<br>";

function area(int $w, int $h=2){return $w * $h;}
echo area(3). " ". area("4",5). "<br>";
?>
<form method="post">
    <input type="radio" name="color" value="red" <?php if($color == "red") echo "checked";?>> Red
    <input type="radio" name="color" value="blue"<?php if($color == "blue") echo "checked"; ?>> Blue
    <input type="submit">
</form>
Saved: <?= $color ?: "none" ?> <a href="reset=1">Reset</a>