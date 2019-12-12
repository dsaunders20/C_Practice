#include <stdio.h>

int main() {
    int passengers;
    double gas;
    double cost;
    scanf("%d %lf", &passengers, &gas);

    if(passengers>0) {
        // add 1 to passengers to count for myself and add the 1 dollar fee
        cost = (1 + gas) / (1 + passengers);
        printf("%.2lf", cost);
    }
    else {
        printf("%.2lf", gas);
    }
    return 0;
}