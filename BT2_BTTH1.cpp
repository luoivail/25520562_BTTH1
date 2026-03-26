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
    //khai báo tử, mẫu, ucln và kiểm tra mẫu 2 phân số
    int tu1truoc, mau1truoc,tu2truoc, mau2truoc, ucln1, ucln2, tu1sau, mau1sau, tu2sau, mau2sau;
    cin>>tu1truoc>>mau1truoc>>tu2truoc>>mau2truoc;
    if (mau1truoc==0){
        cout<<"Nhap lai mau1:";
        cin>>mau1truoc;}
    if (mau2truoc==0){
        cout<<"Nhap lai mau2:";
        cin>>mau2truoc;}
    //Rút gọn 2 phân số
    ucln1=gcd(tu1truoc, mau1truoc);
    ucln2=gcd(tu2truoc, mau2truoc);
    tu1sau=tu1truoc/ucln1;
    mau1sau=mau1truoc/ucln1;
    tu2sau=tu2truoc/ucln2;
    mau2sau=mau2truoc/ucln2;
    //Quy đồng và so sánh 2 phân số, sau đó xuấtt kết quả
    tu1sau=tu1sau*mau2sau;
    tu2sau=tu2sau*mau1sau;
    mau1sau=mau1sau*mau2sau;
    mau2sau=mau1sau;
    if (tu1sau>tu2sau){
        cout<<tu1truoc<<"/"<<mau1truoc<<endl;
    }
    else{
        cout<<tu2truoc<<"/"<<mau2truoc<<endl;
    }
    return 0;
}
