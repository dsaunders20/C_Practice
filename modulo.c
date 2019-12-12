# include <stdio.h>

int main() {
    int matches;
    int matchboxes;

    scanf("%d", &matches);
    scanf("%d", &matchboxes);

    printf("%d\n", matches/matchboxes);
    printf("%d", matches%matchboxes);

    return 0;
}