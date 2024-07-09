#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    char *states[] = {
        "A", "B", "C", "D"
    };
    int state_num = 4;
    for (i = 0; i < state_num; i++) {
        printf("%s \n", states[i]);
    }
    return 0;
}