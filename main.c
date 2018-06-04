#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file_path = fopen( "input" , "w" );
    int iterator;
    int no_of_stories;

    srand((unsigned) time(NULL) );

    for( iterator = 0 ; iterator < 10 ; iterator++ )
    {
        no_of_stories = rand() % 60 + 20;
        fprintf( file_path, "%d " , no_of_stories );
    }


    return 0;
}
