#include "ml_kem_test.h"

int util_test() {
    bb_array_t bytes;
    bytes.len = 1;

    set_byte(&bytes, 0, 2);
    if(get_byte(&bytes, 0) != 2)
        return 1;

    set_bit(&bytes, 0, true);
    if(get_byte(&bytes, 0) != 3)
        return 1;

    set_bit(&bytes, 3, true);
    if(get_byte(&bytes, 0) != 11)
        return 1;

    return get_bit(&bytes, 1);
}
