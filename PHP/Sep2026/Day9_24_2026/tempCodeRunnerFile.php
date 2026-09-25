<?php

    $even = [];

    for($i=1;$i<30;$i++)
    {
        if($i % 2==0)
            $even[] = $i;
    }
     foreach ($even as $value)
    {
            echo "$value\n";
    }


  ?>