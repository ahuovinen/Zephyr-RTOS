#include <zephyr/kernel.h>

int main(void) {
    while(true) {
        printf("Hello world!!");
        k_msleep(1000);
    }
}
