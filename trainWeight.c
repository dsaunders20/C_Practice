#include <stdio.h>

int main() {
    int numCars;
    scanf("%d", &numCars);
    double array[numCars];
    double totalWeight = 0;
    for (int i=0; i< numCars; i++) {
        scanf("%lf", &array[i]);
        totalWeight += array[i];
    };

    double avg = totalWeight / numCars;
    for (int j = 0; j < numCars; j++) {
        printf("%lf\n", avg - array[j]);
    }
    return 0;
}