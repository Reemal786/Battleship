/*

Project Partners: Reemal Hoor, Kineret Ortega 

EECE 210 Software Engineering 1

Dr.Wafa Elmannai 

*/

// comments: use for loop to repeat grid after user input hit or miss


#include <stdio.h>
#include <stdlib.h>

// creating output file for placement of ships 
#define FILE_Name "placeShips.txt"

//Problem 1: write to file
//Problem 1.5: print 2d array to terminal
//Problem2: write array to file

/*
void main()
{

    FILE *output_1;
    output_1 = fopen("placeShips.txt", "w");
    // int test = 5;
    // processing the file
    int placements[12][2] = {{1, 1},{1, 2},{1, 3},{2,4},{2,5},{2,6},{1,7},{2,7},{3,7},{4,8},{5,8},{6,8}};
    fprintf(output_1,"%d %d", placements);
    // fprintf(output_1,"%d",test);

    // closing file
    fclose(output_1);
}

//creating the 10x10 grid 
int main()
{
  */
  
//Print statments to start game
  int main()
  {
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

int Row; 
int Column; 

printf("ROW value (From 0 to 9): \n");
scanf ("%d", &Row); 

  
printf("COLUMN value (From 0 to 9): \n");
scanf ("%d", &Column); 

printf(".......Hit!!!");

//Repeat Grid 

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

//end of repeat grid

printf("For your guess, enter in the row and column positions of the game board. Please enter the row value first.");
/*
int Row; 
int Column; 
*/
printf("ROW value (From 0 to 9): \n");
//scanf ("%d", &Row); 

  
printf("COLUMN value (From 0 to 9): \n");
//scanf ("%d", &Column); 

printf(".......Hit!!! \n");

//Repeat Grid 

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

//end of repeat grid

//ending Display 
      
printf("Congradulations!! You sunk all four boats. It took 12 shots to sink all the boats. Your percentage of hits is ");

//Percentages 

        float percentage;
   int total_hits = 1200;
   int scored = 1122;

   percentage = (float)scored / total_hits * 100.0;

   printf("%.2f%%", percentage);

//end of percentages
      
return 0;
  }


/* 

//HEADER FILE FOR GRID 


#ifndef Game_Grid
#define Game_Grid


int counter= -1; 
while(++counter<=9)
{
    printf("%d : . . . . . . . . . . . .  \n",counter);
}
// Function prototype, its declaration

#endif /* Game_Grid*/


//HIT AND MISS CODE 


/*CODE FOR HIT AT  0;3 

printf("0 : . . H . . . . . . . . \n");
int Counter= 0; 
while(++Counter<=9)
{
    printf("%d : . . . . . . . . . . .  \n",Counter);
}
*/


//Grid Code
void InitialBoard()
{
    //creating 10*10 array grid 
    //still need to include the numbers on the top and side 
    char gameBoard[10][10];
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            gameBoard[i][j] = '.';
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            printf("%c ", gameBoard[i][j]);
        }
        printf("\n");
    }
}

