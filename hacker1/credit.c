#include <stdio.h>
#include <cs50.h>

int main(void) {
    long long num;
    
    printf("Number: ");
    num = GetLongLong();
    
    short int psum, sum;
    short int len, first, firstTwo;
    short int d, isOther = 0;
    
    len = sum = psum = 0;
    
    while (num > 0) {
        if (isOther) {
            d = num % 10;
            d = d * 2;
            
            if (d > 9)
                d = 1 + d % 10;   
            
            psum += d;
            isOther = 0;
        } else {
            sum += num % 10;
            isOther = 1;
        }
        
        len++;
        num = num / 10;
        
        if (num <= 99 && num >= 10)
            firstTwo = num;
    }

    first = firstTwo / 10;

    if (len == 15 && (firstTwo == 34 || firstTwo == 37)) { 
        printf("AMEX\n");
    } else if (firstTwo >= 51 && firstTwo <= 55 && len == 16) {
        printf("MASTERCARD\n");
    } else if (first == 4 && (len == 13 || len == 16)) {
        printf("VISA\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}