import sys
import random

import mlkem

def test_state_array():
    lengths = [25, 50, 100, 200, 400, 800, 1600]
    for lens in lengths:
        s = ""
        for bits in range(lens):
            s = s + chr(random.randint(0, 1) + 48)
        w = int(lens/25)

        arr=mlkem.string_to_array(s, w)
        new_s=mlkem.array_to_string(arr, w)

        if s != new_s:
            print("b = " + str(lens) + " failed with")
            print("    s = " + s)
            print("new_s = " + new_s)
        else:
            print("passed")

def main():
    print("Testing converstion to and from state and array")
    test_state_array()
    print("\n")

if __name__ == '__main__':
    main()
