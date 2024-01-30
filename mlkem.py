import sys
import numpy
import random

def string_to_array(s, w):
    A = numpy.zeros((5, 5, w))
    for x in range(5):
        for y in range(5):
            for z in range(w):
                A[x][y][z] = s[w*(5*y +x) + z]
    return A

def lane(A, x, y):
    #print(A[x][y])
    return A[x][y]

def plane(A, y):
    plane = numpy.empty(0)
    for x in range(5):
        lan = lane(A, x, y)
        plane = numpy.concatenate((plane, lan))
    return plane

def array_to_string(A, w):
    s = ""
    for i in range(5):
        plan = plane(A, i)
        for ch in plan:
            s = s + chr(int(ch) + 48)
    return s

