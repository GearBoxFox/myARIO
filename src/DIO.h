#include <MyRio.h>
#include "MyARio.h"

namespace myARIO {
    enum { // Pin modes
        IN,
        OUT
    };

    enum {
        LED0,
        LED1,
        LED2,
        LED3
    };

    enum {
        A0,
        A1,
        A2,
        A3,
        A4,
        A5,
        A6,
        A7,
        A8,
        A9,
        A10,
        A11,
        A12,
        A13,
        A14,
        A15,
        A_LAST
    };

    enum {
        B0 = A_LAST,
        B1,
        B2,
        B3,
        B4,
        B5,
        B6,
        B7,
        B8,
        B9,
        B10,
        B11,
        B12,
        B13,
        B14,
        B15,
        B_LAST
    };

    enum {
        C0 = B_LAST,
        C1,
        C2,
        C3,
        C4,
        C5,
        C6,
        C7
    };

    void digitalWrite(bool value, int pin);

    bool digitalRead(int pin);  
}
