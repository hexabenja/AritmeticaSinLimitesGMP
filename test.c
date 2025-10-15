#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <gmp.h>
#include <time.h>
#include <unistd.h>

int intro()
{
    unsigned long long i = 0;

    while(1){
        printf("%llu\n",i);
        i++;

        if(i >= 100000){
            break;

        }
    }
    printf("Velocidad 1 completada \n");
    sleep(3);
}
int main(int argc, char *argv[])
{
    // Intro
    intro();
    return EXIT_SUCCESS;
}

