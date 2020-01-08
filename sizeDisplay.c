#include <stdio.h>

void printTheResult(int mb, int kb, int bytes) {
    if (mb > 0) {
        printf("%d MB and ", mb);
    }
    if (kb > 0) {
        printf("%d KB and ", kb);
    }
    printf("%d B", bytes);
    return;
}

int main() {
    char type;
    int total = 0;
    int bytes = 0;
    int kb = 0;
    int mb = 0;

    scanf("%c %d", &type, &total);
    if (type == 'i') {
        total = total * sizeof(int);
        if (total >= 1000000) {
            mb = total/1000000;
            total = total - (mb * 1000000);
        }
        if (total >= 1000) {
            kb = total/1000;
            total = total%1000;
        }
        bytes = total;
    }
    else if (type == 'd') {
        total = total * sizeof(double);
        if (total >= 1000000) {
            mb = total/1000000;
            total = total - (mb * 1000000);
        }
        if (total >= 1000) {
            kb = total/1000;
            total = total%1000;
        }
        bytes = total;
    }
    else if (type == 'c') {
        total = total * sizeof(char);
        if (total >= 1000000) {
            mb = total/1000000;
            total = total - (mb * 1000000);
        }
        if (total >= 1000) {
            kb = total/1000;
            total = total%1000;
        }
        bytes = total;
    }
    else if (type == 's') {
        total = total * sizeof(short);
        if (total >= 1000000) {
            mb = total/1000000;
            total = total - (mb * 1000000);
        }
        if (total >= 1000) {
            kb = total/1000;
            total = total%1000;
        }
        bytes = total;
    }
    printTheResult(mb, kb, bytes);
    return 0;
}