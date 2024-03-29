#ifndef UTIL_H
#define UTIL_H

#include <stdint.h>
#include <stdbool.h>

typedef struct byte_bit_array {
    uint8_t data[384];
    uint8_t len_byte;
    uint8_t len_bit;
} bb_array_t;

uint8_t get_byte(bb_array_t *B, uint8_t index);

void set_byte(bb_array_t *B, uint8_t index, uint8_t value);

bool get_bit(bb_array_t *B, uint8_t index);

void set_bit(bb_array_t *B, uint8_t index, bool value);

bb_array_t byte_encode(uint16_t *input, uint16_t input_length);

uint16_t* byte_decode(bb_array_t *input);

#endif
