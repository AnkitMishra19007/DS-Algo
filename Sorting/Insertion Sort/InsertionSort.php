<?php
    //below is a function that iteratively performs binary search
    function insertionSort($arr,$n){
        for($i=0;$i<$n;$i++){
            $j=$i;
            while($j>0){
                if($arr[$j-1]>$arr[$j]){
                    $tmp=$arr[$j-1];
                    $arr[$j-1]=$arr[$j];
                    $arr[$j]=$tmp;
                }
                $j=$j-1;
            }
        }
        return $arr;
    }
    //we want to know the length of array
    $n = readline("Enter the length of array- ");
    //now declearing an empty array
    echo("Enter the values of array separated by space\n");
    //we are storing data in an array
    //explode breaks string into array
    $arr = explode(' ', readline()); 
    $arr= insertionSort($arr,$n);
    print_r($arr);
?> 
