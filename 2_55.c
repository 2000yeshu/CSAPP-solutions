#include <stdio.h>
#define byte_pointer unsigned char*

void show_bytes(byte_pointer num, size_t len) {
    for(unsigned int i=0; i<len; i++) {
        // it expects an int data type
        printf("%.2x ", (int)num[i]);
    }
    printf("\n");
}

int main()
{
    short x = 1234;
    long int y = 2147483647;
    double z = 123.0;
    show_short(x, sizeof(short));
    show_long(y, sizeof(long int));
    show_double(z, sizeof(double));
    return 0;
}
