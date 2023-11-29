#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	string ulang;
	int saldo = 120000;
	int menu, setor, tarik;
	
	do {
		cout << "ATM UNISKA" << endl;
		cout << "---------------------" << endl;
		cout << "1. CEK SALDO" << endl;
		cout << "2. SETOR TUNAI" << endl;
		cout << "3. TARIK TUNAI" << endl;
		cout << "4. KELUAR" << endl;
		cout << "---------------------" << endl;
		
		cout << "Pilih Menu [ 1 - 4 ] : ";
		cin >> menu;
		cout << endl;
		
		switch (menu) {
			case 1:
				cout << "Menu 1 :" << endl;
				cout << "Saldo Anda : " << saldo << endl;
				break;
				
			case 2:
				cout << "Menu 2 :" << endl;
				cout << "Input Setor Tunai : ";
				cin >> setor;
				saldo = saldo + setor;
				cout << "Saldo Anda Sekarang : " << saldo << endl;
				break;
				
			case 3:
				cout << "Menu 3 :" << endl;
				cout << "Input Tarik Tunai : ";
				cin >> tarik;
				if (tarik <= saldo) {
					saldo = saldo - tarik;
					cout << "Saldo Anda Sekarang : " << saldo << endl;
				}
				else {
					cout << "Saldo Anda Tidak Mencukupi" << endl;
				}
				break;
				
			case 4:
				cout << "Terima Kasih Menggunakan ATM UNISKA" << endl;
				return 0;
			
			default:
				cout << "Pilihan Salah" << endl;
				return 0;
		}
		
		cout << endl;
		cout << "Lanjut lagi (Y / T) : ";
		cin >> ulang;
		cout << endl;
		system("cls");
		
		cout << "Terima Kasih Menggunakan ATM UNISKA" << endl;
		
	} while ( ulang == "Y" || ulang == "y");
}
