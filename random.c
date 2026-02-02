#include <stdio.h>         //ข้อ3
#include <stdlib.h>
#include <time.h>
int random1to100();

int main()
{
    int N, i, j, rnum, numok;
    int A[100];
    scanf("%d", &N);
    if (N > 100)
        N = 100;
    srand(time(NULL)); // Initialization, should only be called once.
                       // To seed the pseudo-random number generator
                       // so that it produces a different sequence of
                       // "random" numbers each time the program runs
    for (i = 0; i < N; i++)
    {
        numok = 1;
        while (numok == 1)
        {
            rnum = random1to100();
            numok = 0;
            // ตรวจสอบว่าค่าที่สุ่มได้ซ้ำกับค่าที่เก็บในอาร์เรย์ไปแล้วหรือไม่ สุ่มใหม่หากยังซ้ำอยู่
            for (j=0;j<i;j++){
                if (A[j] == rnum){
                    numok = 1;
                    break;
                } 
            }                  
        }
        A[i] = rnum; // ถ้าผ่านมาจุดนี้ได้แสดงว่าค่านั้นไม่ซ้ำกับค่าอื่นในอาร์เรย์
    }
    // display all Finish members
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    return 0;
}

int random1to100()
{
    int random_num = (rand() % 100) + 1;
    //printf("%d", random_num);
    return random_num;

}
