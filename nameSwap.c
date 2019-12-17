#include <stdio.h>

int main() {
    char first[101];
    char last[101];
    int numNames;
    scanf("%d", &numNames);

    for(int i = 0; i<numNames; i++) {
        scanf("%s %s", first, last);
        printf("%s %s\n", last, first);
    }

    return 0;
}