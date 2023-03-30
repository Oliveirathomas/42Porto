#include <unistd.h>

int main() {
    char c = 'a';
    while (c <= 'z') {
        if ((c - 'a') % 2 == 0) {
            write(1, &c, 1);
            c -= 31; // Convert to uppercase
        } else {
            write(1, &c, 1);
        }
        c++;
    }
    write(1, "\n", 1);
    return 0;
}
