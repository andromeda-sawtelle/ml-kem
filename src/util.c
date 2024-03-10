#include "util.h"

uint8_t get_byte(bb_array_t B, uint8_t index){
    return B.data[index];
}

void set_byte(bb_array_t B, uint8_t index, uint8_t value){
    B.data[index] = value;
}

bool get_bit(bb_array_t B, uint8_t index) {
    int i = index / 8;
    int offset = index % 8;
    return (B.data[i] << offset) & 1;
}

void set_bit(bb_array_t B, uint8_t index, bool value) {
    int i = index / 8;
    int offset = index % 8;
    B.data[i] = (B.data[i] & ~(1 << offset)) | (value << offset);
}
