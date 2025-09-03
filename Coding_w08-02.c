#include <stdio.h>                      //include header

int main() {                                //main function
  
    int start;                             //declare variable start
    int stop;                              //declare variable stop

    printf ("Enter start number: ");                 //prompt user to enter start number
    scanf ("%d", &start);                            //read user input and store in variable start
    printf ("Enter stop number: ");                  //prompt user to enter stop number
    scanf ("%d", &stop);                             //read user input and store in variable stop
    printf ("Start number is %d and stop number is %d\n", start, stop);                 //print start and stop numbers
    printf ("-------------------------\n", start, stop);                                //print separator line

    printf ("Sequence from start to stop: ");                            //print message
    for (int i = start; i <= stop; i++) {                            //start for loop with initialization (i = start), condition (i <= stop), and update (i++)
        printf("%d ", i);                                             //print value of i
    } 
    printf("\nThank you.");                               //print "Thank you." after for loop is finished
     
    return 0;                       //return 0 to indicate successful completion of program
}

//in line 5,6  declare variable start,stop
//in line 8,9,10,11 prompt user to enter start and stop numbers and read user input
//in line 12, print start and stop numbers
//in line 16 start for loop with initialization (i = start), condition (i <= stop), and update (i++)
//the loop will run from start number to stop number by increasing i by 1 each time until i is no longer less than or equal to stop number
//in line 17, print value of i
//in line 19, print "Thank you." after for loop is finished