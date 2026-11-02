<?php
session_start();
setcookie("theme","dark",time()+86400);
if(isset($_GET["logout"])){session_destroy(); header("Location: short.php"); exit;}

$err = "";
if($_SERVER["REQUEST_METHOD"] == "POST"){
    $name = htmlspecialchars(trim($_POST["name"]));
    $email = trim($_POST["email"]);
    if(empty($name) || !preg_match("/^[a-zA-Z ]*$/",$name)) $err = "Invalid name";
    elseif(!filter_var($email,FILTER_VALIDATE_EMAIL))      $err = "Invalid email";
    else $_SESSION["user"] = $name;
}

$x = 10; $y = "20";
echo "$x ".'$x '.($x+$y)." ".$x.$y."<br>";
echo print "", "<br>";
var_dump((int)5.99, (bool)"0",4/2,2/4);

switch(2){
    case 1:
        echo "a";
    case 2:
        echo "b";
    case 3:
        echo "c";
}
do{echo "D";}while(false);
for($i = 1; $i<=5;$i++)
{
    if($i==2)
        continue;

    if($i==4)
        break;
    echo $i;
}

$arr = ["Joi" => 22, "Alex" => 25];
$arr["Sam"] = 30;
foreach ($arra as $k => $v) echo " $k:$v";
echo "<br>". count($arr). "<br>";



$g = 5;
function f($a=1){
    global $g; static $c =0; $c++ ; return $a + $g +$c;
}
f(); echo f(10)."<br>";
?>
<?php if(isset($_SESSION["user"])):?>
    Welcome, <?= $_SESSION["user"] ?>! theme: <?=$_COOKIE["theme"]??"none" ?>
    <a href="?logout=1">Logout</a>
<?php else: ?>
    <form method="post">
        Name: <input name="name"> Email: <input name="email">
        <input type="submit"> <?=$err ?>
</form>
<?php endif;?>
<?php
session_start();

if($_SERVER["REQUEST_METHOD"]=="POST"){
    $username = trim($_POST["username"]);

    if(empty($username)){
        echo "Username is required";
    }else{
        $_SESSION["user"] = $username;
        echo "Welcome, ".$username;
    }
}
?>