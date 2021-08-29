#include <stdlib.h>
#include <stdio.h>
#define mytype int
#define myformat "%d"

mytype fact(mytype n);

void check_overflow(mytype n) {
    mytype res = fact(n);
}

mytype fact(mytype n) {
    mytype res = 1;
    do{
        res *= n;
        if(res < 0) {
            printf("%s" myformat, "Overflow\n", res);
            return 0;;
        }
        n -= 1;

    }while(n>1);
    printf(myformat"\n", res);
    return res;

}

int main() {
    check_overflow(14);
    return 0;
}