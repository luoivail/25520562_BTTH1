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
int main()
{
   //Nhập tử, mẫu, ucln và kiểm tra mẫu 2 phân số
    int tu1, mau1,tu2, mau2, ucln1, ucln2;
    cin>>tu1>>mau1>>tu2>>mau2;
    if (mau1==0){
        cout<<"Nhap lai mau1:";
        cin>>mau1;}
    if (mau2==0){
        cout<<"Nhap lai mau2:";
        cin>>mau2;}
    //Rút gọn 2 phân số
    ucln1=gcd(tu1, mau1);
    ucln2=gcd(tu2, mau2);
    tu1=tu1/ucln1;
    mau1=mau1/ucln1;
    tu2=tu2/ucln2;
    mau2=mau2/ucln2;
    //Tính tích, thương và rút gọn kết quả
    int tutich, mautich, tuthuong, mauthuong, uclntich, uclnthuong;
    tutich=tu1*mau1;
    mautich=mau1*mau2;
    uclntich=gcd(tutich, mautich);
    tutich=tutich/uclntich;
    mautich=mautich/uclntich;

    tuthuong=tu1*mau2;
    mauthuong=tu2*mau1;
    uclnthuong=gcd(tuthuong, mauthuong);
    tuthuong=tuthuong/uclnthuong;
    mauthuong=mauthuong/uclnthuong;
    //Quy đồng 2 phân số
    tu1=tu1*mau2;
    tu2=tu2*mau1;
    mau1=mau1*mau2;
    mau2=mau1;
    //Tính tổng, hiệu và rút gọn kết quả
    int tutong, mautong, tuhieu, mauhieu, uclntong, uclnhieu;
    tutong=tu1+tu2;
    mautong=mau1;
    uclntong=gcd(tutong, mautong);
    tutong=tutong/uclntong;
    mautong=mautong/uclntong;

    if(tu1>tu2){
        tuhieu=tu1-tu2;
    }
    else{
        tuhieu=tu2-tu1;
    }
    mauhieu=mau1;
    uclnhieu=gcd(tuhieu, mauhieu);
    tuhieu=tuhieu/uclnhieu;
    mauhieu=mauhieu/uclnhieu;

    //Xuất kết quả
    cout<<"Tong:"<<" "<<tutong<<"/"<<mautong<<endl;
    cout<<"Hieu:"<<" "<<tuhieu<<"/"<<mauhieu<<endl;
    cout<<"Tich:"<<" "<<tutich<<"/"<<mautich<<endl;
    cout<<"Thuong:"<<" "<<tuthuong<<"/"<<mauthuong<<endl;
    return 0;
}
