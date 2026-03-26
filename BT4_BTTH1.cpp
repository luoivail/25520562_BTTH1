#include <iostream>

using namespace std;
//Kiểm tra xem phải năm nhuận không với đầu vào là năm được nhập
bool namnhuan(int a) {
    return ((a%4==0&&a%100!=0)||(a%400==0));
}
//Kiểm tra số ngày trong tháng
int kiemtrathang(int a, int b) {
    switch(a) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return namnhuan(b) ? 29 : 28;
        default:
            return 0; //Tháng không hợp lệ
    }
}

int main()
{
    int ngay, thang, nam;
    cin>>ngay>>thang>>nam;
    int songay=kiemtrathang(thang,nam);
    if(ngay<1||ngay>songay||thang<1||thang>12){
        cout<<"Nhap lai ngay:"<<endl;
        cin>>ngay>>thang>>nam;
    }
    ngay++;
    if (ngay>songay){
        ngay=1;
        thang++;
        if(thang>12){
            nam++;
        }
    }
    cout<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    return 0;
}
