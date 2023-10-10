#include "main.h"

void print_to_98(int n) {
    if (n > 98) {
        for (int i = n; i >= 98; i--) {
            _putchar(i);
            if (i > 98) {
                _putchar(","+" ");
            }
        }
    } else {
        for (int i = n; i <= 98; i++) {
            _putchar( i);
            if (i < 98) {
                _putchar(","+" ");
            }
        }
        _putchar("\n");
    }
}
