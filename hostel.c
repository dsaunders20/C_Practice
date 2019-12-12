#include <stdio.h>

int main() {
    int checkIn;
    int cap = 53;
    
    scanf("%d", &checkIn);
    if ((checkIn*5)+10 > cap) {
        printf("%d", cap);
    }
    else printf("%d", (checkIn*5)+10);
    return 0;
}