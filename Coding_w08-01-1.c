#include <stdio.h>                   //include header

int main() {                          //main function
    int odd = 0;                      //declare variable odd and set value as 0
    while (odd < 10)                  //start while loop with condition (odd < 10)
    { 
       odd += 2;                            //increase value of odd by 2
       printf("%d ", odd);                  //print value of odd
    }
    printf("\nEnd of loop\n");               //print "End of loop" after while loop is finished
    return 0;                              //return 0 to indicate successful completion of program
}


//in line 4, decalre variable odd and assign value 0
//in line 5, start while loop with condition odd < 10
//in line 7, increase value of odd by 2
//in line 8, print value of odd 
//in line 10, print "End of loop" after while loop is finished

//description: The while loop will continue to work as long as the condition (odd < 10) is true.
//which we decalre odd = 0 in line 4, so the loop will run until odd is no longer less than 10.
//The loop will increse odd by 2 each time it runs, so the output will be all even numbers from 2 to 10.