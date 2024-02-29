#include <stdlib.h>

int main() {
    fork();
    printf("this should be printed twice");

    return 0;
}
