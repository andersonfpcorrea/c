#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("One argument. \n");
    } else {
        if (argc > 1 && argc < 4) {
            printf("Arguments: \n");
                for (i = 0; i < argc; i++) {
                    printf("%s \n", argv[i]);
                }
            printf("\n");
        } else {
            printf("You have too many arguments. You suck.\n");
        }}
    return 0;
}