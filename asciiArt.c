#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    int count = 1;
    int oldCount;
    int j;

    for (int i = 1; i<6; i++) {

        j = 5 - i;
        while (j > 0) {
            printf("+");
            j--;
        }
        oldCount = count;
        while (count > 0) {
            printf("%c", c);
            count--;
        }
        j = 5 - i;
        while (j > 0) {
            printf("+");
            j--;
        }
        count = oldCount + 2;
        printf("\n");
    }
    return 0;
}