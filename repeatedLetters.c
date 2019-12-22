#include <stdio.h>

int main() {
    char word[51];
    scanf("%s", word);
    int length = 0;
    char temp;
    while(word[length]!= '\0') {
        length++;
    }
    // sort the word alphabetically
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length-1; j++) {
            if (word[j] > word[j+1]) {
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }
    // count repeated letters
    int count = 0;
    int l = 0;
    int r = 1;
    while (word[r]!='\0') {
        if (word[l] == word[r]) {
            count++;
            // lets get r to a different letter
            while(word[r]==word[r+1]) {
                r++;
                l=r-1;
            }
        }
        r++;
        l++;
    }
    printf("%d\n", count);
    return 0;
}