#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float change;
    
    printf("O hai! "); 
    
    do {
        printf("How much change is owed?\n");
        change = GetFloat();
    } while (change < 0);
    
    int cents = round(change * 100);
    int coins = 0;
    
    while (cents >= 25) {
        coins += 1;
        cents -= 25;
    }
    
    while (cents >= 10) {
        coins += 1;
        cents -= 10;
    }
    
    while (cents >= 5) {
        coins += 1;
        cents -= 5;
    }
    
    while (cents >= 1) {
        coins += 1;
        cents -= 1;
    }
    
    printf("%d\n", coins);
    
    return 0;
}