#pragma once
#include "banCo.h"

void nhapBC(quanCo *BC[][8]){
    int n, x, z ,v = 0, m;
    char ychar;
    bool mau;
    while (1){
        xuatBC(BC);
        cout << endl;
        cout << "             +---------------+\n";
        cout << "             |   Chon quan   |\n";
        cout << "             |               |\n";
        cout << "             |   1. Chot     |\n";
        cout << "             |   2. Xe       |\n";
        cout << "             |   3. Ma       |\n";
        cout << "             |   4. Tuong    |\n";
        cout << "             |   5. Hau      |\n";
        cout << "             |   6. Vua      |\n";
        cout << "             |   7. Xoa      |\n";
        cout << "             |   0. Thoat    |\n";
        cout << "             +---------------+\n\n";
        cout << "             Lua chon cua ban: ";
        cin >> n;
        switch (n) {
        case 1:

            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);
            cout << endl;
            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()){
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new chot(mau);
            break;

        case 2:

            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);

            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new xe(mau);
            break;

        case 3:

            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);

            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new ma(mau);
            break;

        case 4:

            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);

            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new tuong(mau);
            break;

        case 5:

            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);

            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new hau(mau);
            break;

        case 6:
            if (v == 2) {
                cout << "\n      Da dat so luong quan vua toi da\n";
                break;
            }
            cout << "\n             +--------------+\n";
            cout << "             |   Chon mau   |\n";
            cout << "             |              |\n";
            cout << "             |   1. Trang   |\n";
            cout << "             |   2. Den     |\n";
            cout << "             |   0. tro ve  |\n";
            cout << "             +--------------+\n\n";
            cout << "             Lua chon cua ban: ";
            cin >> z;
            if (z == 1) mau = 1;
            else if (z == 2) mau = 0;
            else break;
            cout << endl;
            xuatBC(BC);
            if (v == 1 && z == m) {
                cout << "\n        da co quan vua "; (mau) ? cout << "trang\n" : cout << "den\n";
                break;
            }
                m = z;
            cout << "             Chon o muon dat: ";
            cin >> ychar >> x;
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]->kiemTraQuanCo()) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
                BC[x - 1][ychar - 97] = new vua(mau);
                v++;
            break;

        case 7:
            cout << endl;
            xuatBC(BC);
            cout << "\n             Chon o muon xoa: ";
            cin >> ychar >> x;
            if (x >= 1 && x <= 8 && ychar >= 'a' && ychar <= 'h' && BC[x - 1][ychar - 97]->kiemTraQuanCo()){
                if (!BC[x - 1][ychar - 97]) {
                    cout << "\nkhong co quan co de xoa\n";
                    break;
                }
                delete BC[x - 1][ychar - 97];
                BC[x - 1][ychar - 97] = NULL;
            }
            break;
        case 0:
            if (v == 0) {
                cout << "\nKhong co ca vua trang va vua den\n";
                break;
            }
            else if (v == 1 && mau) {
                cout << "\nCon thieu vua den\n";
                break;
            }
            else if (v == 1 && !mau) {
                cout << "\nCon thieu vua trang\n";
                break;
            }
            return;
        default:
            break;
        }
    }
}

void nhapBCMacDinh(quanCo* BC[][8]) {
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
    bool a = 1;
    cout << "\n    a  b  c  d  e  f  g  h\n";
    for (int i = 0; i < 8; i++) {

        cout << " " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            if (!BC[i][j])
                cout << "   ";
            else
                if (BC[i][j]->kiemTraMau()){
                    setConsoleTextColor(12);
                    cout << " " << BC[i][j]->getName() << " ";
                    setConsoleTextColor(15);
                }
                else{
                    setConsoleTextColor(0);
                    cout << " " << BC[i][j]->getName() << " ";
                    setConsoleTextColor(15);
                }
        }
        setConsoleBackgroundColor(0);
        cout << " " << i + 1;
        cout << endl;
        a = (a) ? 0 : 1;
    }
    cout << "    a  b  c  d  e  f  g  h\n";
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
    cout << "             moi ban chon quan muon phong\n";
    cout << "             1. hau\n";
    cout << "             2. xe\n";
    cout << "             3. ma\n";
    cout << "             4. tuong\n";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new hau(BC[x][y]->kiemTraMau());
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 2:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new xe(BC[x][y]->kiemTraMau());
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 3:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new ma(BC[x][y]->kiemTraMau());
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    case 4:
        delete BC[xNew][yNew];
        BC[xNew][yNew] = new tuong(BC[x][y]->kiemTraMau());
        delete BC[x][y];
        BC[x][y] = NULL;
        break;
    default:
        break;
    }
}

void batChotQuaDuong(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    setQuanCo(x, y, xNew, yNew, BC);
    delete BC[x][yNew];
    BC[x][yNew] = NULL;
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
    if (BC[x][y]->getName() == 'C') {
        diChuyenChot(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'X') {
        diChuyenXe(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'M') {
        diChuyenMa(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'T') {
        diChuyenTuong(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'H') {
        diChuyenHau(x, y, xNew, yNew, BC);
    }
    else if (BC[x][y]->getName() == 'V') {
        diChuyenVua(x, y, xNew, yNew, BC);
    }
    else
        cout << "\n             khong the di chuyen\n";
}

bool kiemTraNuocDiChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        int cnt = (BC[x][y]->kiemTraMau()) ? 1 : -1;
        //mau trang
        if (BC[x][y]->kiemTraMau()) {
            if (xNew - x == 1 && y == yNew) {
                if (BC[xNew][yNew]->kiemTraQuanCo())
                    return 0;
            }
            else if (xNew - x == 1 && abs(yNew - y) == 1) {
                if (x == 4 && BC[x][yNew]->kiemTraQuanCo() && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1)
                return 1;
                else if (!BC[xNew][yNew]->kiemTraQuanCo() || BC[xNew][yNew]->kiemTraMau())
                    return 0;
            }
            else if (xNew - x == 2 && y == yNew && BC[x][y]->getA() == 0) {
                if (BC[xNew][yNew]->kiemTraQuanCo())
                    return 0;
            }
            else return 0;
        }
        //mau den
        else {
            if (xNew - x == -1 && y == yNew) {
                if (BC[xNew][yNew]->kiemTraQuanCo())
                    return 0;
            }
            else if (xNew - x == -1 && abs(yNew - y) == 1) {
                if (x == 3 && BC[x][yNew]->kiemTraQuanCo() && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1)
                    return 1;
                else if (!BC[xNew][yNew]->kiemTraQuanCo() || !BC[xNew][yNew]->kiemTraMau())
                return 0;
            }
            else if (xNew - x == -2 && y == yNew && BC[x][y]->getA() == 0) {
                if (BC[xNew][yNew]->kiemTraQuanCo())
                    return 0;
            }
            else return 0;
        }
        return 1;
    }
    else return 0;
}

void diChuyenChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (BC[x][y]->kiemTraMau() && kiemTraNuocDiChot(x, y, xNew, yNew, BC) && x == 6)
        phong(x, y, xNew, yNew, BC);
    else if (!BC[x][y]->kiemTraMau() && kiemTraNuocDiChot(x, y, xNew, yNew, BC) && x == 1)
        phong(x, y, xNew, yNew, BC);
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC) && BC[x][y]->kiemTraMau() && x == 4 && BC[x][yNew]->kiemTraQuanCo() && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1) {
        BC[x][y]->setA(1);
        batChotQuaDuong(x, y, xNew, yNew, BC);
    }
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC) && !BC[x][y]->kiemTraMau() && x == 3 && BC[x][yNew]->kiemTraQuanCo() && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1) {
        BC[x][y]->setA(1);
        batChotQuaDuong(x, y, xNew, yNew, BC);
    }
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC)){
        BC[x][y]->setA(1);
        setQuanCo(x, y, xNew, yNew, BC);
    }
    else
        cout << "\n             khong the di chuyen\n";
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
        if (BC[xNew][yNew]->kiemTraQuanCo())
            if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau());
            else return 0;
        BC[x][y]->setA(1);
        return 1;
    }
    else return 0;
}

void diChuyenXe(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (kiemTraNuocDiXe(x, y, xNew, yNew, BC)) {
        BC[x][y]->setA(1);
        setQuanCo(x, y, xNew, yNew, BC);
    }
    else
        cout << "\n             khong the di chuyen\n";
}

bool kiemTraNuocDiMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if ((abs(xNew - x) == 1 && abs(yNew - y) == 2) || (abs(xNew - x) == 2 && abs(yNew - y) == 1)) {
            if (BC[xNew][yNew]->kiemTraQuanCo())
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
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
        cout << "\n             khong the di chuyen\n";
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
            if (BC[xNew][yNew]->kiemTraQuanCo())
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
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
        cout << "\n             khong the di chuyen\n";
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
            if (BC[xNew][yNew]->kiemTraQuanCo())
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
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
        cout << "\n             khong the di chuyen\n";
}

bool kiemTraNuocDiVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (abs(xNew - x) <= 1 && abs(y - yNew) <= 1) {
            if (BC[xNew][yNew]->kiemTraQuanCo())
                if (BC[x][y]->kiemTraMau() == BC[xNew][yNew]->kiemTraMau())
                    return 0;
        }
        else if ((BC[x][y]->getA() == 0) && abs(y - yNew) == 2 && xNew - x == 0)
            if (yNew < y && !BC[xNew][yNew]->kiemTraQuanCo() && BC[x][0]->getA() == 0) {
                for (int i = y - 1; i > 0; i--)
                    if (getQuanCo(x, i, BC))
                        return 0;
            }
            else if (yNew > y && !BC[xNew][yNew]->kiemTraQuanCo() && BC[x][7]->getA() == 0) {
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
    quanCo* A = NULL;
    if (abs(yNew - y) == 2 && kiemTraNuocDiVua(x, y, xNew, yNew, BC) && kiemTraChieu(x, y, BC)) {
        A = BC[xNew][yNew];
        BC[xNew][yNew] = BC[x][y];
        BC[x][y] = NULL;
        if (kiemTraChieu(xNew, yNew, BC)) {
            BC[x][y] = BC[xNew][yNew];
            BC[xNew][yNew] = A;
            A = NULL;
            BC[x][y]->setA(1);
            nhapThanh(x, y, xNew, yNew, BC);
            return;
        }
        BC[x][y] = BC[xNew][yNew];
        BC[xNew][yNew] = A;
        A = NULL;
    }
    else if (kiemTraNuocDiVua(x, y, xNew, yNew, BC)){
        A = BC[xNew][yNew];
        BC[xNew][yNew] = BC[x][y];
        BC[x][y] = NULL;
        if (kiemTraChieu(xNew, yNew, BC)) {
            BC[x][y] = BC[xNew][yNew];
            BC[xNew][yNew] = A;
            A = NULL;
            setQuanCo(x, y, xNew, yNew, BC);
            return;
        }
        BC[x][y] = BC[xNew][yNew];
        BC[xNew][yNew] = A;
        A = NULL;
    }
    else
        cout << "\n             khong the di chuyen\n";
}

bool kiemTraChieu(int x, int y, quanCo* BC[][8]) {
     // xe hau
    for (int i = x - 1; i >= 0; i--) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1; i < 8; i++) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int j = y - 1; j >= 0; j--) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int j = y + 1; j < 8; j++) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }

    //tuong hau
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < 8; i--, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }

    //ma
    int n[8][2] = { {-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2} };
    for (int i = 0; i < 8; i++) {
        int nx = x + n[i][0];
        int ny = y + n[i][1];
        if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && BC[nx][ny] && BC[nx][ny]->getName() == 'M' &&
            BC[nx][ny]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
    }

    //chot
    int m = BC[x][y]->kiemTraMau() ? 1 : -1;
    if (x + m >= 0 && x + m < 8) {
        if (y - 1 >= 0 && BC[x + m][y - 1] &&
            BC[x + m][y - 1]->getName() == 'C' &&
            BC[x + m][y - 1]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
        if (y + 1 < 8 && BC[x + m][y + 1] &&
            BC[x + m][y + 1]->getName() == 'C' &&
            BC[x + m][y + 1]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
    }

    return 1;
}

bool kiemTraChieuXungQuanh(int x, int y, quanCo* BC[][8]) {
    int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1 };
    int dy[] = { 0, 0, -1, 1, -1, 1, -1, 1 };

    for (int i = 0; i < 8; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (newX >= 0 && newX <= 7 && newY >= 0 && newY <= 7) {
            quanCo* B = BC[newX][newY];
            BC[newX][newY] = BC[x][y];
            if (kiemTraChieu(newX, newY, BC) && !BC[newX][newY]->kiemTraQuanCo()){
                BC[newX][newY] = B;
                delete B;
                return 0;
            }
            else if (kiemTraChieu(newX, newY, BC) && BC[newX][newY]->kiemTraQuanCo())
                if (BC[newX][newY]->kiemTraMau() != BC[x][y]->kiemTraMau()){
                    BC[newX][newY] = B;
                    delete B;
                    return 0;
                }
            BC[newX][newY] = B;
            delete B;
            return 0;
        }
    }
    return 1;
}

void timVua(int &xv, int &yv, bool luot, quanCo* BC[][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (BC[i][j]) {
                if (BC[i][j]->getName() == 'V' && BC[i][j]->kiemTraMau() == luot) {
                    xv = i;
                    yv = j;
                    return;
                }
            }
        }
    }
}

void setConsoleBackgroundColor(int background) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    int newColor = (background << 4) | (consoleInfo.wAttributes & 0x0F);
    SetConsoleTextAttribute(hConsole, newColor);
}

void setConsoleTextColor(int text) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    int newColor = (consoleInfo.wAttributes & 0xF0) | text;
    SetConsoleTextAttribute(hConsole, newColor);
}

bool kiemTraChieuBi(int x, int y, quanCo* BC[][8]) {
    // xe hau
    for (int i = x - 1; i >= 0; i--) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1; i < 8; i++) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int j = y - 1; j >= 0; j--) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int j = y + 1; j < 8; j++) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }

    //tuong hau
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < 8; i--, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }
    for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau())
                return 0;
            break;
        }
    }

    //ma
    int n[8][2] = { {-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2} };
    for (int i = 0; i < 8; i++) {
        int nx = x + n[i][0];
        int ny = y + n[i][1];
        if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && BC[nx][ny] && BC[nx][ny]->getName() == 'M' &&
            BC[nx][ny]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
    }

    //chot
    int m = BC[x][y]->kiemTraMau() ? 1 : -1;
    if (x + m >= 0 && x + m < 8) {
        if (y - 1 >= 0 && BC[x + m][y - 1] &&
            BC[x + m][y - 1]->getName() == 'C' &&
            BC[x + m][y - 1]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
        if (y + 1 < 8 && BC[x + m][y + 1] &&
            BC[x + m][y + 1]->getName() == 'C' &&
            BC[x + m][y + 1]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
    }

    return 1;
}