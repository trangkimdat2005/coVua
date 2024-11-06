#include "banCo.h"

int main() {

	int m, x, xNew, xv, yv;
	char y, yNew;
	bool luot = 1;
	quanCo* BC[8][8] = { NULL };
	
	do {
		cout << "             +---------------------------+\n";
		cout << "             |           Option          |\n";
		cout << "             |                           |\n";
		cout << "             |   1. Ban co tu thiet ke   |\n";
		cout << "             |   2. Ban co mac dinh      |\n";
		cout << "             +---------------------------+\n\n";
		cout << "             Lua chon cua ban: ";
		cin >> m;
		cout << endl;
	} while (m != 1 && m != 2);
	
	if (m == 1)nhapBC(BC);
	else if (m == 2)nhapBCMacDinh(BC);
	xuatBC(BC);

	while (1){
	
		cout << "\nmoi ban chon quan muon di chuyen: ";
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

		cout << "\nmoi ban chon noi muon di chuyen: ";
		cin >> yNew >> xNew;
		yNew -= 97;
		xNew--;

		while (xNew < 0 || xNew > 7 || yNew < 0 || yNew > 7) {
			cout << "\nnoi ban chon da nam ngoai ban co\n";
			cout << "\nmoi ban chon lai noi muon di chuyen: ";
			cin >> yNew >> xNew;
			yNew -= 97;
			xNew--;
		}

		timVua(xv, yv, luot, BC);

		if (!kiemTraChieu(xv, yv, BC)){

			quanCo* A = NULL;

			while (!kiemTraChieu(xv, yv, BC)) {

				if (kiemTraNuocDi(x, y, xNew, yNew, BC)) {
					A = BC[xNew][yNew];
					BC[xNew][yNew] = BC[x][y];
					BC[x][y] = NULL;
					
					if (!kiemTraChieu(xv, yv, BC)) {
						BC[x][y] = BC[xNew][yNew];
						BC[xNew][yNew] = A;
						A = NULL;

						cout << "\nquan vua cua ban dang bi chieu\n";

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

						cout << "\nmoi ban chon noi muon di chuyen: ";
						cin >> yNew >> xNew;
						yNew -= 97;
						xNew--;

						while (xNew < 0 || xNew > 7 || yNew < 0 || yNew > 7) {
							cout << "\nnoi ban chon da nam ngoai ban co\n";
							cout << "\nmoi ban chon lai noi muon di chuyen: ";
							cin >> yNew >> xNew;
							yNew -= 97;
							xNew--;
						}

					}
				}
				else {
					cout << "\nquan vua cua ban dang bi chieu\n";

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

					cout << "\nmoi ban chon noi muon di chuyen: ";
					cin >> yNew >> xNew;
					yNew -= 97;
					xNew--;

					while (xNew < 0 || xNew > 7 || yNew < 0 || yNew > 7) {
						cout << "\nnoi ban chon da nam ngoai ban co\n";
						cout << "\nmoi ban chon lai noi muon di chuyen: ";
						cin >> yNew >> xNew;
						yNew -= 97;
						xNew--;
					}

				}
			}
			BC[x][y] = BC[xNew][yNew];
			BC[xNew][yNew] = A;
			A = NULL;
		}

		diChuyen(x, y, xNew, yNew, BC);

		xuatBC(BC);

		if (!BC[x][y]->kiemTraQuanCo())
			luot = (luot) ? 0 : 1;
	
	}

	return 0;

}