#include <stdio.h>

int main()
{
 //sum of natural numbers usin for loop
     print("Enter Number 1: ");
    int n1;
    scanf("%d", &n1);
    int sum = 0;
    for(int i = 1; i <= n1; i++) {
        sum += i;
    }
    printf("Sum of natural numbers from 1 to %d is: %d", n1, sum);

    return 0;
}