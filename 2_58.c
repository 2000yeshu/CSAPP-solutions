#include <stdio.h>
#define byte_pointer unsigned char *

int is_little_endian() {
    unsigned int x = 1;
    return *(byte_pointer) &x;

}

int main() {
    unsigned int x = 12;
    int result = is_little_endian();
    printf("%d \n", result);
    return 0;
}