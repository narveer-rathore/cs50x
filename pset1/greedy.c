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
    
    //printf("%f\n", change*100.0);
    change = change * 100;
    int cents = round(change);
    int coins = 0;
   //printf("cents = %d\n", cents);
    
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