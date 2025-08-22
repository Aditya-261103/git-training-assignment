#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int q;
    scanf("%d", &q);

    int stack1[100000], stack2[100000];
    int top1 = -1, top2 = -1;

    for (int i = 0; i < q; i++) {
        int type, x;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%d", &x);
            stack1[++top1] = x;
        } else if (type == 2) {
            if (top2 == -1) {
                while (top1 != -1) {
                    stack2[++top2] = stack1[top1--];
                }
            }
            if (top2 != -1) {
                top2--;
                }
        } else if (type == 3) {
            if (top2 == -1) {
                while (top1 != -1) {
                    stack2[++top2] = stack1[top1--];
                }
            }
            if (top2 != -1) {
                printf("%d\n", stack2[top2]);
            }
        }
    }

    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
