cdef extern from "example.h":
    void greet()

def greet_from_c():
    greet()
