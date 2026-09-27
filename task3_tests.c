#include <stdio.h>
#include <assert.h>


int meters_to_km(int m);

int main(void) {
    assert(meters_to_km(4000) == 4);
    assert(meters_to_km(56500) == 56);
    assert(meters_to_km(1) == 0);
    assert(meters_to_km(1000) != 2);

    return 0;
}
