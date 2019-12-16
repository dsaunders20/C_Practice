#include <stdio.h>

int main() {
    int ingred;
    int array[10];
    int index;

    for (int i =0; i< 10; i++) {
        scanf("%d", &array[i]);
    };
    scanf("%d", &index);
    printf("%d", array[index]);
    return 0;

}