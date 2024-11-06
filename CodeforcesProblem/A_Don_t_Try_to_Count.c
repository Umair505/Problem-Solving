#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char x[1001], s[101], temp[1001];
        scanf("%s %s", x, s);
        int ans = -1;
        strcpy(temp, x); // Make a copy of x for concatenation
        for (int i = 0; i < 10; i++) {
            if (strstr(temp, s) != NULL) {
                ans = i;
                break;
            }
            strcpy(x,temp);
            strcat(temp, x);
        }
        printf("%d\n", ans);
    }
    return 0;
}
