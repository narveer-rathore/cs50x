#include <stdio.h>
#include <cs50.h>

int main(void) {
    short int h;
    
    do {
        printf("Height: ");
        h = GetInt();
    } while (h < 0 || h > 23);
    
    short int space;
    for (int i = 0; i < h; i++) {
        space = h - i - 1;
        
        for (int j = 0; j < space; j++)
            printf(" ");
            
        for (int j = 0; j < (h - space); j++)
            printf("#");
        
        printf("  ");
        
        for (int j = 0; j < (h - space); j++)
            printf("#");
            
        printf("\n");
    }
    return 0;
}