// 6.

#include <iostream>
using namespace std;

struct kandidat
{
    string nama;
    int mtk;
    int bahasa;
    float r;
    string status;
};
kandidat a[2];

float rerata(int x,int y){
    return (x+y)/2;
}

void input (){
    

    for (int i = 0;i < 2; i ++){
        cout << "Kandidat Ke - "<< i+1 << endl;
        cout << "Masukkan Nama Kandidat : ";
        cin >> a[i].nama;
        cout << "Masukkan Nilai Matematika : ";
        cin >> a[i].mtk;
        cout << "Masukkan Nilai Bahasa Inggris : ";
        cin >> a[i].bahasa;
        
    }
}   

void display(){
    
    cout << endl;
    cout << "Nama \t\t Status\n";
    for (int i = 0;i < 2; i ++){
        a[i].r = rerata(a[i].mtk,a[i].bahasa);
        if (a[i].r >= 70 || a[i].mtk > 80){
            a[i].status = "\t\tDiterima\n";
        }
        else{
            a[i].status = "\t\tDitolak\n";
        }
        cout << a[i].nama << a[i].status;
    }   
}

int main (){
    char pil;
    do
    {
        input();
        display();

        cout << endl;
        cout << "Apakah ANda Ingin Mengulang ? (y/Y) : ";
        cin >> pil;

    } while (pil == 'y' || pil == 'Y');
    
}

// 1. Berikan contoh deklarasi variabel minimal 3 variabel dengan tipe data yang berbeda
// int a;
// string nama;
// float rerata;
// double nilai;
// char pilihan;

// 2.berikan conroh implementsi dri conditional statement 
// if (a > b)
// {
//     cout << a << " Lebih besar dari " << b;
// }
// else{
//     cout << b << "Lebih besar dari "<< a;   
// }

// 3.berikan contoh implementasi dari struct
// struct mahasiswa
// {
//     string nama;
//     int nim;
//     int umur;
// };

// 4. berikan contoh implementasi dari prosedur dan fungsi
// fungsi
// float luas (int x,int y){
//     return x * y;
// }

// prosedur
// void input ()
// {
//     cout<< "Masukkan Nama = ";
//     cin>> nama;
//     cout<<"Masukkan Jumlah Telor = ";
//     cin>> telur;
//     cout<<"Masukkan Jumlah Mie = ";
//     cin>> mie;
//     cout<< "Masukkan Jumlah Air = ";
//     cin>>air;
// }

// 5.for (int i = 0;i < 2; i ++){
//         cout << "Kandidat Ke - "<< i+1 << endl;
//         cout << "Masukkan Nama Kandidat : ";
//         cin >> a[i].nama;
//         cout << "Masukkan Nilai Matematika : ";
//         cin >> a[i].mtk;
//         cout << "Masukkan Nilai Bahasa Inggris : ";
//         cin >> a[i].bahasa;
        
//     }