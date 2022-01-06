
// A screen has 25 lines and 80 columns.

// Link--> https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
//https://www.youtube.com/watch?v=A6HlioKRMHM
//https://www.youtube.com/watch?v=9QXn4tQdueU&t=555s

// C program to generate random numbers
// Generate Random number in each Run and Guess the Number Which computer generated.
// This program will create different sequence of random numbers on every program run.
#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include<time.h>
#include<conio.h>
#include<windows.h>


int main(void)
{
	  system ("color 0a") ;  // 5a for that one
	int GenRandNumber , i , Attempt = 1 , guess ;
	  char opt , name[20];



  printf (" \n  Enter your Name Please :):)  : ");
           scanf ("%[^\n]s",name); // take multiple word string


      printf ("\n\n You want to Play number Guessing Game ?????? \n\n") ;

           printf (" If yes Type --> Y  \t  If No Type --> N \n") ;
                scanf (" %c",&opt);


        switch ( opt ) // for choosing yes or no
            {

             case 'Y' :
                       printf ( "\n **** WelCome -- %s -- in Number Guessing Game **** \n\n " , name );

                      printf ( "\n //// You have total 10 Attempt to win the game \\\\ \n\n " ) ;

                        // ............ CODING ........................
                   // This program will create different sequence of random numbers on every program run

                     // Use current time (system time) as seed for random generator
             srand(time(0)); // always to be 0 here not any other number in time function Else it throw error as Segmentation fault.
                // if i won't use srand(time(0)) then rand() generate the same number in each run.

            GenRandNumber = 1+rand()%15 ;  //  By applying %15 Then its output will not exceed 15 it will be between 1 to 15.


    //    GenRandNumber = rand()%100 ;  // it will be b/w 0 to 99
   //      GenRandNumber = 1+rand()%100 ;  // it will be b/w 1 to 100 Since we added 1 .

      /*   so In general :
            GenRandNumber =k + rand()%n ;   lowest would be k and Highest n.
         */


       //     GenRandNumber = rand()%100 ;         // By applying %100 Then its output will be between 0 to 99.
                                                  // if we use %200 then it will give between 0 to 199
                                                  // if we write  rand()%200+1 then it give from 1 to 200.

        // ...... Above we have programmed to generate Generate random numbers on every program run......................
  // ---------------------   printf (" \n  GenRandNumber : %d",GenRandNumber);




           printf (" \n Hint: You can choose your number Between 1 to 15 \n\n") ;

                  for( int i = 0 ; i < 10 ; i++ ) // limiting the number of Guess a user can .

                   {
                                    printf (" \n %d Attempt -  Enter you Guess : " , Attempt);
                                               scanf ("%d" , &guess );



                            if ( Attempt >= 10 )
                                        {
                                            printf ( "\n\n Sorrry You exceed the attempt Limit :  \n") ;
                                               printf ("\n  <---- You Loose ---->\n\n " );

                                               getch () ;

                                          printf ("\n\n \t\t   ********************** Made BY NHKHAN  ********************** \n\n\n " );

                                             break;
                                        }

                            else
                                  {

                                             if ( guess > GenRandNumber )
                                                       {
                                                      printf ( "   Lower Number Please... \n" ) ;
                                                           Attempt++;
                                                      }
                                              else if ( guess < GenRandNumber )
                                                            {
                                                          printf ( "  Higher Number Please... \n") ;
                                                            Attempt++;
                                                             }

                                             else if ( guess == GenRandNumber )  // if  i.e  run when number is Guessed
                                                     {
                                                         if ( Attempt <= 5 )
                                                                  {
                                                                    printf ("\n  <---- Wowwwww You Win in %d Attempt ---->\n" , Attempt );
                                                                       getch () ;

                                                         printf ("\n\n \t\t   ********************** Made BY NHKHAN  ********************** \n\n\n " );
                                                                      break ;

                                                                  }


                                                           else
                                                               {
                                                              printf ("\n  <---- You Win in %d Attempt ---->\n\n " , Attempt );

                                                              getch () ;

                                                        printf ("\n\n \t\t   ********************** Made BY NHKHAN  ********************** \n\n\n " );

                                                               break ;

                                                                }
                                                       }
                                                 else
                                                 printf (" Please Enter Valid Number \n");


                                        } // else statement if attempt is less than the limit



                            } // END of for LOOP

                    case 'N' :
                                exit(1);

                    default :
                            printf ("  Please Enter Valid Option \n" );

        } // END of Switch case




      getch () ;
	return 0;
}
