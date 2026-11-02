<?php
session_start();
if(isset($_GET["out"])){
    session_destroy();
    header("Location: mini.php");
    exit;
}
if($_SERVER["REQUEST_METHOD"]== "POST"){
    $n = trim($_POST["n"]);
    if(preg_match("/^[a-zA-Z ]+$/",$n)) $_SESSION["u"] = htmlspecialchars($n);
}

$a = 5;$b = "5";
var_dump($a == $b, $a === $b, (int) "7.9");
echo 'a=$a' . "a=$a ". $a + $b. "<br>";

$list = ["x" => 1, "y" => 2];
foreach($list as $k => $v) echo "$k$v";
switch(1){
    case 1:
        echo "A";
    case 2:
        echo "B";
        break;
    case 3:
        echo "C";
}

function sum($p, $q =3)
{
    static $t = 0;
    return $t +=$p+$q;
}
sum(1);
echo " ". sum(1)."<br>";
?>
<?php if(isset($_SESSION["u"])): ?>
    Hi, <?= $_SESSION["u"] ?> <a href="?out=1">Logout</a>
<?php else: ?>
    <form method="post"><input name="n"><input type="submit"></form>
    <?php endif; ?>