#include<stdio.h>
int main() {
    long int fibonanci[100], sum = 0,max;
    fibonanci[0] = 1; fibonanci[1] = 2;
    int i = 2;
    scanf("ld", &max);
    do
    {
        fibonanci[i] = fibonanci[i - 1] + fibonanci[i - 2];
        if (fibonanci[i] > max) break;
        i++;
    } while (fibonanci[i - 1] < max);
    for (int x = 0; fibonanci[x] < max;x++) {
        if (fibonanci[x] % 2 == 0) sum += fibonanci[x];
    }
    printf("%Ld", sum);
}