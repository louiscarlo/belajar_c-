#include <iostream>
#include <conio.h>

void pertambahan() {
    int input;
    float hasil = 0;
    system("cls");
    std::cout << "Selamat Datang di Menu Pertambahan\n";
    std::cout << "\nSilahkan Masukkan Jumlah Angka yang Ingin Dioperasikan : ";
    std::cin >> input;
    if(input<=0 || input==1) {
        std::cout << "\nMaaf, Jumlah Angka yang Diinputkan Harus Lebih Dari 1\n";
    }
    else {
        for(int i=1; i<=input; i++) {
            float angka;
            std::cout << "Angka ke-" << i << " : ";
            std::cin >> angka;
            hasil+=angka;
        }
        std::cout << "\nHasil Pertambahan Dari Bilangan Tersebut Adalah : " << hasil << std::endl;
    }
}

void pengurangan() {
    int input;
    float hasil = 0;
    system("cls");
    std::cout << "Selamat Datang di Menu Pengurangan\n";
    std::cout << "\nSilahkan Masukkan Jumlah Angka yang Ingin Dioperasikan : ";
    std::cin >> input;
    if(input<=0 || input==1) {
        std::cout << "\nMaaf, Jumlah Angka yang Diinputkan Harus Lebih Dari 1\n";
    }
    else {
        for(int i=1; i<=input; i++) {
            float angka;
            std::cout << "Angka ke-" << i << " : ";
            std::cin >> angka;
            if(hasil==0) {
                hasil+=angka;
            }
            else{
                hasil-=angka;
            }
        }
        std::cout << "\nHasil Dari Pengurangan Bilangan Tersebut Adalah : " << hasil << std:: endl; 
    }
}

void perkalian() {
    int input;
    float hasil = 1;
    system("cls");
    std::cout << "Selamat Datang di Menu Perkalian\n";
    std::cout << "\nSilahkan Masukkan Jumlah Angka yang Ingin Dioperasikan : ";
    std::cin >> input;
    if(input<=0 || input==1) {
        std::cout << "\nMaaf, Jumlah Angka yang Diinputkan Harus Lebih Dari 1\n";
    }
    else {
        for(int i=1; i<=input; i++) {
            float angka;
            std::cout << "Angka ke-" << i << " : ";
            std::cin >> angka;
            hasil*=angka;
        }
        std::cout << "\nHasil Dari Perkalian Bilangan Tersebut Adalah : " << hasil << std::endl;
    }
}

void pembagian() {
    int input;
    float hasil = 0;
    system("cls");
    std::cout << "Selamat Datang di Menu Pembagian\n";
    std::cout << "\nSilahkan Masukkan Jumlah Angka yang Ingin Dioperasikan : ";
    std::cin >> input;
    if(input<=0 || input==1) {
        std::cout << "\nMaaf, Jumlah Angka yang Diinputkan Harus Lebih Dari 1\n";
    }
    else {
        for(int i=1; i<=input; i++) {
            float angka;
            std::cout << "Angka ke-" << i << " : ";
            std::cin >> angka;
            if(hasil==0) {
                hasil+=angka;
            }
            else {
                hasil/=angka;
            }
        }
        std::cout << "\nHasil Dari Pembagian Bilangan Tersebut Adalah : " << hasil << std::endl;
    }
}

int main() {
    int input;
    do{
    std::cout << "\t\t=================================================================\n";
    std::cout << "\t\t\t\tSelamat Datang di Menu Kalkulator C++\n";
    std::cout << "\t\t=================================================================\n";
    std::cout << "1. Menu Pertambahan\n";
    std::cout << "2. Menu Pengurangan\n";
    std::cout << "3. Menu Perkalian\n";
    std::cout << "4. Menu Pembagian\n";
    std::cout << "5. Keluar\n";
    std::cout << "Silahkan Inputkan Menu : ";
    std::cin >> input;
    switch(input) {
        case 1: 
            getch();
            pertambahan();
            break;
        case 2:
            getch();
            pengurangan();
            break;
        case 3:
            getch();
            perkalian();
            break;
        case 4:
            getch(); 
            pembagian();       
            break;
        case 5:
            exit(0);
            break;
        default:
            std::cout << "\nMaaf Inputan Anda Salah\n";
            break;
    }
    std::cout << "\nTekan Enter Untuk Kembali ke Menu Utama..";
    getch();
    system("cls");
    }while(input!=5);
    return 0;
}