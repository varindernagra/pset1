//****************************************************************************************************
//****************************************************************************************************
//Week: 1 assignment: 1 (mario)
//Date: 5/28/14
//Author: Varinder Singh
//email: varindernagra@gmail.com
//Modification Date:  
//****************************************************************************************************
//****************************************************************************************************

#include <cs50.h>
#include <stdio.h>


int main(void)
{
    //**********************************************************************************************
    //this block will ask for height
    //**********************************************************************************************
    int h;
    do 
    {
    
        printf( "Height: " );
        h = GetInt();
                  
    } while ( h > 23 || h < 0 );//repeat if integer is not less than 24
    
    //**********************************************************************************************
    //this block will Building the pyramid
    //**********************************************************************************************
   int hash = 2;//starting with 2##
   int space = h-2;//starting with 2 less spaces in first line.
     for (int i = 1 ; i <= h ; i++)
     {  


            // print space for one line
            for (int k = 0 ; k <= space ; k++)
            {
                printf(" ");
            }
 
 
 
            //print hash for one line
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        
        
        // move cusor to next line
        printf("\n");
        // one less space for next Line
        space = space -1;
        // one extra # for next line
        hash = hash +1;
        
        
        
     }
     //end of for loop
     
     
}
 
