#include <locale.h>
#include <stdio.h>
#include <math.h>
#define N 10
int main(void)
{
    setlocale(LC_ALL, "RUS");
    float A[N];
    float B[N];
    float temp;
    int q = 1;
    float c = 0;
    for (int i = 0; i < N; i++)
    {
        printf("A[%d] = ", i + 1);
        scanf_s("%float", &temp);
        A[i] = temp;
        B[i] = pow(temp, 2);
        q = pow(temp, 2);
        c += q;
    }
    printf("\n");
    printf("| индекс | исходное значение | новое значение\n");
    for (int i = 0; i < N; i++) {
        printf("|  [%d]   |  %0f         |  %0f   \n", i, A[i], B[i]);

    }
    printf("Среднее арифметическое элементов массива = %lf", c / N);

}