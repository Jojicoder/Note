<?php
$users = [
    "Joji" => "pas",
    "Bob" => "pass"
];

if($_SERVER["REQUEST_METHOD"] == "POST")
{
    $username = trim($_POST["username"]);
    $password = trim($_POST["password"]);

    if(isset($users[$username])&& $users[$username] == $password)
    {
        echo "Seuccss". $username;
    }
    else{
         echo "Fail";
    }
}

function findMaz($a,$b){
    return $a > $b ? $a:$b;
}

if($_SERVER["REQUEST_METHOD"] =="POST")
{
    $email = trim($_POST["email"]);
    $name = $_POST["name"];
    if(!isset($email))
    {
        echo "Invalid email format" ;
    }

    if(space($name))
    {
        echo "Only letters and white space allowed";
    }
}

$scores=[70,85,90];

foreach($n as $scores)
{
    echo $n." ";
}
?>