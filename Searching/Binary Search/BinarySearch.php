<?php
    //below is a function that iteratively performs binary search
    function binarySearch($arr,$left,$right,$find){
        //calculating mid pointer
        $mid=(int)(($left + $right)/2);
        //if we found the value then just return the index
        if($arr[$mid]==$find){
            return $mid;
        }
        //if the below condition occurs that means the value not found
        if($right==$left){
            return -1;
        }
        //if the element we are looking for is on left side
        if($arr[$mid]>$find){
            return binarySearch($arr,$left,$mid,$find);
        }
        //if the element that we are looking for is on the right side
        if($arr[$mid]<$find){
            return binarySearch($arr,$mid+1,$right,$find);
        }
    }
    //we want to know the length of array
    $n = readline("Enter the length of array- ");
    //now declearing an empty array
    echo("Enter the values of array separated by space\n");
    //we are storing data in an array
    //explode breaks string into array
    $arr = explode(' ', readline()); 
    $find = readline("Enter the value to search- ");
    $i = binarySearch($arr,0,$n-1,$find);
    //if value not found then displaying -1
    if($i==-1){
        echo "Value not found";
    }
    else{
        echo("$find was found at index $i");
    } 
?> 
