/*

Project Partners: Reemal Hoor, Kineret Ortega 

EECE 210 Software Engineering 1

Dr.Wafa Elmannai 

*/


#include <stdio.h>
int main()
{
  
//Print statments to start game
  
printf("Enter the name of the input file now: \n");
printf("Initializing board.... \n");
printf("Game board has been initialized.... \n");
printf("Placing boats onto the game board.... \n");
printf("=====> Current Board Status <===== \n"); 
 
//while loop
  
{  
int counter= -1; 
while(++counter<=9)
{
    printf("%d  ",counter); 
}
}
  
//end of while loop

//not sure why there is a "0" at the end of line 31 when running note: fix this at somepoint lmao 
printf("\n-------------------------------------- \n");

  
//while loop again
  
{  
int counter= -1; 
while(++counter<=9)
{
    printf("%d : . . . . . . . . . . . .  \n",counter); 
}
}
  
//end of while loop

/*  
//Start of rectangle grid (note: change line 35 to not ask user to enter num of rows)
  

  
    for(int i=0;i<10;i++)  
    {  
        for(int j=0;j<10;j++)  
        {  
            printf(".");  
        }  
        printf("\n");  
    }  

  */
  
  
//End of rectangle Grid

printf(" For your guess, enter in the row and column positions of the game board.  Please enter the row value first. \n");
  
printf("ROW value (From 0 to 9): \n");
  
printf("COLUMN value (From 0 to 9): \n");

return 0;
