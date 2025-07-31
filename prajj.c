#include <stdio.h>
int main() {
    int num, i=2, isPrime = 1;

    printf("enter a number:");
    scanf("%d,",& num);

    if(num <= 1){
        isPrime = 0;
    }else{
        while (i <= num / 2){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
            i++;
        }   
    }
    if(isPrime)
       printf("%d is Prime number.\n",num);
    else
       printf("%d is not a Prime number.\n",num);

       return 0;
}