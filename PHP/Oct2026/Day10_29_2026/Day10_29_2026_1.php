<?php
session_start();
?>
<html>
    <body>
        <?php
        if(isset($_SESSION['favcolor'])){
            echo "Favorite color is " .$_SESSION["favcolor"]."<br>";
            echo "Favorite animal is ".$_SESSION["favanimal"].".<br>";
        }

        $_SESSION["favcolor"] = "yellow";
        echo "New favorite color is ". $_SESSION["favcolor"].".<br>";

        unset($_SESSION["favanimal"]);
        session_unset();
        session_destroy();
        ?>
    </body>
</html>