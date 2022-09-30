#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std; 

int main(){
    int secim,sayi1,sayi2;
    cout<<"Hesap Makinesi "<<endl;
    sleep(1);
    system("cls");
    a:
    cout<<"Yapmak Istediginiz Islem "<<endl;
    cout<<"1-Toplama\n"<<endl;
    cout<<"2-Cikarma\n"<<endl;
    cout<<"3-Carpma\n"<<endl;
    cout<<"4-Bolme\n"<<endl;
    cin>>secim;

if(secim > 4 ){
    cout<<"Hatali İslem !"<<endl;
    return 0; 
}
    cout<<"Lütfen Birinci Sayiyi Giriniz";cin>>sayi1;cout<<"\n";
    cout<<"Lütfen İkinci Sayiyi Giriniz";cin>>sayi2;cout<<"\n";

if(secim == 1){

    cout<<"Sonuc = "<<sayi1+sayi2<<endl;
}else if(secim == 2){
    cout<<"Sonuc = "<<sayi1-sayi2<<endl;
}else if(secim == 3){
    cout<<"Sonuc = "<<sayi1*sayi2<<endl;
}else if(secim == 4){
    cout<<"Sonuc = "<<sayi1/sayi2<<endl;
}
cout<<"\n";
string secim1;
cout<<"Baska İslem Yapmak İster misiniz ? (y/n)"endl;
cin>>secim1;
if(secim1 == "y"){
    system("cls");
     cout<<"Sistem Hazırlanıyor... "<<endl;
    sleep(3);
    goto a;
}else if (secim1 == "Y"){
    system("cls");
    cout<<"Sistem Hazırlanıyor... "<<endl;
    sleep(3);
    goto a;
}



getch();
}