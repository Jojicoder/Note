<?php

if($_SERVER["REQUEST_METHOD"] == "POST"){
    $username = $_POST['username'];
    $password = $_POST['password'];

    if($username == 'John' && $password == '123'){
        header('Location: welcome.php');
        exit;
    }else{
        echo "<p style='color:red;'>Username or password is not correct.";
    }
}?>