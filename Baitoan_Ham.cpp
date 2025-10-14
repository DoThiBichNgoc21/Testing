#include <iostream>
using namespace std;
int tinhPhanTramGiamGia(int t, int x, bool c) {
    if (t < 3 || t > 120 || x < 2 || x > 8) {
        return -1;
    }
    if ((t < 18 || t > 59) && c) {
        return -1;
    }
    int giam = 0;
    if (t < 12) {
        giam = 30;
    } else if (t >= 12 && t <= 17) {
        giam = 20;
    } else if (t >= 18 && t <= 59) {
        if (c) {
            giam = 20;
        } else {
            giam = 0;
        }
    } else if (t >= 60) {
        giam = 30;
    }
    if (x == 7 || x == 8) {
        giam += 10;
    }
    if (giam > 100) {
        giam = 100;
    }
    return giam;
}
int main() {
    int t, x;
    bool c;
    cin >> t >> x >> c;
    int ketQua = tinhPhanTramGiamGia(t, x, c);
    if (ketQua == -1) {
        cout << "Dau vao khong hop le" << endl;
    } else {
        cout << ketQua << "%" << endl;
    }
    return 0;
}