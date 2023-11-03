#include<iostream>
#include <cstdlib>	// Untuk menggunakan fungsi system
using namespace std;

int main () {
	int menu;										// Deklarasi variable menu dengan tipe data int
	float celcius, fahrenheit, kelvin, reamur;		// Deklarasi varibale celcius, fahrenheit, kelvin, reamur dengan tipe data float
	
	cout << " ------------------------- " << endl;
	cout << " | PROGRAM KONVERSI SUHU | " << endl;
	cout << " ------------------------- " << endl;
	cout << " 1. Celcius ke semua " << endl;
	cout << " 2. Fahrenheit ke semua " << endl;
	cout << " 3. Kelvin ke semua " << endl;
	cout << " 4. Reamur ke semua " << endl;
	cout << " ------------------------- " << endl;
	cout << " Pilih Menu [1-4]: " ;		// Meminta users untuk memilih menu (1-4)
	cin >> menu;
	cout << endl;
	system("cls");	// Membersihkan layar
	
	// Memulai percabangan berdasarkan nilai yang dimasukkan oleh users ke dalam variabel 'menu'
	switch(menu) { 
		case 1:		// Jika menu memiliki nilai 1, maka blok kode case 1 yang akan dijalankan
			// Menampilkan pesan dan mengambil input suhu Celcius
			cout << " PROGRAM KONVERSI CELCIUS " << endl;
			cout << " ------------------------ " << endl;
			cout << " Input Suhu Celcius            : ";
			cin >> celcius;
			
			// Melakukan konversi ke Fahrenheit, Kelvin, dan Reamur
			fahrenheit = (celcius * 9/5) + 32;
			kelvin = celcius + 273.15;
			reamur = celcius * 4/5;
			
			// Menampilkan hasil konversi
			cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
			cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
			cout << " Hasil Konversi ke reamur      : " << reamur << " R" << endl;
			break;
			
		case 2:		// Jika menu memiliki nilai 2, maka blok kode case 2 yang akan dijalankan
			// Menampilkan pesan dan mengambil input suhu Fahrenheit
			cout << " PROGRAM KONVERSI FAHRENHEIT " << endl;
			cout << " --------------------------- " << endl;
			cout << " Input Suhu Fahrenheit         : ";
			cin >> fahrenheit;
			
			// Melakukan konversi ke Celcius, Kelvin, dan Reamur
			celcius = (fahrenheit - 32) * 5/9;
			kelvin = (fahrenheit - 32) * 5/9 + 273.15;
			reamur = (fahrenheit - 32) * 4/9;
			
			// Menampilkan hasil konversi
			cout << " Hasil Konversi ke Celcius     : " << celcius << " C" << endl;
			cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
			cout << " Hasil Konversi ke Reamur      : " << reamur << " R" << endl;
			break;
		
		case 3:		// Jika menu memiliki nilai 2, maka blok kode case 2 yang akan dijalankan
			// Menampilkan pesan dan mengambil input suhu Kelvin
			cout << " PROGRAM KONVERSI KELVIN " << endl;
			cout << " ----------------------- " << endl;
			cout << " Input Suhu Kelvin             : ";
			cin >> kelvin;
			
			// Melakukan konversi ke Celcius, Fahrenheit, dan Reamur
			celcius = kelvin - 273.15;
			fahrenheit = (kelvin - 273.15) * 9/5 + 32;
			reamur = (kelvin - 273.15) * 4/5;
			
			// Menampilkan hasil konversi
			cout << " Hasil Konversi ke Celcius     : " << celcius << " C" << endl;
			cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
			cout << " Hasil Konversi ke Reamur      : " << reamur << " R" << endl;
			break;
		
		case 4:		// Jika menu memiliki nilai 2, maka blok kode case 2 yang akan dijalankan
			// Menampilkan pesan dan mengambil input suhu Reamur
			cout << " PROGRAM KONVERSI REAMUR " << endl;
			cout << " ----------------------- " << endl;
			cout << " Input Suhu Reamur             : ";
			cin >> reamur;
			
			// Melakukan konversi ke Celcius, Fahrenheit, dan Kelvin
			celcius = reamur * 5/4;
			fahrenheit = (reamur * 9/4) + 32;
			kelvin = (reamur * 5/4) + 273.15;
			
			// Menampilkan hasil konversi
			cout << " Hasil Konversi suhu Celcius   : " << celcius << " C" << endl;
			cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
			cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
			break;
		
		default:	// Jika pilihan menu tidak == 1,2,3,4 => maka blok kode default yang akan dijalankan
			cout << " Pilihan Menu Salah " << endl;
			break;
	}
	
}
