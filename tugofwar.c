#include <stdio.h>

int main() {
    int players;
    int weight1;
    int weight2;
    int totalWeight1;
    int totalWeight2;
    
    scanf("%d", &players);
    for (int i = 0; i<players; i++) {
        scanf("%d", &weight1);
        scanf("%d", &weight2);
        totalWeight1 += weight1;
        totalWeight2 += weight2;
    }
    if (totalWeight1 > totalWeight2) {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", totalWeight1);
        printf("Total weight for team 2: %d\n", totalWeight2);
    }
    else {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", totalWeight1);
        printf("Total weight for team 2: %d\n", totalWeight2);
    }
    return 0;
}