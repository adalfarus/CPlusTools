#include "DataFunctions.h"

namespace cplustools {

    bool isEven(int num) {
        return (num & 1) == 0; // Check the least significant bit
    }

    bool isOdd(int num) {
        return (num & 1) == 1; // Check the least significant bit
    }

} // namespace mylibrary
