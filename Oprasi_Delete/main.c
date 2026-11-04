#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int posisi = 2;

    for (int i = posisi; i < n - 1; i++){
    nilai[i] = nilai[i + 1];
    }
    n--;
    printf("Array setelah delete:\n");
    for (int i = 0; i < n; i++){
    printf("%d", nilai[i]);
    }
    return 0;
}
