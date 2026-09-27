<!DOCTYPE html>
<html>
    <head>
        <title>Bob's Auto Parts - Order Results</title>
    </head>
    <body>
        <h1>Bob's Auto Parts</h1>
        <h2>Order Results</h2>

        <?php

            define('TIREPRICE', 100);
            define('OILPRICE', 21);
            define('SPARKPRICE',6);

            $tireqty = (int)$_POST['tireqty'];
            $oilqty  = (int)$_POST['oilqty'];
            $sparkqty = (int)$_POST['sparkqty'];

            $totalqty = $tireqty + $oilqty + $sparkqty;

            if($totalqty == 0){
                echo '<p style="color:red">';
                echo 'You did not order anything on the previous page!<br/>';
                echo '</p>';
            }else{
                echo '<p>Order processed at ' . date('H:i, jS F Y').'</p>';


                echo '<p>Your order is as follows: </p>';
                echo htmlspecialchars($tireqty). ' tires<br />';
                echo htmlspecialchars($oilqty) . ' bottles of oil<br />';
                echo htmlspecialchars($sparkqty). ' spark plugs<br />';

                echo '<p>Items ordered: '.$totalqty . '</p>';

                $totalamount = $tireqty * TIREPRICE
                + $oilqty * OILPRICE
                + $sparkqty * SPARKPRICE;

                echo 'Subtotal: $'.number_format($totalamount,2). '<br />';

                $taxrate = 0.10;
                $totalamount = $totalamount* (1+$taxrate);
                echo 'Total including tax: $'. number_format($totalamount,2). '<br />';
            }
           
           ?>
    </body>
</html>