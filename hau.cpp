#pragma once
#include "quanCo.h"

char hau::getName() {
    return b;
}

//bool kiemTraNuocDiHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
//    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
//        if (x == xNew || y == yNew || abs(x - xNew) == abs(y - yNew)){
//            int a = (xNew > x) ? 1 : (xNew < x) ? -1 : 0;
//            int b = (yNew > y) ? 1 : (yNew < y) ? -1 : 0;
//            int i = x + a, j = y + b;
//            while (i != xNew || j != yNew) {
//                if (getQuanCo(i, j, BC))
//                    return 0;
//                i += a;
//                j += b;
//            }
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
//void diChuyenHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
//    if (kiemTraNuocDiHau(x, y, xNew, yNew, BC))
//        setQuanCo(x, y, xNew, yNew, BC);
//    else
//    cout << "\nkhong the di chuyen\n";
//}