#include <stdio.h>

double metersToFeet(double meters) {
    return meters * 3.2808;
}
double gramsToPounds(double grams) {
    return grams * 0.002205;
}
double celciusToFarenheit(double celcius) {
    return 32 + (1.8 * celcius);
}

int main() {
    char unit;
    double value;
    double converted = 0;
    int numConversions = 0;
    scanf("%d)", &numConversions);
    for (int i = 0; i<numConversions; i++) {
    scanf("%lf %c", &value, &unit);
        switch (unit) {
            case 'g':
                converted = gramsToPounds(value);
                printf("%.6lf lbs\n", converted);
                break;

            case 'm':
                converted = metersToFeet(value);
                printf("%.6lf ft\n", converted);
                break;

            case 'c':
                converted = celciusToFarenheit(value);
                printf("%.6lf f\n", converted);
                break;
            
            default:
                break;
        }
    }
    return 0;
}