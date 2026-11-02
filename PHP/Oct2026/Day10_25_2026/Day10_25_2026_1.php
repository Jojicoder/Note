<?php
session_start();

if(isset($_GET["logout"])){
    session_destroy();
    header("Location: register.php");
    exit;
}

$errors =[];

if($_SERVER["REQUEST_METHOD"] === "POST"){
    $name   = trim($_POST["name"] ?? "");
    $email  = trim($_POST["email"] ?? "");
    $gender = $_POST["gender"] ?? "";
    $zip    = trim($_POST["zip"] ?? "");

    if(!preg_match("/^[a-zA-Z ]+$/",$name)) $errors[] = "Name: letters and ";
    if(!filter_var($email, FILTER_VALIDATE_EMAIL)) $errors[] = "Invalid email";
    if($gender === "")
    if(!preg_match("/^[0-9]+$/",$zip)) $errors[] = "Zip: numbers only";

    if(count($errors) === 0){
        $_SESSION["user"] = compact("name","email","gender","zip");
    }
}
$user = $_SESSION ?>