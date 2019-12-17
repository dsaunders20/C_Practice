#include <stdio.h>

int main() {
    int pop;
    scanf("%d", &pop);
    int totalInfected = 1;
    int newInfected = 0;
    int day = 1;

    while(totalInfected < pop) {
        newInfected = totalInfected * 2;
        totalInfected += newInfected;
        day++;
    }
    printf("%d\n", day);
    return 0;
}