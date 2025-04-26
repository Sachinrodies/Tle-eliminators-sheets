#include <stdio.h>

void win() {
    printf("This is the win function\n");
}

int main() {
    printf("Address of win: %p\n", &win);
    return 0;
} 