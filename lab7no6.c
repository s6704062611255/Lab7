#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 20
int random100to200();
void printArr(int a[][20], int c, int r);
void fill(int a[][20], int c, int r);


int main(){
    int arr[max][max] , m,n;
    scanf("%d %d",&m,&n);
    arr[m][n];
    fill(arr,m,n);
    printArr(arr, m, n);

} // main

int random100to200(){
    int ran = (rand()%101)+100;
    return ran;
}

void printArr(int a[][20], int c, int r)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void fill(int a[][20], int m, int n){
    int numok, ran_num, found;
    if (m > 2 && n <= 20)
    {
        srand(time(NULL));
        for(int i=0 ;i<m;i++){
            for(int j=0 ;j<n;j++){
                numok = 1;
                while (numok == 1){
                    ran_num = random100to200();
                    numok = 0;
                    found = 0;
                    for(int k =0 ;k<=i;k++){
                        for(int p = 0;p<n;p++){
                            if(a[k][p] == ran_num){
                                found = 1;
                                break;     // break loop ใน
                            } 
                        }
                        if(found == 1){
                            numok = 1;
                            break; // break loop นอก
                        }
                    }
                }//while
                
                a[i][j] = ran_num;

            }//  loop j
        } //  loop i
    }
    else
    {
        printf("Input M N again\n");
    }
}