#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int checkNumber(int n1, int n2);
int multiply(int n1, int n2);
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (checkNumber(a, b))
        printf("%d\n", multiply(a, b));
    else
        printf("Reject\n");

    return 0;
}

int checkNumber(int n1,int n2){
    if(n1 >20 && n1 <=60){
        if(n2 > 20 && n2<=60){
            return 1;
        }
    }
    return 0;   
}

int multiply(int n1, int n2){
    return n1 *n2;
}