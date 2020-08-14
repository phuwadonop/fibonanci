#include<stdio.h>
int main() {
    long long int fibonanci[100], sum = 0;
    fibonanci[0] = 1; fibonanci[1] = 2;
    int i = 2;
    do
    {
        fibonanci[i] = fibonanci[i - 1] + fibonanci[i - 2];
        if (fibonanci[i] > 4000000) break;
        i++;
    } while (fibonanci[i - 1] < 4000000);

    for (int x = 0; fibonanci[x] < 4000000;x++) {
        if (fibonanci[x] % 2 == 0) sum += fibonanci[x];
    }
    printf("%Ld", sum);
}