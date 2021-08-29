#include <stdio.h>
int test_one(int x) {
    int res = 1;
    while(x) {
        res ^= 1;
        x >>= 1;
    }
    return res;
}

int main() {
    printf("%d\n", test_one(11));
    return 0;
}