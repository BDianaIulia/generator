#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
