#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char start[11], end[11];
    scanf("%s %s", start, end);

    int d1, m1, y1, d2, m2, y2;
    sscanf(start, "%d-%d-%d", &d1, &m1, &y1);
    sscanf(end, "%d-%d-%d", &d2, &m2, &y2);

    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int count = 0;

    while (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 <= d2)) {
        int leap = (y1 % 400 == 0 || (y1 % 100 != 0 && y1 % 4 == 0));
        int num = d1 * 1000000 + m1 * 10000 + y1;
        if (num % 4 == 0 || num % 7 == 0) count++;

        d1++;
        if ((m1 == 2 && leap && d1 > 29) || (m1 != 2 && d1 > daysInMonth[m1])) {
            d1 = 1;
            m1++;
        }
        if (m1 > 12) {
            m1 = 1;
            y1++;
        }
    }

    printf("%d\n", count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
