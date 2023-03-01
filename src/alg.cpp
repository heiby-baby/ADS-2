// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    if (0 == n) {
        return 1;
    } else {
        double num = 1;
        for (int i = 1; i <= n; i++) {
            num *= value;
    }
        return num;
    }
}

uint64_t fact(uint16_t n) {
    uint64_t num = 1;
    for (uint16_t i = n; i > 0; i--) {
        num *= i;
    }
    return num;
}

double calcItem(double x, uint16_t n) {
    double num = pown(x, n) / fact(n);
    return num;
}

double expn(double x, uint16_t count) {
    double exponenta = 1;
    for (int i = 1; i <= count; i++) {
        exponenta += calcItem(x, i);
    }
    return exponenta;
}

double sinn(double x, uint16_t count) {
    double sinus = 0;
    for (int i = 1; i <= count; i++) {
        sinus += pown(-1, i-1) * calcItem(x, 2*i-1);
    }
    return sinus;
}

double cosn(double x, uint16_t count) {
    double cosine = 0;
    for (int i = 1; i <= count; i++) {
        cosine += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    }
    return cosine;
}
