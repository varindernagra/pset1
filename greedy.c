//****************************************************************************************************
//****************************************************************************************************
//Week: 1 assignment: 2 (greedy)
//Date: 5/29/14
//Author: Varinder Singh 
//email: varindernagra@gmail.com
//Modification Date:  
//****************************************************************************************************
//****************************************************************************************************
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //**********************************************************************************************
    //this block will ask for input dollar amount
    //**********************************************************************************************
    float change;
    do 
    {
    
        printf( "How much change is owed? \n" );
        change = GetFloat();
                  
    } while ( change < 0 );//repeat if change is less than 0
    

    
    //Convert $ to cents
    float cents = (float) 100 * (float)change;
    
    //rounding off (not casting) as my Master told me. 
    int centsInt = (int) round(cents);
    
    //******************************************
    //******************************************
    //lets count coins now 
    //******************************************
    //******************************************
    
    
    //Assign each coin in array, so we can iterate
    int myArray[] = {25,10,5,1};
    
    //setting coin counter to zero
    int coins = 0;
    
    
    //same log for each coin. 
            //if modulo if less than current coin
                    //then number of current coin X= (value enterd)/current coin
                    //current calue changes to modulo
                    //add X to coins
    //repeat for each coin in array
    for(int i = 0; i < 4; i++)
    {
       
      int mod = (int)centsInt % (int)myArray[i];
      
      if (mod < myArray[i] )
      { 
          int thiscoin = centsInt / myArray[i];
          centsInt = mod;
          coins = thiscoin + coins;      
      }
      
    }
    
    
    // print total coin amount
    printf("%i\n",coins);
    
}
