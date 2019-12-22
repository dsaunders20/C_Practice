#include <stdio.h>
int main(void) {
    char word[51];

    scanf("%s", word);
    int length = 0;
    while(word[length]!= '\0') {
        length++;
    }
    int half = length/2;
    for(int t=0;t<half;t++){
        if (word[t]=='t' || word[t]=='T') {
            printf("%d\n", 1);
            return 0;  
        }
    }
    for(int t=half;t<=length;t++){
        if (word[t]=='t' || word[t]=='T') {
            printf("%d\n", 2);
            return 0;  
        }
    }
    printf("%d\n", -1);
    return 0;
}