
/*
 * Programmer: Sheikh Naveed Azeemi
 * Roll No: 23K-0003
* Date: 15-10-23
 * Description: prints out a man of size 'n' where n is odd.
 */

#include <stdio.h>

#define ch '*'

void class(int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = 1; j < n; j++) printf(" ");

        for (int k = 0; k < n; k++) printf("%c", ch);
        printf("\n");
    }

    printf(" ");
    // 3n - 4 gave the correct number of spaces. Figured it out by trial and error
    for (int i = 0; i < 3*n - 4; i++) {
        printf("%c", ch);
    }
    printf("\n");
} // end class(int)

void sea(int n) {
    for (int i = 0; i < 3; i++) {
        switch(i) {
            case 0:
                for (int k = 1; k < n; k++) printf(" ");
                printf("%c", ch);
                for (int k = 2; k < n; k++) printf(" ");
                printf("%c", ch);
                break;
            case 1:
                for (int k = -1; k < (3*n - 4)/2; k++) printf(" ");
                printf("|");
                break;
            case 2:
                for (int k = 0; k < (3*n - 4)/2; k++) printf(" ");
                printf("\\_/");
                break;
        }
        printf("\n");
    }
    printf("\n");
} // end sea(int)

void lakes(int n) {
    // again, trial and error
    for (int i = 0; i < (3*n - 4)/2; i++) printf(" ");
    printf("| |\n");
} // end lakes(int)

void junior(int n) {
    for (int i = 0; i < 3*n - 2; i++) printf("%c", ch);
    printf("\n");
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n/2; j++) printf("%c", ch);
        for (int j = 0; j < n/2; j++) printf(" ");
        for (int j = 0; j < n; j++) printf("%c", ch);
        for (int j = 0; j < n/2; j++) printf(" ");
        for (int j = 0; j < n/2; j++) printf("%c", ch);

        printf("\n");
    }
} // end juniors(int)

void legit(int n) {
    for (int i = 1; i < n; i++) printf(" ");
    for (int i = 0; i < n; i++) printf("%c", ch);
    printf("\n");
    for (int i = 0; i < (3*n - 4)/2; i++) {
        for (int j = 1; j < n; j++) printf(" ");
        for (int j = 0; j < n/2; j++) printf("%c", ch);
        printf(" ");
        for (int j = 0; j < n/2; j++) printf("%c", ch);

        printf("\n");
    }
} // end legit(int)

void mount(int n) {
    for (int i = 1; i < n/2; i++) printf(" ");
    for (int i = 0; i < n; i++) printf("%c", ch);
    printf(" ");
    for (int i = 0; i < n; i++) printf("%c", ch);
    printf("\n");
} // end mount(int)

int main() {
    int n;

    do {
        printf("Enter 'n': ");
        scanf("%d", &n);

    } while (!(n & 1));

    class(n);
    sea(n);
    lakes(n);
    juniors(n);
    legit(n);
    mount(n);

    return 0;
} // end main()