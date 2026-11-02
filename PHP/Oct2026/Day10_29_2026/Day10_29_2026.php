<?php
session_start();
$_SESSION["favcolor"] = "green";
$_SESSION["favanimal"] = "cat";
?>
<html>
    <body>
        <?php echo "Session variables are set.";?>
        <a href="demo_session2.php">Next page</a>
    </body>
</html>