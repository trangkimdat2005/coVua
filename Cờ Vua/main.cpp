#include "banCo.h"

int main() {

	int m;
	quanCo* BC[8][8] = {NULL};
	do {
		cout <<"             +---------------------------+\n";
		cout <<"             |           Option          |\n";
		cout <<"             |                           |\n";
		cout <<"             |   1. Ban co tu thiet ke   |\n";
		cout <<"             |   2. Ban co mac dinh      |\n";
		cout <<"             +---------------------------+\n\n";
		cout <<"             Lua chon cua ban: ";
		cin >> m;
	} while (m != 1 && m != 2);
	if (m == 1)nhapBC(BC);
	else if (m == 2)nhapBCMacDinh(BC);
	xuatBC(BC);
	int n = 1, x, y, xNew, yNew, xv, yv;
	char ychar;
	bool luot = 1;
	while (n) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (BC[i][j]) {
					if (BC[i][j]->getName() == 'V' && BC[i][j]->kiemTraMau() == luot) {
						xv = i;
						yv = j;
						if (!kiemTraChieu(i, j, BC)) {
							if (kiemTraChieuXungQuanh(i, j, BC)) {
								cout <<"\n/n             Thua";
								n = 0;
								break;
							}
						}
					}
				}
			}
		}
		cout <<"\n             moi ban chon quan: ";
		cin >> ychar >> x;
		y = ychar - 97;
		while (!getQuanCo(x-1, y, BC)) {
			cout <<"\n             noi ban chon khong co quan co\n";
			cout <<"\n             moi ban chon quan: ";
			cin >> ychar >> x;
			y = ychar - 97;
		}
		while (x < 1 || x > 8 || ychar < 'a' || ychar > 'h') {
			cout <<"\n             noi ban chon da nam ngoai ban co\n";
			cout <<"\n             moi ban chon quan: ";
			cin >> ychar >> x;
			y = ychar - 97;
		}
		while (getMau(x-1, y, BC) != luot) {
			if (luot) {
				cout <<"\n             hien tai la luot cua quan trang\n";
				cout <<"\n             moi ban chon quan: ";
				cin >> ychar >> x;
				y = ychar - 97;
			}
			else {
				cout <<"\n             hien tai la luot cua quan den\n";
				cout <<"\n             moi ban chon quan: ";
				cin >> ychar >> x;
				y = ychar - 97;
			}
		}
		cout <<"\n             moi ban chon noi muon di chuyen: ";
		cin >> ychar >> xNew;
		yNew = ychar - 97;
		diChuyen(x-1, y, xNew-1, yNew, BC);
		while (!kiemTraChieu(xv, yv, BC)) {
			setQuanCo(xNew-1, yNew, x-1, y, BC);
			cout <<"\n             vua cua ban dang bi chieu\n";
			cout <<"\n             moi ban chon quan: ";
			cin >> ychar >> x;
			y = ychar - 97;
			while (!getQuanCo(x-1, y, BC)) {
				cout <<"\n             noi ban chon khong co quan co\n";
				cout <<"\n             moi ban chon quan: ";
				cin >> ychar >> x;
				y = ychar - 97;
			}
			while (getMau(x-1, y, BC) != luot) {
				if (luot) {
					cout <<"\n             hien tai la luot cua quan trang\n";
					cout <<"\n             moi ban chon quan: ";
					cin >> ychar >> x;
					y = ychar - 97;
				}
				else {
					cout <<"\n             hien tai la luot cua quan den\n";
					cout <<"\n             moi ban chon quan: ";
					cin >> ychar >> x;
					y = ychar - 97;
				}
			}
			cout <<"\n             moi ban chon noi muon di chuyen: ";
			cin >> ychar >> xNew;
			yNew = ychar - 97;
			diChuyen(x-1, y, xNew, yNew, BC);
		}
		xuatBC(BC); 
		if (!getQuanCo(x-1,y,BC))
			luot = (luot) ? 0 : 1;
	}
}