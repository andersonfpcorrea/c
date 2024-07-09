#include<stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "John";
    char last_name[] = "Doe";

    printf("%d \n", distance);
    printf("%f \n", power);
    printf("%f \n", super_power);
    printf("%c \n", initial);
    printf("%s \n", first_name);
    printf("%s \n", last_name);
    printf("%s %c %s \n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("Your code has %ld bugs \n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("Expected bugs %f \n", expected_bugs);

    double part = expected_bugs / universe_of_defects;
    printf("This is just a %e portion of the universe \n", part);

    char null_byte = '\0';
    int care_percentage = bugs * null_byte;
    printf("This means nothing: %d%% \n", care_percentage);

    return 0;
}