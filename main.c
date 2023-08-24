#include <stdio.h>

void transform(int *array, int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = *(array + i) + *(array + n - i - 1); //array[i] + array[n-i-1];
        *(array + i) = tmp;
        *(array + n - i - 1) = tmp;
    }
    if (n % 2 == 1) {
        *(array + n / 2) *= 2;
    }
}

int main() {
    int array[100];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    transform(array, n);
    for (i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }

    return 0;
}


// ogledalni elementi da se soberat i da se zamenat
// i --> n - i - 1 za ogledalni
/*
Да се напише програма која влезната низа
a0,a1,…an−1
a0,a1,…​an−1
ќе ја трансформира во излезната низа:
b0,b1,b2,…,bn−1
b0,b1,b2,…​,bn−1
на следниот начин:
b0=a0+an−1b1=a1+an−2...bn−1=an−1+a0
b0=a0+an−1b1=a1+an−2...bn−1=an−1+a0
Пример
Влезната низа

1 2 3 5 7
треба да се трансформира во

8 7 6 7 8
 */