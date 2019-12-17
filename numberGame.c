# include <stdio.h>

int main() {
    int secretNumber;
    scanf("%d", &secretNumber);
    int guess;
    int count = 0;
    
    while(guess != secretNumber) {
        scanf("%d", &guess);
        if (guess < secretNumber) {
            printf("it is more\n");
        }
        else if (guess > secretNumber) {
            printf("it is less\n");
        }
        count++;
    }
    printf("Number of tries needed:\n");
    printf("%d", count);
    return 0;
}