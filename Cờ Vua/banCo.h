#pragma once
#include "quanCo.h"


void nhapBC(quanCo* BC[][8]);
void xuatBC(quanCo* BC[][8]);
bool kiemTraAn(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool getMau(int x, int y, quanCo* BC[][8]);
bool getQuanCo(int x, int y, quanCo* BC[][8]);
void setQuanCo(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void nhapThanh(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void phong(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDi(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyen(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiXe(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiTuong(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraNuocDiVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenChot(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenXe(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenMa(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenTuong(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenHau(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
void diChuyenVua(int x, int y, int xNew, int yNew, quanCo* BC[][8]);
bool kiemTraChieu(int x, int y, quanCo* BC[][8]);
bool kiemTraChieuXungQuanh(int x, int y, quanCo* BC[][8]);