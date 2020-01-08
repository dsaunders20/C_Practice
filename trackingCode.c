#include <stdio.h>

int main() {
    int numCodes = 0;
    scanf("%d", &numCodes);

    int size = 0;
    char type;
    int currentSum = 0;
    int totalSum = 0;
    for (int i = 0; i < numCodes; i++) {
        scanf("%d %c", &size, &type);
        if (type == 'i') {
            currentSum = size * 4;
        }
        else if (type == 'd') {
            currentSum = size * 8;
        }
        else if (type == 'c') {
            currentSum = size;
        }
        else {
            printf("Invalid tracking code type\n");
            return 0;
        }
        totalSum = totalSum + currentSum;
        currentSum = 0;
    }
    printf("%d bytes\n", totalSum);
    return 0;
}