#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i] == t[i] ? '0' : '1');
    }
    printf("\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
