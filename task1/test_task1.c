#include <assert.h>
#include <stdio.h>

int pies_kopecks(int a, int b, int n);

int main(void) {
    assert(pies_kopecks(10, 15, 2) == 30);
    assert(pies_kopecks(2, 50, 4) == 0);
    assert(pies_kopecks(0, 99, 3) == 97);
    assert(pies_kopecks(1, 1, 1) == 1);
    printf("Все тесты пройдены!\n");
    return 0;
}
