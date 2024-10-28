#pragma once
#include "banCo.h"

void nhapBC(quanCo* BC[][8]) {
    for (int i = 0; i < 8; i++) {
        BC[1][i] = new chot(1);
        BC[6][i] = new chot(0);
    }
    BC[0][0] = BC[0][7] = new xe(1);

    BC[7][0] = BC[7][7] = new xe(0);

    BC[0][1] = BC[0][6] = new ma(1);

    BC[7][1] = BC[7][6] = new ma(0);

    BC[0][2] = BC[0][5] = new tuong(1);

    BC[7][2] = BC[7][5] = new tuong(0);

    BC[0][3] = new hau(1);

    BC[7][3] = new hau(0);

    BC[0][4] = new vua(1);

    BC[7][4] = new vua(0);
}

void xuatBC(quanCo* BC[][8]) {
    cout << "     0    1    2    3    4    5    6    7\n";
    cout << "  +----+----+----+----+----+----+----+----+\n";
    for (int i = 0; i < 8; i++) {
        cout << i << " |";
        for (int j = 0; j < 8; j++) {
            if (!BC[i][j])
                cout << "    |";
            else
                if (BC[i][j]->kiemTraMau())
                    cout << " " << BC[i][j]->getName() << "t |";
                else
                    cout << " " << BC[i][j]->getName() << "d |";
        }
        cout << " " << i;
        cout << endl;
        cout << "  +----+----+----+----+----+----+----+----+\n";
    }
    cout << "     0    1    2    3    4    5    6    7\n";
}

bool kiemTraAn(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (BC[x][y]->kiemTraMau() == BC[xNew][yNew]->kiemTraMau()) return 0;
    return 1;
}

bool getMau(int x, int y, quanCo* BC[][8]) {
    return BC[x][y]->kiemTraMau();
}

bool getQuanCo(int x, int y, quanCo* BC[][8]) {
    return BC[x][y]->kiemTraQuanCo();
}

void nhapThanh(int x, int y, int xNew, int yNew, quanCo* BC[][8]){
    delete BC[xNew][yNew];
    BC[xNew][yNew] = BC[x][y];
    BC[x][y] = NULL;
    if (yNew > y) {
        BC[x][5] = BC[x][7];
        BC[x][7] = NULL;
    }
    else {
        BC[x][3] = BC[x][0];
        BC[x][0] = NULL;
    }
}

void phong(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    cout << "moi ban chon quan muon phong\n";
    cout << "1. hau\n";
    cout << "2. xe\n";
    cout << "3. ma\n";
    cout << "4. tuong\n";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new hau(getMau(x, y, BC));
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 2:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new xe(getMau(x, y, BC));
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 3:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new ma(getMau(x, y, BC));
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 4:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new tuong(getMau(x, y, BC));
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    default:
        break;
    }
}

void setQuanCo(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    delete BC[xNew][yNew];
    BC[xNew][yNew] = BC[x][y];
    BC[x][y] = NULL;
}

bool kiemTraNuocDi(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (BC[x][y]->getName() == 'C') {
            return kiemTraNuocDiChot(x, y, xNew, yNew, BC);
        }
        if (BC[x][y]->getName() == 'X') {
            return kiemTraNuocDiXe(x, y, xNew, yNew, BC);
        }
        if (BC[x][y]->getName() == 'M') {
            return kiemTraNuocDiMa(x, y, xNew, yNew, BC);
        }
        if (BC[x][y]->getName() == 'T') {
            return kiemTraNuocDiTuong(x, y, xNew, yNew, BC);
        }
        if (BC[x][y]->getName() == 'H') {
            return kiemTraNuocDiHau(x, y, xNew, yNew, BC);
        }
        if (BC[x][y]->getName() == 'V') {
            return kiemTraNuocDiVua(x, y, xNew, yNew, BC);
        }
        return 0;
    }
    else return 0;
}

void diChuyen(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (BC[x][y]->getName() == 'C' && kiemTraNuocDiChot(x, y, xNew, yNew, BC)) {
        diChuyenChot(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'X' && kiemTraNuocDiXe(x, y, xNew, yNew, BC)) {
        diChuyenXe(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'M' && kiemTraNuocDiMa(x, y, xNew, yNew, BC)) {
        diChuyenMa(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'T' && kiemTraNuocDiTuong(x, y, xNew, yNew, BC)) {
        diChuyenTuong(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'H' && kiemTraNuocDiHau(x, y, xNew, yNew, BC)) {
        diChuyenHau(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'V' && kiemTraNuocDiVua(x, y, xNew, yNew, BC)) {
        diChuyenVua(x, y, xNew, yNew, BC);
    }
    else 
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        int cnt = (getMau(x, y, BC)) ? 1 : -1;
        //mau trang
        if (getMau(x, y, BC)) {
            if (xNew - x == 1 && y == yNew) {
                if (getQuanCo(xNew, yNew, BC))
                    return 0;
            }
            else if (xNew - x == 1 && abs(yNew - y) == 1) {
                if (getQuanCo(xNew, yNew, BC) && getMau(x, y, BC) == getMau(xNew, yNew, BC)) 
                    return 0;
            }
            else if (xNew - x == 2 && y == yNew && BC[x][y]->getA() == 0) {
                if (getQuanCo(xNew, yNew, BC))
                    return 0;
            }
            else return 0;
        }
        //mau den
        else {
            if (xNew - x == -1 && y == yNew) {
                if (getQuanCo(xNew, yNew, BC))
                    return 0;
            }
            else if (xNew - x == -1 && abs(yNew - y) == 1) {
                if (getQuanCo(xNew, yNew, BC) && getMau(x, y, BC) == getMau(xNew, yNew, BC))
                    return 0;
            }
            else if (xNew - x == -2 && y == yNew && BC[x][y]->getA() == 0) {
                if (getQuanCo(xNew, yNew, BC))
                    return 0;
            }
            else return 0;
        }
        return 1;
    }
    else return 0;
}

void diChuyenChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (BC[x][y]->getA() == 5 && kiemTraNuocDiChot(x, y, xNew, yNew, BC))
        phong(x, y, xNew, yNew, BC);
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC))
        if (abs(xNew - x) == 2) {
            BC[x][y]->setA(2);
            setQuanCo(x, y, xNew, yNew, BC);
        }
        else{
            BC[x][y]->setA(1);
            setQuanCo(x, y, xNew, yNew, BC);
        }
    else
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiXe(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        int c = (xNew > x) ? 1 : (xNew < x) ? -1 : 0;
        int b = (yNew > y) ? 1 : (yNew < y) ? -1 : 0;
        int i = x + c, j = y + b;
        while (i != xNew || j != yNew) {
            if (getQuanCo(i, j, BC))
                return 0;
            i += c;
            j += b;
        }
        if (getQuanCo(xNew, yNew, BC))
            if (getMau(x, y, BC) != getMau(xNew, yNew, BC));
            else return 0;
        BC[x][y]->setA(1);
        return 1;
    }
    else return 0;
}

void diChuyenXe(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (kiemTraNuocDiXe(x, y, xNew, yNew, BC)){
        BC[x][y]->setA(1);
        setQuanCo(x, y, xNew, yNew, BC);
    }
    else
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if ((abs(xNew - x) == 1 && abs(yNew - y) == 2) || (abs(xNew - x) == 2 && abs(yNew - y) == 1)) {
            if (getQuanCo(xNew, yNew, BC))
                if (getMau(x, y, BC) != getMau(xNew, yNew, BC))
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (kiemTraNuocDiMa(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, BC);
    else
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiTuong(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (abs(x - xNew) == abs(y - yNew)) {
            int a = (xNew > x) ? 1 : -1;
            int b = (yNew > y) ? 1 : -1;
            int i = x + a, j = y + b;
            while (xNew != i) {
                if (getQuanCo(i, j, BC))
                    return 0;
                i += a;
                j += b;
            }
            if (getQuanCo(xNew, yNew, BC))
                if (getMau(x, y, BC) != getMau(xNew, yNew, BC))
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenTuong(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (kiemTraNuocDiTuong(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, BC);
    else
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (x == xNew || y == yNew || abs(x - xNew) == abs(y - yNew)) {
            int a = (xNew > x) ? 1 : (xNew < x) ? -1 : 0;
            int b = (yNew > y) ? 1 : (yNew < y) ? -1 : 0;
            int i = x + a, j = y + b;
            while (i != xNew || j != yNew) {
                if (getQuanCo(i, j, BC))
                    return 0;
                i += a;
                j += b;
            }
            if (getQuanCo(xNew, yNew, BC))
                if (getMau(x, y, BC) != getMau(xNew, yNew, BC))
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (kiemTraNuocDiHau(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, BC);
    else
        cout << "\nkhong the di chuyen\n";
}

bool kiemTraNuocDiVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (abs(xNew - x) <= 1 && abs(y - yNew) <= 1) {
            if (getQuanCo(xNew, yNew, BC))
                if (getMau(x, y, BC) == getMau(xNew, yNew, BC))
                    return 0;
        }
        else if ((BC[x][y]->getA() == 0) && abs(y - yNew) == 2 && xNew - x == 0)
            if (yNew < y && !getQuanCo(xNew, yNew, BC) && BC[x][0]->getA() == 0) {
                for (int i = y - 1; i > 0; i--)
                    if (getQuanCo(x, i, BC))
                        return 0;
            }
            else if (yNew > y && !getQuanCo(xNew, yNew, BC) && BC[x][7]->getA() == 0) {
                for (int i = y + 1; i < 7; i++)
                    if (getQuanCo(x, i, BC))
                        return 0;
            }
            else return 0;
        else return 0;
        return 1;
    }
    else return 0;
}

void diChuyenVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (abs(yNew - y) == 2 && kiemTraNuocDiVua(x, y, xNew, yNew, BC)){
        BC[x][y]->setA(1);
        nhapThanh(x, y, xNew, yNew, BC);
    }
    else if (kiemTraNuocDiVua(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, BC);
    else
        cout << "\nkhong the di chuyen\n";
}