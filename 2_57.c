#include <stdio.h>
// Unsigned so that overflow doesn't occour other wise show_bytes will print trialing ff... if first byte is set
#define byte_pointer unsigned char*

void show_bytes(byte_pointer num, size_t len) {
    for(int i=0; i<len; i++) {
        printf("0x%.2x ", num[i]);
    }
    printf("\n");
}

void show_short(short num, size_t len) {
    show_bytes((byte_pointer) &num, len);
}
void show_long(long int num, size_t len ) {
    show_bytes((byte_pointer) &num, len);
}
void show_double(double num, size_t len) {
        show_bytes((byte_pointer) &num, len);

}

int main() {
    short x = -12345;
    long int y = 12345;
    double z = 12345.0;
    show_short(x, sizeof(short));
    show_long(y, sizeof(long));
    show_double(z, sizeof(double));
    return 0; //
}