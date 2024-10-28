#pragma once
#include "header.h"

class quanCo {
private:
    bool mau;
public:
    friend class banCo;
    bool kiemTraMau();
    void setMau(int x);
    bool kiemTraQuanCo();
    quanCo();
    quanCo(bool mau);
    ~quanCo() {};
    virtual char getName() = 0;
    virtual void setA(int x) = 0;
    virtual int getA() = 0;
};

class chot :public quanCo {
private:
    const char b = 'C';
    int a = 0;
public:
    char getName();
    chot(bool mau) : quanCo(mau){}
    void setA(int x);
    int getA();
};

class xe :public quanCo {
private:
    const char b = 'X';
    int a = 0;
public:
    char getName();
    void setA(int x);
    int getA();
    xe(bool mau) : quanCo(mau) {}
};

class ma :public quanCo {
private:
    const char b = 'M';
public:
    char getName();
    ma(bool mau) : quanCo(mau) {}
    void setA(int x){}
    int getA() { return 1; }
};

class tuong :public quanCo {
private:
    const char b = 'T';
public:
    char getName();
    tuong(bool mau) : quanCo(mau) {}
    void setA(int x){}
    int getA() { return 1; }
};

class hau :public quanCo {
private:
    const char b = 'H';
public:
    char getName();
    hau(bool mau) : quanCo(mau) {}
    void setA(int x){}
    int getA() { return 1; }
};

class vua :public quanCo {
private:
    const char b = 'V';
    int a = 0;
public:
    char getName();
    vua(bool mau) : quanCo(mau) {}
    void setA(int x);
    int getA();
};
