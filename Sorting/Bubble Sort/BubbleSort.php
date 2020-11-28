<?php
    //below is a function that iteratively performs binary search
    function bubbleSort($arr,$n){
        for($i=0;$i<$n;$i++){
            $change = 0;
            for($j=0;$j<$n-$i-1;$j++){
              //we need to put bigger element towards the end
                if($arr[$j]>$arr[$j+1]){
                    $tmp= $arr[$j];
                    $arr[$j] = $arr[$j+1];
                    $arr[$j+1] = $tmp;
                    $change= 1;
                }
            }
            //if everything seems sorted, we just return our array
            if($change==0){
                return $arr;
            }
        }
    }
    //we want to know the length of array
    $n = readline("Enter the length of array- ");
    //now declearing an empty array
    echo("Enter the values of array separated by space\n");
    //we are storing data in an array
    //explode breaks string into array
    $arr = explode(' ', readline()); 
    $arr= bubbleSort($arr,$n);
    print_r($arr);
?> 
