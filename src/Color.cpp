#include <cstdio>

enum class Color {
    BLUE,
    BLACK,
    GREEN,
    RED,
    YELLOW
};

void enums() {
    Color color = Color::RED;
    switch (color) {
        case Color::BLUE: {
            printf("The color is blue\n");
        }
            break;
        case Color::RED: {
            printf("The color is red\n");
        }
            break;
        default: {
            printf("The color is ???\n");
        }
    }
}