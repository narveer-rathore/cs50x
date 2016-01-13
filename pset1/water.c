#include <stdio.h>
#include <cs50.h>

int main(void) {
    int min;
    
    printf("minutes: ");
    min = GetInt();

    printf("bottles: %d\n", min*12);
    
    return 0;
}