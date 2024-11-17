#include "banCo.h"

int main() {

	ofstream of;
	of.open("vanCo.txt",ios::out);

	int m, x, xNew, xv, yv, xd = -1;
	char y, yNew, yd = -1;
	bool luot = 1, chonLai;
	quanCo* BC[8][8] = { NULL };
	quanCo* A = NULL;

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
		if (m == 1 && nhapBC(BC))break;
		else if (m == 2){
			nhapBCMacDinh(BC);
			break;
		}

	} while (1);
	xuatBC(BC);

	(luot) ? cout << "\n                luot quan trang\n" : cout << "\n                luot quan den\n";

	while (1) {

		timVua(xv, yv, luot, BC);


		if (kiemTraChieuBi(xv,yv,BC) && kiemTraCoHoa(xv,yv,BC)){

			cout << "\nmoi ban chon quan muon di chuyen hoac nhap 00 de dau hang: ";
			cin >> y >> x;

			if (y == '0' && x == 0) {
				system("cls");
				if (luot) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n             ***********************";
					cout << "\n             *                     *\n";
					cout << "             *   Quan trang thua   *\n";
					cout << "             *                     *\n";
					cout << "             ***********************\n\n\n\n\n\n\n";
				}
				else {
					cout << "\n\n\n\n\n\n\n\n\n\n\n             ***********************";
					cout << "\n             *                     *\n";
					cout << "             *    Quan den thua    *\n";
					cout << "             *                     *\n";
					cout << "             ***********************\n\n\n\n\n\n\n";
				}
				break;
			}

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
				
				xuatBCDaDiChuyen(xd, yd, BC);

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

			timVua(xv, yv, luot, BC);

			diChuyen(x, y, xv, yv, luot, xNew, yNew, xd, yd, A, BC);

			if (!BC[x][y]->kiemTraQuanCo())
				luot = (luot) ? 0 : 1;

			(luot) ? cout << "\n                luot quan trang\n" : cout << "\n                luot quan den\n";
		}
		else if (!kiemTraChieuBi(xv,yv,BC)) {
			if (luot) {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n             ***********************";
				cout << "\n             *                     *\n";
				cout << "             *   Quan trang thua   *\n";
				cout << "             *                     *\n";
				cout << "             ***********************\n\n\n\n\n\n\n\n\n\n\n\n\n";
			}
			else {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n             ***********************";
				cout << "\n             *                     *\n";
				cout << "             *    Quan den thua    *\n";
				cout << "             *                     *\n";
				cout << "             ***********************\n\n\n\n\n\n\n\n\n\n\n\n\n";
			}
			break;
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n             ***********************";
			cout << "\n             *                     *\n";
			cout << "\n             *         Hoa         *\n";
			cout << "\n             *                     *\n";
			cout << "             ***********************\n\n\n\n\n\n\n\n\n\n\n\n\n";
			break;
		}
	}

	of.close();
	return 0;

}