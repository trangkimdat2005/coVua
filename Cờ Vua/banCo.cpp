#pragma once
#include "banCo.h"

bool nhapBC(quanCo *BC[][8]){
    int n, x, z ,v = 0, m;
    char ychar;
    bool mau;
    while (1){
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
        cout << "             |   8. bat dau  |\n";
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]){
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new chot(mau);
            xuatBC(BC);
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new xe(mau);
            xuatBC(BC);
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new ma(mau);
            xuatBC(BC);
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new tuong(mau);
            xuatBC(BC);
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new hau(mau);
            xuatBC(BC);
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
            while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h' || BC[x - 1][ychar - 97]) {
                cout << "\n             o ban chon khong nam trong ban co hoac da co quan co\n";
                cout << "\n             Chon o muon dat: ";
                cin >> ychar >> x;
            }
            BC[x - 1][ychar - 97] = new vua(mau);
            v++;
            xuatBC(BC);
            break;

        case 7:
            cout << endl;
            xuatBC(BC);
            cout << "\n             Chon o muon xoa: ";
            cin >> ychar >> x;
            if (x >= 1 && x <= 8 && ychar >= 'a' && ychar <= 'h' && BC[x - 1][ychar - 97]){
                if (!BC[x - 1][ychar - 97]) {
                    cout << "\nkhong co quan co de xoa\n";
                    break;
                }
                delete BC[x - 1][ychar - 97];
                BC[x - 1][ychar - 97] = NULL;
            }
            xuatBC(BC);
            break;
        case 8:
            if (v == 0) {
                cout << "\nCon thieu ca vua trang va vua den\n";
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
            return 1;
        case 0:
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++) {
                    if(BC[i][j]){
                        delete BC[i][j];
                        BC[i][j] = NULL;
                    }
                }
            }
            return 0;
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
    ofstream of;
    of.open("vanCo.txt",ios::app);
    system("cls");
    bool a = 1;
    cout << "\n           a    b    c    d    e    f    g    h\n";
    for (int i = 0; i < 8; i++) {
        cout << "         ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        setConsoleBackgroundColor(0);
        cout << endl;

        cout << "       " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            if (!BC[i][j])
                cout << "     ";
            else
                if (BC[i][j]->kiemTraMau()) {
                    setConsoleTextColor(12);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
                else {
                    setConsoleTextColor(0);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
        }
        setConsoleBackgroundColor(0);
        cout << " " << i + 1;
        cout << endl;

        cout << "         ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        cout << endl;
        a = (a) ? 0 : 1;
        setConsoleBackgroundColor(0);
    }
    cout << "           a    b    c    d    e    f    g    h\n";
    of << "                  a    b    c    d    e    f    g    h\n";
    of << "               +----+----+----+----+----+----+----+----+\n";
    for (int i = 0; i < 8; i++) {
        of << "             " << i + 1 << " |";
        for (int j = 0; j < 8; j++) {
            if (!BC[i][j])
                of << "    |";
            else
                if (BC[i][j]->kiemTraMau())
                    of << " " << BC[i][j]->getName() << "t |";
                else
                    of << " " << BC[i][j]->getName() << "d |";
        }
        of << " " << i + 1;
        of << endl;
        of << "               +----+----+----+----+----+----+----+----+\n";
    }
    of << "                  a    b    c    d    e    f    g    h\n";
    of.close();
}

void xuatBCBinhThuong(quanCo* BC[][8]) {
    system("cls");
    bool a = 1;
    cout << "\n           a    b    c    d    e    f    g    h\n";
    for (int i = 0; i < 8; i++) {
        cout << "         ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        setConsoleBackgroundColor(0);
        cout << endl;

        cout << "       " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            if (!BC[i][j])
                cout << "     ";
            else
                if (BC[i][j]->kiemTraMau()) {
                    setConsoleTextColor(12);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
                else {
                    setConsoleTextColor(0);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
        }
        setConsoleBackgroundColor(0);
        cout << " " << i + 1;
        cout << endl;

        cout << "         ";
        for (int j = 0; j < 8; j++) {
            (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        cout << endl;
        a = (a) ? 0 : 1;
        setConsoleBackgroundColor(0);
    }
    cout << "           a    b    c    d    e    f    g    h\n";
}

void xuatBCDaChon(int x, char y, quanCo* BC[][8]) {
    system("cls");
    quanCo* bc[8][8] = { NULL };
    kiemTraNuocDi(x, y, BC, bc);
    bool a = 1;
    cout << "\n           a    b    c    d    e    f    g    h\n";
    for (int i = 0; i < 8; i++) {
        cout << "         ";
        for (int j = 0; j < 8; j++) {
            if (bc[i][j] && x == i && y == j) setConsoleBackgroundColor(3);
            else if (bc[i][j]) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        setConsoleBackgroundColor(0);
        cout << endl;

        cout << "       " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            if (bc[i][j] && x == i && y == j) setConsoleBackgroundColor(3);
            else if (bc[i][j]) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            if (!BC[i][j])
                cout << "     ";
            else
                if (BC[i][j]->kiemTraMau()) {
                    setConsoleTextColor(12);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
                else {
                    setConsoleTextColor(0);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
        }
        setConsoleBackgroundColor(0);
        cout << " " << i + 1;
        cout << endl;

        cout << "         ";
        for (int j = 0; j < 8; j++) {
            if (bc[i][j] && x == i && y == j) setConsoleBackgroundColor(3);
            else if (bc[i][j]) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        cout << endl;
        a = (a) ? 0 : 1;
        setConsoleBackgroundColor(0);
    }
    cout << "           a    b    c    d    e    f    g    h\n";
}

void xuatBCDaDiChuyen(int x, char y, quanCo* BC[][8]) {
    ofstream of;
    of.open("vanCo.txt", ios::app);
    system("cls");
    bool a = 1;
    cout << "\n           a    b    c    d    e    f    g    h\n";
    for (int i = 0; i < 8; i++) {
        cout << "         ";
        for (int j = 0; j < 8; j++) {
            if (x == i && y == j) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        setConsoleBackgroundColor(0);
        cout << endl;

        cout << "       " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            if (x == i && y == j) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            if (!BC[i][j])
                cout << "     ";
            else
                if (BC[i][j]->kiemTraMau()) {
                    setConsoleTextColor(12);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
                else {
                    setConsoleTextColor(0);
                    cout << "  " << BC[i][j]->getName() << "  ";
                    setConsoleTextColor(15);
                }
        }
        setConsoleBackgroundColor(0);
        cout << " " << i + 1;
        cout << endl;

        cout << "         ";
        for (int j = 0; j < 8; j++) {
            if (x == i && y == j) setConsoleBackgroundColor(11);
            else
                (a) ? setConsoleBackgroundColor(10) : setConsoleBackgroundColor(14);
            a = !a;
            cout << "     ";
        }
        cout << endl;
        a = (a) ? 0 : 1;
        setConsoleBackgroundColor(0);
    }
    cout << "           a    b    c    d    e    f    g    h\n";
    of << "                  a    b    c    d    e    f    g    h\n";
    of << "               +----+----+----+----+----+----+----+----+\n";
    for (int i = 0; i < 8; i++) {
        of << "             " << i + 1 << " |";
        for (int j = 0; j < 8; j++) {
            if (!BC[i][j])
                of << "    |";
            else
                if (BC[i][j]->kiemTraMau())
                    of << " " << BC[i][j]->getName() << "t |";
                else
                    of << " " << BC[i][j]->getName() << "d |";
        }
        of << " " << i + 1;
        of << endl;
        of << "               +----+----+----+----+----+----+----+----+\n";
    }
    of << "                  a    b    c    d    e    f    g    h\n";
    of.close();
}

bool kiemTraAn(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (BC[x][y]->kiemTraMau() == BC[xNew][yNew]->kiemTraMau()) return 0;
    return 1;
}

bool getMau(int x, int y, quanCo* BC[][8]) {
    return BC[x][y]->kiemTraMau();
}

bool getQuanCo(int x, int y, quanCo* BC[][8]) {
    return BC[x][y];
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

void batChotQuaDuong(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    setQuanCo(x, y, xNew, yNew, A, BC);
    delete BC[x][yNew];
    BC[x][yNew] = NULL;
}

void setQuanCo(int x, char y, int xNew, char yNew, quanCo*& A, quanCo* BC[][8]) {
    A = BC[xNew][yNew];
    BC[xNew][yNew] = BC[x][y];
    BC[x][y] = NULL;
}

void resetQuanCo(int x, char y, int xNew, char yNew, quanCo*& A, quanCo* BC[][8]) {
    BC[x][y] = BC[xNew][yNew];
    BC[xNew][yNew] = A;
    A = NULL;
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

void diChuyen(int x, char y, int& xv, int& yv, bool luot, int xNew, char yNew, int& xd, char& yd, quanCo*& A, quanCo* BC[][8]) {
    ofstream of;
    of.open("vanCo.txt", ios::app);

    timVua(xv, yv, luot, BC);
    if (kiemTraNuocDi(x, y, xNew, yNew, BC)) {
        setQuanCo(x, y, xNew, yNew, A, BC);

        timVua(xv, yv, luot, BC);

        while (!kiemTraChieu(xv, yv, BC)) {

            resetQuanCo(x, y, xNew, yNew, A, BC);

            timVua(xv, yv, luot, BC);

            do {
                xuatBC(BC);
                (kiemTraChieu(xv, yv, BC)) ? cout << "\nkhong the di chuyen\n" : cout << "\nQuan vua cua ban dang bi chieu\n";

                cout << "\nmoi ban chon lai quan muon di chuyen: ";
                cin >> y >> x;
                y -= 97;
                x--;

                while (x < 0 || x > 7 || y < 0 || y > 7) {
                    cout << "\nnoi ban chon da nam ngoai ban co\n";
                    cout << "\nmoi ban chon lai quan muon di chuyen: ";
                    cin >> y >> x;
                    y -= 97;
                    x--;
                }

                while (!BC[x][y]) {
                    cout << "\nnoi ban chon khong co quan co\n";
                    cout << "\nmoi ban chon lai quan muon di chuyen: ";
                    cin >> y >> x;
                    y -= 97;
                    x--;
                }

                while (BC[x][y]->kiemTraMau() != luot) {
                    (luot) ? cout << "\nhien tai la luot cua quan trang\n" : cout << "\nhien tai la luot cua quan den\n";
                    cout << "\nmoi ban chon lai quan muon di chuyen: ";
                    cin >> y >> x;
                    y -= 97;
                    x--;
                }

                xuatBCDaChon(x, y, BC);

                cout << "\nmoi ban chon noi muon di chuyen hoac nhap 00 de chon lai: ";
                cin >> yNew >> xNew;

                while (yNew == '0' && xNew == 0) {

                    xuatBCBinhThuong(BC);

                    cout << "\nmoi ban chon lai quan muon di chuyen: ";
                    cin >> y >> x;
                    y -= 97;
                    x--;

                    while (x < 0 || x > 7 || y < 0 || y > 7) {
                        cout << "\nnoi ban chon da nam ngoai ban co\n";
                        cout << "\nmoi ban chon lai quan muon di chuyen: ";
                        cin >> y >> x;
                        y -= 97;
                        x--;
                    }

                    while (!BC[x][y]) {
                        cout << "\nnoi ban chon khong co quan co\n";
                        cout << "\nmoi ban chon lai quan muon di chuyen: ";
                        cin >> y >> x;
                        y -= 97;
                        x--;
                    }

                    while (BC[x][y]->kiemTraMau() != luot) {
                        (luot) ? cout << "\nhien tai la luot cua quan trang\n" : cout << "\nhien tai la luot cua quan den\n";
                        cout << "\nmoi ban chon lai quan muon di chuyen: ";
                        cin >> y >> x;
                        y -= 97;
                        x--;
                    }

                    xuatBCDaChon(x, y, BC);

                    cout << "\nmoi ban chon noi muon di chuyen hoac nhap 00 de chon lai: ";
                    cin >> yNew >> xNew;

                }


                yNew -= 97;
                xNew--;

                while (xNew < 0 || xNew > 7 || yNew < 0 || yNew > 7) {
                    cout << "\nnoi ban chon da nam ngoai ban co\n";
                    cout << "\nmoi ban chon lai noi muon di chuyen: ";
                    cin >> yNew >> xNew;
                    yNew -= 97;
                    xNew--;
                }
            } while (!kiemTraNuocDi(x, y, xNew, yNew, BC));

            setQuanCo(x, y, xNew, yNew, A, BC);
        }
        resetQuanCo(x, y, xNew, yNew, A, BC);
        if (BC[x][y]->getName() == 'C') {
            diChuyenChot(x, y, xNew, yNew, A, BC);
        }
        else if (BC[x][y]->getName() == 'X') {
            diChuyenXe(x, y, xNew, yNew, A, BC);
        }
        else if (BC[x][y]->getName() == 'M') {
            diChuyenMa(x, y, xNew, yNew, A, BC);
        }
        else if (BC[x][y]->getName() == 'T') {
            diChuyenTuong(x, y, xNew, yNew, A, BC);
        }
        else if (BC[x][y]->getName() == 'H') {
            diChuyenHau(x, y, xNew, yNew, A, BC);
        }
        else if (BC[x][y]->getName() == 'V') {
            diChuyenVua(x, y, xNew, yNew, A, BC);
        }
        of << "\nToa do da chon: " << (char)(y + 97) << x + 1 << endl;
        of << "\nToa do da di: " << (char)(yNew + 97) << xNew + 1 << endl;
        xd = xNew;
        yd = yNew;
        xuatBCDaDiChuyen(xd, yd, BC);
    }
    else {
        xuatBCDaDiChuyen(xd, yd, BC);
        cout << "\n         khong the di chuyen\n";
        of << "\n         khong the di chuyen\n";
    }
    of.close();
}

bool kiemTraNuocDiChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        int cnt = (BC[x][y]->kiemTraMau()) ? 1 : -1;
        //mau trang
        if (BC[x][y]->kiemTraMau()) {
            if (xNew - x == 1 && y == yNew) {
                if (BC[xNew][yNew])
                    return 0;
            }
            else if (xNew - x == 1 && abs(yNew - y) == 1) {
                if (x == 4 && BC[x][yNew] && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1 && !BC[x][yNew]->kiemTraMau())
                return 1;
                else if (!BC[xNew][yNew] || BC[xNew][yNew]->kiemTraMau())
                    return 0;
            }
            else if (xNew - x == 2 && y == yNew && x == 1) {
                if (BC[xNew][yNew])
                    return 0;
            }
            else return 0;
        }
        //mau den
        else {
            if (xNew - x == -1 && y == yNew) {
                if (BC[xNew][yNew])
                    return 0;
            }
            else if (xNew - x == -1 && abs(yNew - y) == 1) {
                if (x == 3 && BC[x][yNew] && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1 && BC[x][yNew]->kiemTraMau())
                    return 1;
                else if (!BC[xNew][yNew] || !BC[xNew][yNew]->kiemTraMau())
                return 0;
            }
            else if (xNew - x == -2 && y == yNew && x == 6) {
                if (BC[xNew][yNew])
                    return 0;
            }
            else return 0;
        }
        return 1;
    }
    else return 0;
}

void diChuyenChot(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    if (BC[x][y]->kiemTraMau() && kiemTraNuocDiChot(x, y, xNew, yNew, BC) && x == 6)
        phong(x, y, xNew, yNew, BC);
    else if (!BC[x][y]->kiemTraMau() && kiemTraNuocDiChot(x, y, xNew, yNew, BC) && x == 1)
        phong(x, y, xNew, yNew, BC);
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC) && BC[x][y]->kiemTraMau() && x == 4 && BC[x][yNew] && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1) {
        BC[x][y]->setA(1);
        batChotQuaDuong(x, y, xNew, yNew, A, BC);
    }
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC) && !BC[x][y]->kiemTraMau() && x == 3 && BC[x][yNew] && BC[x][yNew]->getName() == 'C' && BC[x][yNew]->getA() == 1) {
        BC[x][y]->setA(1);
        batChotQuaDuong(x, y, xNew, yNew, A, BC);
    }
    else if (kiemTraNuocDiChot(x, y, xNew, yNew, BC)){
        BC[x][y]->setA(1);
        setQuanCo(x, y, xNew, yNew, A, BC);
    }
    else {
        cout << "\n             khong the di chuyen\n";
    }
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
        if (BC[xNew][yNew])
            if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau());
            else return 0;
        BC[x][y]->setA(1);
        return 1;
    }
    else return 0;
}

void diChuyenXe(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    if (kiemTraNuocDiXe(x, y, xNew, yNew, BC)) {
        BC[x][y]->setA(1);
        setQuanCo(x, y, xNew, yNew, A, BC);
    }
    else {
        cout << "\n             khong the di chuyen\n";
    }
}

bool kiemTraNuocDiMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if ((abs(xNew - x) == 1 && abs(yNew - y) == 2) || (abs(xNew - x) == 2 && abs(yNew - y) == 1)) {
            if (BC[xNew][yNew])
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenMa(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    if (kiemTraNuocDiMa(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, A, BC);
    else {
        cout << "\n             khong the di chuyen\n";
    }
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
            if (BC[xNew][yNew])
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenTuong(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    if (kiemTraNuocDiTuong(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, A, BC);
    else {
        cout << "\n             khong the di chuyen\n";
    }
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
            if (BC[xNew][yNew])
                if (BC[x][y]->kiemTraMau() != BC[xNew][yNew]->kiemTraMau())
                    return 1;
                else return 0;
            else return 1;
        }
        else return 0;
    }
    else return 0;
}

void diChuyenHau(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
    if (kiemTraNuocDiHau(x, y, xNew, yNew, BC))
        setQuanCo(x, y, xNew, yNew, A, BC);
    else {
        cout << "\n             khong the di chuyen\n";
    }
}

bool kiemTraNuocDiVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]) {
    if (xNew >= 0 && xNew <= 7 && yNew >= 0 && yNew <= 7) {
        if (abs(xNew - x) <= 1 && abs(y - yNew) <= 1) {
            if (BC[xNew][yNew])
                if (BC[x][y]->kiemTraMau() == BC[xNew][yNew]->kiemTraMau())
                    return 0;
        }
        else if ((BC[x][y]->getA() == 0) && abs(y - yNew) == 2 && xNew - x == 0)
            if (yNew < y && !BC[xNew][yNew] && BC[x][0] && BC[x][0]->getA() == 0) {
                for (int i = y - 1; i > 0; i--)
                    if (getQuanCo(x, i, BC))
                        return 0;
            }
            else if (yNew > y && !BC[xNew][yNew] && BC[x][7] && BC[x][7]->getA() == 0) {
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

void diChuyenVua(int x, int y, int xNew, int yNew, quanCo*& A, quanCo* BC[][8]) {
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
            setQuanCo(x, y, xNew, yNew, A, BC);
            return;
        }
        BC[x][y] = BC[xNew][yNew];
        BC[xNew][yNew] = A;
        A = NULL;
    }
    else {
        cout << "\n             khong the di chuyen\n";
    }
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

    quanCo* A = NULL;

    for (int i = 0; i < 8; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (newX >= 0 && newX <= 7 && newY >= 0 && newY <= 7) {
            if (BC[newX][newY] && BC[newX][newY]->kiemTraMau() == BC[x][y]->kiemTraMau()){}
            else {
                A = BC[newX][newY];
                BC[newX][newY] = BC[x][y];
                BC[x][y] = NULL;
                if (kiemTraChieu(newX, newY, BC)) {
                    BC[x][y] = BC[newX][newY];
                    BC[newX][newY] = A;
                    A = NULL;
                    return 1;
                }
                BC[x][y] = BC[newX][newY];
                BC[newX][newY] = A;
                A = NULL;
            }
        }
    }
    return 0;
}

bool kiemTraChieu2(int x, int y, int& xC, int& yC, char& bC, quanCo* BC[][8]) {
    // xe hau
    for (int i = x - 1; i >= 0; i--) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = y;
                bC = BC[i][y]->getName();
                return 0;
            }
            break;
        }
    }
    for (int i = x + 1; i < 8; i++) {
        if (BC[i][y]) {
            if ((BC[i][y]->getName() == 'X' || BC[i][y]->getName() == 'H') &&
                BC[i][y]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = y;
                bC = BC[i][y]->getName();
                return 0;
            }
            break;
        }
    }
    for (int j = y - 1; j >= 0; j--) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = x;
                yC = j;
                bC = BC[x][j]->getName();
                return 0;
            }
            break;
        }
    }
    for (int j = y + 1; j < 8; j++) {
        if (BC[x][j]) {
            if ((BC[x][j]->getName() == 'X' || BC[x][j]->getName() == 'H') &&
                BC[x][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = x;
                yC = j;
                bC = BC[x][j]->getName();
                return 0;
            }
            break;
        }
    }

    //tuong hau
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = j;
                bC = BC[i][j]->getName();
                return 0;
            }
            break;
        }
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < 8; i--, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = j;
                bC = BC[i][j]->getName();
                return 0;
            }
            break;
        }
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = j;
                bC = BC[i][j]->getName();
                return 0;
            }
            break;
        }
    }
    for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {
        if (BC[i][j]) {
            if ((BC[i][j]->getName() == 'T' || BC[i][j]->getName() == 'H') &&
                BC[i][j]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                xC = i;
                yC = j;
                bC = BC[i][j]->getName();
                return 0;
            }
            break;
        }
    }

    //ma
    int n[8][2] = { {-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2} };
    for (int i = 0; i < 8; i++) {
        int nx = x + n[i][0];
        int ny = y + n[i][1];
        if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && BC[nx][ny] && BC[nx][ny]->getName() == 'M' &&
            BC[nx][ny]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            xC = nx;
            yC = ny;
            bC = BC[nx][ny]->getName();
            return 0;
        }
    }

    //chot
    int m = BC[x][y]->kiemTraMau() ? 1 : -1;
    if (x + m >= 0 && x + m < 8) {
        if (y - 1 >= 0 && BC[x + m][y - 1] &&
            BC[x + m][y - 1]->getName() == 'C' &&
            BC[x + m][y - 1]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            xC = x + m;
            yC = y - 1;
            bC = BC[x + m][y - 1]->getName();
            return 0;
        }
        if (y + 1 < 8 && BC[x + m][y + 1] &&
            BC[x + m][y + 1]->getName() == 'C' &&
            BC[x + m][y + 1]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            xC = x + m;
            yC = y + 1;
            bC = BC[x + m][y + 1]->getName();
            return 0;
        }
    }

    return 1;
}

bool kiemTraChieu3(int x, int y, quanCo* BC[][8]) {
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
        if (BC[x + m][y] &&
            BC[x + m][y]->getName() == 'C' &&
            BC[x + m][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
        if (BC[x + m][y] &&
            BC[x + m][y]->getName() == 'C' &&
            BC[x + m][y]->kiemTraMau() != BC[x][y]->kiemTraMau())
            return 0;
    }

    return 1;
}

bool kiemTraChieuBi(int x, int y, quanCo* BC[][8]) {
    int xC, yC;
    char bC;
    bool mau = BC[x][y]->kiemTraMau();
    quanCo* A = NULL;
    if (kiemTraChieu2(x, y, xC, yC, bC, BC))return 1;

    if (BC[xC][yC]->getName() == 'C' || BC[xC][yC]->getName() == 'M') {
        A = BC[xC][yC];
        BC[xC][yC] = new vua(!mau);
        if (!kiemTraChieu(xC, yC, BC)) {
            delete BC[xC][yC];
            BC[xC][yC] = A;
            A = NULL;
            return 1;
        }

        delete BC[xC][yC];
        BC[xC][yC] = A;
        A = NULL;
        if (kiemTraChieuXungQuanh(x, y, BC))return 1;
        return 0;
    }
    else {
        int a = (xC > x) ? 1 : (xC < x) ? -1 : 0;
        int b = (yC > y) ? 1 : (yC < y) ? -1 : 0;
        int i = x + a, j = y + b;
        while (i != xC || j != yC) {
            A = BC[i][j];
            BC[i][j] = new vua(!mau);
            if (!kiemTraChieu3(i, j, BC)) {
                delete BC[i][j];
                BC[i][j] = A;
                A = NULL;
                return 1;
            }
            delete BC[i][j];
            BC[i][j] = A;
            A = NULL;
            i += a;
            j += b;
        }
        A = BC[xC][yC];
        BC[xC][yC] = new vua(!mau);
        if (!kiemTraChieu(xC, yC, BC)) {
            delete BC[xC][yC];
            BC[xC][yC] = A;
            A = NULL;
            return 1;
        }
        delete BC[xC][yC];
        BC[xC][yC] = A;
        A = NULL;
        if (kiemTraChieuXungQuanh(x, y, BC))return 1;
        return 0;
    }
}

bool kiemTraQuanCo(bool luot, quanCo* BC[][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (BC[i][j])
                if (BC[i][j]->kiemTraMau() == luot && BC[i][j]->getName() != 'V')return 1;
        }
    }
    return 0;
}

bool kiemTraCoHoa(int x, int y, quanCo* BC[][8]) {
    bool luot = BC[x][y]->kiemTraMau();
    if (kiemTraQuanCo(luot, BC))return 1;
    if (kiemTraChieu(x, y, BC) && !kiemTraChieuXungQuanh(x, y, BC))return 0;
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

void nuocDiChot(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    int xNew = x;
    char yNew = y;
    bc[x][y] = BC[x][y];

    //trang
    if (BC[x][y]->kiemTraMau()) {
        if (x == 1) {
            if(!BC[x + 1][y])
                bc[x + 1][y] = new chot(1);
            if(!BC[x + 2][y])
                bc[x + 2][y] = new chot(1);
        }
        else {
            if (!BC[x + 1][y])
                bc[x + 1][y] = new chot(1);
        }
        if (BC[x + 1][y + 1] && !BC[x + 1][y + 1]->kiemTraMau()) {
            bc[x + 1][y + 1] = new chot(1);
        }
        if (BC[x + 1][y - 1] && !BC[x + 1][y - 1]->kiemTraMau()) {
            bc[x + 1][y - 1] = new chot(1);
        }
        if (x == 4 && BC[x][y + 1] && BC[x][y + 1]->getName() == 'C' && !BC[x][y + 1]->kiemTraMau() && BC[x][y + 1]->getA() == 1) {
            bc[x + 1][y + 1] = new chot(1);
        }
        if (x == 4 && BC[x][y - 1] && BC[x][y - 1]->getName() == 'C' && !BC[x][y - 1]->kiemTraMau() && BC[x][y - 1]->getA() == 1) {
            bc[x + 1][y - 1] = new chot(1);
        }
    }
    //den
    else{
        if (x == 6) {
            if (!BC[x - 1][y])
                 bc[x - 1][y] = new chot(0);
            if (!BC[x - 2][y])
                 bc[x - 2][y] = new chot(0);
        }
        else {
            if (!BC[x - 1][y])
                bc[x - 1][y] = new chot(0);
        }
        if (BC[x - 1][y + 1] && BC[x - 1][y + 1]->kiemTraMau()) {
            bc[x - 1][y + 1] = new chot(0);
        }
        if (BC[x - 1][y - 1] && BC[x - 1][y - 1]->kiemTraMau()) {
            bc[x - 1][y - 1] = new chot(0);
        }
        if (x == 3 && BC[x][y + 1] && BC[x][y + 1]->getName() == 'C' && BC[x][y + 1]->kiemTraMau() && BC[x][y + 1]->getA() == 1) {
            bc[x - 1][y + 1] = new chot(0);
        }
        if (x == 3 && BC[x][y - 1] && BC[x][y - 1]->getName() == 'C' && BC[x][y - 1]->kiemTraMau() && BC[x][y - 1]->getA() == 1) {
            bc[x - 1][y - 1] = new chot(0);
        }
    }
}

void nuocDiXe(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {

    bc[x][y] = BC[x][y];
    // trai
    char yNew = y - 1;

        while (yNew >= 0) {

            if (BC[x][yNew] && BC[x][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                bc[x][yNew] = new xe(1);
                break;
            }
            else if (BC[x][yNew])break;
            bc[x][yNew] = new xe(1);
            yNew--;
        }

    //phai
    yNew = y + 1;

        while (yNew <= 7) {

            if (BC[x][yNew] && BC[x][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                bc[x][yNew] = new xe(1);
                break;
            }
            else if (BC[x][yNew])break;
            bc[x][yNew] = new xe(1);
            yNew++;
        }

    //tren
    int xNew = x - 1;

        while (xNew >= 0) {
            if (BC[xNew][y] && BC[xNew][y]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                bc[xNew][y] = new xe(1);
                break;
            }
            else if (BC[xNew][y])break;
            bc[xNew][y] = new xe(1);
            xNew--;
        }

    //duoi
    xNew = x + 1;

        while (xNew <= 7) {
            if (BC[xNew][y] && BC[xNew][y]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
                bc[xNew][y] = new xe(1);
                break;
            }
            else if (BC[xNew][y])break;
            bc[xNew][y] = new xe(1);
            xNew++;
        }
}

void nuocDiMa(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    bc[x][y] = BC[x][y];

    int n[8][2] = { {-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2} };
    for (int i = 0; i < 8; i++) {
        int nx = x + n[i][0];
        int ny = y + n[i][1];
        if (nx >= 0 && nx <= 7 && ny >= 0 && ny <= 7)
            if (BC[nx][ny] && BC[nx][ny]->kiemTraMau() == BC[x][y]->kiemTraMau()) {}
            else {
                bc[nx][ny] = new ma(0);
            }
    }
}

void nuocDiTuong(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    bc[x][y] = BC[x][y];
    // tren trai
    int xNew = x - 1;
    char yNew = y - 1;

    while (xNew >=0 && yNew >= 0) {

        if (BC[xNew][yNew] && BC[xNew][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            bc[xNew][yNew] = new xe(1);
            break;
        }
        else if (BC[xNew][yNew])break;
        bc[xNew][yNew] = new xe(1);
        xNew--;
        yNew--;
    }

    //tren phai
    xNew = x - 1;
    yNew = y + 1;

    while (xNew >= 0 && yNew <= 7) {

        if (BC[xNew][yNew] && BC[xNew][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            bc[xNew][yNew] = new xe(1);
            break;
        }
        else if (BC[xNew][yNew])break;
        bc[xNew][yNew] = new xe(1);
        xNew--;
        yNew++;
    }

    //duoi phai
    xNew = x + 1;
    yNew = y + 1;

    while (xNew <= 7 && yNew <= 7) {

        if (BC[xNew][yNew] && BC[xNew][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            bc[xNew][yNew] = new xe(1);
            break;
        }
        else if (BC[xNew][yNew])break;
        bc[xNew][yNew] = new xe(1);
        xNew++;
        yNew++;
    }

    //duoi trai
    xNew = x + 1;
    yNew = y - 1;

    while (xNew <= 7 && yNew >= 0) {

        if (BC[xNew][yNew] && BC[xNew][yNew]->kiemTraMau() != BC[x][y]->kiemTraMau()) {
            bc[xNew][yNew] = new xe(1);
            break;
        }
        else if (BC[xNew][yNew])break;
        bc[xNew][yNew] = new xe(1);
        xNew++;
        yNew--;
    }
}

void nuocDiHau(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    nuocDiXe(x, y, BC, bc);
    nuocDiTuong(x, y, BC, bc);
}

void nuocDiVua(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    bc[x][y] = BC[x][y];

    int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1 };
    int dy[] = { 0, 0, -1, 1, -1, 1, -1, 1 };

    for (int i = 0; i < 8; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (newX >= 0 && newX <= 7 && newY >= 0 && newY <= 7) {
            if (BC[newX][newY] && BC[newX][newY]->kiemTraMau() == BC[x][y]->kiemTraMau()){}
            else {
                bc[newX][newY] = new ma(0);
            }
        }
    }
    if (BC[x][y]->getA() == 0) {
        bool b = 1;
        if (BC[x][0] && BC[x][0]->getA() == 0) {
            for (int i = y - 1; i > 0; i--)
                if (BC[x][i]) b = 0;
            if (b) bc[x][y - 2] = new xe(0);
        }

        b = 1;
        if (BC[x][7] && BC[x][7]->getA() == 0) {
            for (int i = y + 1; i < 7; i++)
                if (BC[x][i]) b = 0;
            if (b) bc[x][y + 2] = new xe(0);
        }
    }
}

void kiemTraNuocDi(int x, char y, quanCo* BC[][8], quanCo* bc[][8]) {
    if (BC[x][y]->getName() == 'C')
        nuocDiChot(x, y, BC, bc);
    else if (BC[x][y]->getName() == 'X')
        nuocDiXe(x, y, BC, bc);
    else if (BC[x][y]->getName() == 'M')
        nuocDiMa(x, y, BC, bc);
    else if (BC[x][y]->getName() == 'T')
        nuocDiTuong(x, y, BC, bc);
    else if (BC[x][y]->getName() == 'H')
        nuocDiHau(x, y, BC, bc);
    else if (BC[x][y]->getName() == 'V')
        nuocDiVua(x, y, BC, bc);
}