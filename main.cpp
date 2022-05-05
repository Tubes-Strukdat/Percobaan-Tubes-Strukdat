#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int login(int i, char ch){
    cout<<"====================="<<endl;
    cout<<" LOGIN DULU MASSZEH  "<<endl;
    cout<<"====================="<<endl;
    for(int i=1; i<=3; i++){
        string user ="";
        string pass ="";
        cout<<"username : ";cin>>user;
        cout<<"password : ";
            ch =_getch();
            while(ch!=13){
                pass.push_back(ch);
                cout<<'*';
                ch =_getch();
            }
    if(user=="aldi"&&pass=="54321"){
        cout<<"\n\nAnda Berhasil Login\n\n"<<endl;
        system("pause");
        system("cls");
        return 0;
    }else{
        cout<<"\n\nMaaf kami tidak mengenal username & password anda.\n\n";
        system("pause");
        system("cls");
    }
    }

    while(i<=3);
    cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
    cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
    cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";

}

/*struct dataDiri
{
    string nama;
    string ttl;
    string alamat;
    int umur;
    int no_telp;
}; */



int main ()
{

   int i;
   char ch;

   login(i, ch);

   cout<<" Menu Utama "<<endl;
   cout<<"1. Pengisian Data Diri "<<endl;
   cout<<"2. Menghubungi Lurah setempat "<<endl;
   cout<<"3. Antrian Sembako "<<endl;
   cout<<"4. Pengambilan Sembako "<<endl;
   cout<<"5. Keluar "<<endl;



    return 0;
}
