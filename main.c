///\file main.c
///\brief C implementation for generator of inputs.
///
/// Created by Diana Bleoanca.

#include <stdio.h> //for rand()
#include <stdlib.h>
#include <time.h> // for srand()

int main()
{
    ///\fn int main()
    ///\brief Main function.
    ///This function writes on file "input" 10 random integers.
    ///First 5 integers have values between 5 and 19.
    ///Other ones have value between 10 and 69.


    FILE *file_path = fopen( "input" , "w" );
    int iterator;
    int no_of_stories;

    srand((unsigned) time(NULL) );

    for( iterator = 0 ; iterator < 5 ; iterator++ )
    {
        no_of_stories = rand() % 15 + 5;
        fprintf( file_path, "%d " , no_of_stories );
    }

    for( iterator = 0 ; iterator < 5 ; iterator++ )
    {
        no_of_stories = rand() % 60 + 10;
        fprintf( file_path, "%d " , no_of_stories );
    }


    return 0;
}
