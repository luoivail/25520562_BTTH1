#include <iostream>

using namespace std;
// Hàm tìm ucln giữa tử và mẫu
int gcd(int a, int b){
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    //khai báo tử, mẫu, ucln và kiểm tra mẫu
    int tu, mau, ucln;
    cin>>tu>>mau;
    if (mau==0){
        cout<<"Nhap lai mau:";
        cin>>mau;
}
    //Rút gọn phân số
    ucln=gcd(tu, mau);
    tu=tu/ucln;
    mau=mau/ucln;
    //Chuẩn hóa dấu
    if (mau<0){
        mau=-mau;
        tu=-tu;
    }
    // Xuất kết quả
    cout<<tu<<"/"<<mau<<endl;
    return 0;
}
