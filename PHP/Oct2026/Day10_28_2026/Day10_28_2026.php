<html>
    <body>
        <from method="POST" action="<?php echo $_SERVER['PHP_SELF'];?>">
            Name: <input type="text" name="fname">
            <input type="submit">
        </from>

        <a href="from_demo.php?subject=PHP&web=W3schools.com">Test $_GET</a>

        <?php
            if($SERVER["REQUEST_METHOD"] == "POST"){
                $name = $_POST['fname'];
                if(empty($name)){
                    echo "Name is empty";
                }
                else{
                    echo "Hello, ".$name;
                }
            }
            if(isset($_GET['subject'])){
                echo "Study ". $_GET['subject']." at ".$_GET['web']; 
            }

            echo "<br>File: ". $_SERVER['PHP_SELF'];
            echo "<br>Method: ".$_SERVER['REQUEST_METHOD'];
            ?>
    </body>
</html>