#include <assert.h>
#include <stdio.h>

int apples(int n, int k);

int main() {
    assert(apples(10,20) == 0);
    assert(apples(3,8) == 2);
    assert(apples(7,1) == 1);
    printf("Successfully\n");
    return 0;
}