#pragma once
#include "quanCo.h"

char ma::getName() {
    return b;
}

//bool kiemTraNuocDiMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
//    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
//        if ((abs(xNew - x) == 1 && abs(yNew - y) == 2) || (abs(xNew - x) == 2 && abs(yNew - y) == 1)) {
//            if (getQuanCo(xNew, yNew, BC))
//                if (getMau(x, y, BC) != getMau(xNew, yNew, BC))
//                    return 1;
//                else return 0;
//            else return 1;
//        }
//        else return 0;
//    }
//    else return 0;
//}
//
//void diChuyenMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
//    if (kiemTraNuocDiMa(x, y, xNew, yNew, BC))
//        setQuanCo(x, y, xNew, yNew, BC);
//    else
//    cout << "\nkhong the di chuyen\n";
//}