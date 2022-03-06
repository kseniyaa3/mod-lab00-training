// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t num = x;
    int64_t res = 1;
    uint16_t pow = n;
    for (uint16_t i = 1; i <= pow; i++) {
        res *= num;
    }
    return res;
}
