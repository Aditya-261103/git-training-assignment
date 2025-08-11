#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        int mid = (n - 1) / 2;
        int temp = a[mid];
        a[mid] = a[n - 1];
        a[n - 1] = temp;

        int st = mid + 1;
        int ed = n - 2;
        while(st <= ed) {
            temp = a[st];
            a[st] = a[ed];
            a[ed] = temp;
            st++;
            ed--;
        }

        for(int i = 0; i < n; i++) {
            if(i > 0) printf(" ");
            printf("%d", a[i]);
            }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
