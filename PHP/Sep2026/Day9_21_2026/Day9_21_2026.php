<?php   
    $name = "Joji";

    $itemPrice = 25;
    $quantity = 4;

    define("TAX_RATE",0.08);

    $subtotal = $itemPrice *   $quantity;

    if($quantity >= 10){
        $discount = 0.20;
    }elseif($quantity >= 5){
        $discount = 0.10;
    }else{
        $discount =0;
    }

    $dicountAmount  =$subtotal * $discount;
    $afterDiscount = $subtotal - $discountAount;

    $tax = $afterDiscount * TAX_RATE;
    $total = $afterDiscount + $tax;

    echo "Customer: " . $name . "\n";
    echo "Price: $". $itemPrice . "\n";
?>