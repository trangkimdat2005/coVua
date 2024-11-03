#pragma once
#include "quanCo.h"

bool quanCo::kiemTraMau() {
    return mau;
}

quanCo::quanCo() {
    mau = 0;
}

quanCo::quanCo(bool mau): mau(mau) {
    this->mau = mau;
}

bool quanCo::kiemTraQuanCo() {
    if (this == NULL)
        return 0;
    return 1;
}
void quanCo::setMau(int x) {
    mau = x;
}