<?php

     $scores = [55, 82, 91, 40, 76]; 
    $max = 0;

    foreach($scores as $num)
    {
        if($max<$num)
        {
            $max = $num;
        }
    }

    echo "$max";


  ?>s