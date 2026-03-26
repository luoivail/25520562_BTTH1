#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Nhập họ tên và điểm các môn
    string hoten;
    double toan, van, trungbinh;
    getline(cin,hoten);
    cin>>toan>>van;
    //Kiểm tra điều kiện
    if(toan<0||van<0){
        cout<<"Nhap lai diem:";
        cin>>toan>>van;
    }
    //Tính điểm trung bình
    trungbinh=(toan+van)/2;
    cout<<hoten<<endl;
    cout<<"Diem trung binh:"<<trungbinh<<endl;
    return 0;
}
