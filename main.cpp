#include "banCo.h"

int main() {
	quanCo* BC[8][8] = {NULL};
	nhapBC(BC);
	xuatBC(BC);
	int n = 1, x, y, xNew, yNew;
	bool luot = 1;
	while (n) {
		cout << "moi ban chon quan\n";
		cin >> y >> x;
		while (!getQuanCo(x, y, BC)) {
			cout << "noi ban chon khong co quan co\n";
			cout << "moi ban chon quan\n";
			cin >> y >> x;
		}
		while (getMau(x, y, BC) != luot) {
			if (luot) {
				cout << "hien tai la luot cua quan trang\n";
				cout << "moi ban chon quan\n";
				cin >> y >> x;
			}
			else {
				cout << "hien tai la luot cua quan den\n";
				cout << "moi ban chon quan\n";
				cin >> y >> x;
			}
		}
		cout << "moi ban chon noi muon di chuyen\n";
		cin >> yNew >> xNew;
		diChuyen(x, y, xNew, yNew, BC);
		xuatBC(BC); 
		if (!getQuanCo(x,y,BC))
			luot = (luot) ? 0 : 1;
	}
}