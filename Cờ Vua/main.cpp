#include "banCo.h"

int main() {
	quanCo* BC[8][8] = {NULL};
	nhapBC(BC);
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
								cout << "/nThua";
								n = 0;
								break;
							}
						}
					}
				}
			}
		}
		cout << "moi ban chon quan\n";
		cin >> ychar >> x;
		y = ychar - 97;
		while (!getQuanCo(x-1, y, BC)) {
			cout << "noi ban chon khong co quan co\n";
			cout << "moi ban chon quan\n";
			cin >> ychar >> x;
			y = ychar - 97;
		}
		while (getMau(x-1, y, BC) != luot) {
			if (luot) {
				cout << "hien tai la luot cua quan trang\n";
				cout << "moi ban chon quan\n";
				cin >> ychar >> x;
				y = ychar - 97;
			}
			else {
				cout << "hien tai la luot cua quan den\n";
				cout << "moi ban chon quan\n";
				cin >> ychar >> x;
				y = ychar - 97;
			}
		}
		cout << "moi ban chon noi muon di chuyen\n";
		cin >> ychar >> xNew;
		yNew = ychar - 97;
		diChuyen(x-1, y, xNew-1, yNew, BC);
		while (!kiemTraChieu(xv, yv, BC)) {
			setQuanCo(xNew-1, yNew, x-1, y, BC);
			cout << "vua cua ban dang bi chieu\n";
			cout << "moi ban chon quan\n";
			cin >> ychar >> x;
			y = ychar - 97;
			while (!getQuanCo(x-1, y, BC)) {
				cout << "noi ban chon khong co quan co\n";
				cout << "moi ban chon quan\n";
				cin >> ychar >> x;
				y = ychar - 97;
			}
			while (getMau(x-1, y, BC) != luot) {
				if (luot) {
					cout << "hien tai la luot cua quan trang\n";
					cout << "moi ban chon quan\n";
					cin >> ychar >> x;
					y = ychar - 97;
				}
				else {
					cout << "hien tai la luot cua quan den\n";
					cout << "moi ban chon quan\n";
					cin >> ychar >> x;
					y = ychar - 97;
				}
			}
			cout << "moi ban chon noi muon di chuyen\n";
			cin >> ychar >> xNew;
			yNew = ychar - 97;
			diChuyen(x-1, y, xNew, yNew, BC);
		}
		xuatBC(BC); 
		if (!getQuanCo(x-1,y,BC))
			luot = (luot) ? 0 : 1;
	}
}