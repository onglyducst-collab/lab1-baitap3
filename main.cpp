#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutgon(int &tu, int &mau){
    int uocchung = UCLN(tu, mau);
    tu /= uocchung;
    mau /= uocchung;
    if(mau < 0){
        tu = -tu;
        mau = -mau;
    }
}

struct phanso{
    int tuso;
    int mauso;
};

int main(){
    phanso ps1, ps2;
    cin >> ps1.tuso >> ps1.mauso;
    cin >> ps2.tuso >> ps2.mauso;
    if(ps1.mauso == 0 || ps2.mauso == 0){
        cout << "Mau so khong hop le";
        return 0;
    }
    int tusotong = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    int mausotong = ps1.mauso * ps2.mauso;
    int tusohieu = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    int mausohieu = ps1.mauso * ps2.mauso;
    int tusotich = ps1.tuso * ps2.tuso;
    int mausotich = ps1.mauso * ps2.mauso;
    if(ps2.tuso == 0){
        cout << "Khong the chia cho phan so 0";
        return 0;
    }
    int tusothuong = ps1.tuso * ps2.mauso;
    int mausothuong = ps1.mauso * ps2.tuso;
    rutgon(tusotong, mausotong);
    cout << "Tong: " << tusotong << "/" << mausotong << endl;
    rutgon(tusohieu, mausohieu);
    cout << "Hieu: " << tusohieu << "/" << mausohieu << endl;
    rutgon(tusotich, mausotich);
    cout << "Tich: " << tusotich << "/" << mausotich << endl;
    rutgon(tusothuong, mausothuong);
    cout << "Thuong: " << tusothuong << "/" << mausothuong << endl;
    return 0;
}
