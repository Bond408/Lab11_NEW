#include <stdio.h>
#include <locale.h>
#define max 100
int main() {
    setlocale(LC_ALL, "RUS");
    int i, n;
    printf("������� ������ �������: ");
    scanf_s("%d", &n);
    int array[max];

    printf("������� �������� �������: ");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int first = -1, last = -1, sum = 0;

    for (i = 0; i < n; i++) {
        if (array[i] > 0) {
            if (first == -1) first = i;
            last = i;
        }
    }
    if (first != -1 && last != -1 && first < last) {
        for (i = first + 1; i < last; i++) {
            sum += array[i];
        }
    }
    printf("����� ��������� ����� ������ � ��������� ��������������: %d\n", sum);
}