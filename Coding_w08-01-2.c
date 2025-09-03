#include <stdio.h>                           //include header

int main() {                                 //main function
    for (int i = 2; i <= 10; i+=2) {         //start for loop with initialization (i = 2), condition (i <= 10), and update (i+=2)
        printf("%d ", i);                    //print value of i
    }
    printf("\nEnd of loop\n");                //print "End of loop" after for loop is finished
    return 0;                                 //return 0 to indicate successful completion of program
}

//in line 4, start for loop with initialization (i = 2), condition (i <= 10), and update (i+=2)
//in line 5, print value of i
//in line 7, print "End of loop" after for loop is finished
//description: The for loop will continue to work as long as the condition (i <= 10) is true.
//which we initialize i = 2 in line 4, so the loop will run until i is no longer less than or equal to 10.
//The loop will increase i by 2 each time it runs, so the output will be all even numbers from 2 to 10.
