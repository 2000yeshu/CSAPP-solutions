#include <stdio.h>

int main() {
    int x = 0x09ABCDEF;
    int y = 0x76543210;
    x = x & ((1<<8)-1);
    y = (y>>8)<<8;
    unsigned int z = x|y;
    printf("%x ", z);
    return 0;
}