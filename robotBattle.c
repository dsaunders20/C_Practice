#include <stdio.h>

int main() {
    // variables
    int numBots;
    int enginePower, resistance, weight, height;
    int power = 0;

    printf("How many robots do you need?");
    scanf("%d", &numBots);

    // get info from user
    printf("Please enter the engine power, resistance, weight, height of each robot");
    for (int i = 0; i < numBots; i++) {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        power = power + ((enginePower + resistance) * (weight - height));
    };
// display total 
    printf("%d", power);
    return 0;
}