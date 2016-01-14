#include <stdio.h>
#include <cs50.h>

int main(void) {
    int h;
    
    do {
        printf("Height: ");
        h = GetInt();
    } while (h < 0 || h > 23);
    
    for (int i = 0; i < h; i++) {
        for (int j = 0, r = h + 1; j < r; j++) {
            if (j < r - i - 2)
                printf(" ");
            else
                printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
}