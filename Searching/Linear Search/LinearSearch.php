<?php 
    //we want to know the length of array
    $n = readline("Enter the length of array- ");
    //now declearing an empty array

    echo("Enter the values of array separated by space\n");
    //we are storing data in an array
    //explode breaks string into array
    $arr = explode(' ', readline()); 
    $find = readline("Enter the value to search- ");
    //Here we are performing linear search
    //As we have found the value, we are exiting from the loop
    for($i=0;$i<$n;$i++){
        if($arr[$i]==$find){
            exit("$find was found at index $i");
        }
    }
    //If we havnt found the value then we display this message
    echo("Value not found");
?> 
