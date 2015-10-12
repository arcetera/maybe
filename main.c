#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    srand(((unsigned)time(0));
    while (1) {
        if(rand() % 2) {
            puts("y");
        } else {
            puts("n");
        }
    }
}
