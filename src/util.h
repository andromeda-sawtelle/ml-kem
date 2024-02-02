#include <stdint.h>

uint8_t get_byte(uint8_t B[], uint8_t index){
  return B[index];
}

void set_byte(uint8_t B[], uint8_t index, uint8_t value){
  B[index] = value;
}
