#include <stdio.h>

int sumOfInts(num, total) {
    if (num < 10) {
        return total + num;
    }
    int currentNum = num % 10;
    total = total + currentNum;
    num = num / 10;
    return sumOfInts(num, total);
}

int main() {
    int num = 0;
    int total = 0;
    scanf("%d", &num);

    int sum = sumOfInts(num, total);
    printf("%d\n", sum);
    return 0;
}