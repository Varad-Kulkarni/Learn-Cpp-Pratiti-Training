#include <assert.h>
#include "MeterConverter.h"

// If difference between two real numbers is less than E
// it will be assumed that both real numbers are the same.
#define E 0.0100

int main() {
    MeterConverter meterConverter(10);

    // Following test case checks conversion functions
    assert((meterConverter.ToFoot() - 32.8084) < E);
    assert((meterConverter.ToInch() - 393.701) < E);
    assert(meterConverter.ToMeter() == 10);
    assert((meterConverter.ToYard() - 10.9361) < E);
}
