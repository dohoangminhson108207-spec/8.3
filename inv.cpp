#include<bits/stdc++.h>
using namespace std;
class phieu;
class nhan_vien{
    string nv_kiem_ke,chuc_vu,phong,ma_phong,truong_phong;
    friend class phieu;
};
class tai_San{
   string ten_tai_sam,tinh_trang;
   int soluong;
   friend class phieu;
};
class phieu{
    string ten_phieu,ma_phieu,ngay_kiem_ke;
    nhan_vien nv;
    tai_San *a;
    int n;
    public:
        void nhap(){
            cout<<"Nhap ten phieu: ";fflush(stdin);getline(cin,ten_phieu);
            cout<<"Nhap ma phieu: ";fflush(stdin);getline(cin,ma_phieu);
            cout <<"Nhap ngay kiem ke: ";fflush(stdin);getline(cin,ngay_kiem_ke);
            cout<<"Nhap thong tin nhan vien kiem ke: "<<endl;
            cout <<"Nhap ma nhan vien: ";fflush(stdin);getline(cin,nv.nv_kiem_ke);
            cout <<"Nhap chuc vu: ";fflush(stdin);getline(cin,nv.chuc_vu);
            cout <<"Nhap phong: ";fflush(stdin);getline(cin,nv.phong);
            cout <<"Nhap ma phong: ";fflush(stdin);getline(cin,nv.ma_phong);
            cout <<"Nhap truong phong: ";fflush(stdin);getline(cin,nv.truong_phong);
            cout <<"Nhap so luong tai san: ";cin>>n;
            cin.ignore();
            a = new tai_San[n];
            for(int i=0;i<n;i++){
                cout<<"Nhap thong tin tai san thu "<<i+1<<": "<<endl;
                cout <<"Nhap ten tai san: ";fflush(stdin);getline(cin,a[i].ten_tai_sam);
                cout <<"Nhap tinh trang: ";fflush(stdin);getline(cin,a[i].tinh_trang);
                cout <<"Nhap so luong: ";cin>>a[i].soluong;
                cin.ignore();
            }
        }
        void xuat(){
            int tsl=0;
            cout <<left<<setw(40)<<ten_phieu<<endl;
            cout <<left<<setw(5)<<"Ma phieu:"<<ma_phieu
            <<left<<setw(20)<<"Ngay kiem ke:"<<ngay_kiem_ke<<endl;
            cout <<left<<setw(5)<<"Nhan vien kiem ke:"<<nv.nv_kiem_ke
            <<left<<setw(20)<<"Chuc vu:"<<nv.chuc_vu<<endl;
            cout <<left <<setw(5)<<"Kiem ke tai phong:"<<nv.phong
            <<left<<setw(20)<<"Ma phong:"<<nv.ma_phong<<endl;
            cout <<left<<setw(5)<<"Truong phong:"<<nv.truong_phong<<endl;
            cout <<left<<setw(10)<<"Ten tai san"<<left<<setw(20)<<"So luong"<<left<<setw(15)<<"Tinh trang"<<endl;
            for(int i=0;i<n;i++){
              cout <<left<<setw(10)<<a[i].ten_tai_sam<<left<<setw(20)<<a[i].soluong<<left<<setw(15)<<a[i].soluong<<endl;
              tsl+=a[i].soluong;
            }
            cout<<left<<setw(5)<<"So tai san da kiem ke:"<<n
            <<left<<setw(20)<<"Tong so luong:"<<tsl<<endl;
        };
};
int main(){
    phieu x;
    x.nhap();
    x.xuat();
}