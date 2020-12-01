<?php
    //below is a function for selction sort
    function selectionSort($arr,$n){
        for($i=0;$i<$n;$i++){
          //our aim is to find the minimum value in the array and
          //then put it in front till we get our array sorted
            $min=$i;
            for($j=$i;$j<$n;$j++){
                if($arr[$min]>$arr[$j]){
                    $min=$j;
                }
            }
            $tmp= $arr[$min];
            $arr[$min]= $arr[$i];
            $arr[$i]= $tmp;
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
    $arr= selectionSort($arr,$n);
    print_r($arr);
?> 
