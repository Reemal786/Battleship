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
printf("\n--------------------------------------");

  
//while loop again
  
{  
int counter= -1; 
while(++counter<=9)
{
    printf("%d : \n",counter); 
}
}
  
//end of while loop

  
//Start of rectangle grid (note: change line 35 to not ask user to enter num of rows)
  
{
  int n;  
    printf("Enter the number of rows ");  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            printf(".");  
        }  
        printf("\n");  
    }  
}
  
//End of rectangle Grid

return 0;
}
