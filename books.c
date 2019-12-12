# include <stdio.h>

int main() {
    double money;
    double bookCost;

    scanf("%lf", &money);
    scanf("%lf", &bookCost);
    int books = (int)(money/bookCost);
    printf("%d\n",books);


    return 0;
}