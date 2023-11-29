#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	cout << "+--------------------------+" << endl;
	cout << "|         BOY C++          |" << endl;
	cout << "+--------------------------+" << endl; 
	cout << endl;

    string username = "user123";
    string password = "pass123";
    int batasLogin = 3;

    string usernameInput, passwordInput;

    int percobaanLogin = 0;

    while (percobaanLogin < batasLogin) {
        cout << "Masukkan username: ";
        cin >> usernameInput;
        cout << "Masukkan password: ";
        cin >> passwordInput;

        if (usernameInput == username && passwordInput == password) {
        	cout << "+-----------------------+" << endl;
            cout << "|     LOGIN BERHASIL    |" << endl;
            cout << "+-----------------------+" << endl;
            break;
        } else {
            percobaanLogin++;
            cout << "+---------------------------------+" << endl;
            cout << "| LOGIN GAGAL. SISA PERCOBAAN : " << batasLogin - percobaanLogin << " |" << endl;
            cout << "+---------------------------------+" << endl;
            cout << endl;
            
            if (percobaanLogin == batasLogin) {
                cout << "Anda telah mencapai batas maksimum percobaan login. Program berhenti." << endl;
                return 0;
            }
        }
    }
    cout << endl;

    do {
        cout << "Pilihan Menu: " << endl;
        cout << "             1. PROGRAM KALKULATOR" << endl;
        cout << "             2. PROGRAM PERHITUNGAN LUAS DAN KELILING BANGUN LINGKARAN" << endl;
        cout << "             3. PROGRAM KONVERSI SUHU" << endl;
        cout << "             4. PROGRAM OPERATOR PERBANDINGAN" << endl;
        cout << "             5. PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA" << endl;
		cout << endl;
		int pilihanMenu;
        cout << "Pilih menu (1-5): ";
        cin >> pilihanMenu;
		cout << endl;
        
        switch(pilihanMenu) {

        	case 1:
        		cout << "+--------------------------------------+" << endl;
        		cout << "|         1. PROGRAM KALKULATOR        |" << endl;
				cout << "+--------------------------------------+" << endl;
				cout << endl;
				
				int angka1, angka2, hasilJumlah, hasilKurang, hasilKali;
				double hasilBagi;
				
				cout << "Masukkan angka pertama \t\t : ";
				cin >> angka1;
				cout << "Masukkan angka kedua \t\t : ";
				cin >> angka2;

				hasilJumlah = angka1 + angka2;
				hasilKurang = angka1 - angka2;
				hasilKali = angka1 * angka2;
				hasilBagi = angka1 / angka2;
				
				cout << endl;
				cout << "Hasil penjumlahan " << angka1 << " + " << angka2 << " \t : " << hasilJumlah << endl;
				cout << "Hasil pengurangan " << angka1 << " - " << angka2 << " \t : " << hasilKurang << endl;
				cout << "Hasil perkalian " << angka1 << " * " << angka2 << " \t : " << hasilKali << endl;
				cout << "Hasil pembagian " << angka1 << " / " << angka2 << " \t : " << hasilBagi << endl;
				
				break;
				system("cls");
				
			case 2:
				cout << "+-----------------------------------------------------------+" << endl;
				cout << "| 2. PROGRAM PERHITUNGAN LUAS DAN KELILING BANGUN LINGKARAN |" << endl;
				cout << "+-----------------------------------------------------------+" << endl;
				cout << endl;
				
				int jariJari;
				float luas, keliling;
				
				cout << "Input nilai jari-jari : ";
				cin >> jariJari;
				cout << endl;
				
				luas = 3.14 * jariJari * jariJari;
				keliling = 2 * 3.14 * jariJari;
				
				cout << "Luas dari bangun lingkaran dengan jari-jari : " << jariJari << " adalah : " << luas << " cm2" << endl;
				cout << "Keliling dari bangun lingkaran dengan jari-jari: " << jariJari << " adalah : " << keliling << " cm2" << endl;

				break;
				system("cls");
				
			case 3:
				cout << "+--------------------------+" << endl;
				cout << "| 3. PROGRAM KONVERSI SUHU |" << endl;
				cout << "+--------------------------+" << endl;
				cout << endl;

				int menu;										
				float celcius, fahrenheit, kelvin, reamur;
	
				cout << " 1. Celcius ke semua " << endl;
				cout << " 2. Fahrenheit ke semua " << endl;
				cout << " 3. Kelvin ke semua " << endl;
				cout << " 4. Reamur ke semua " << endl;
				cout << " -----------------------" << endl;
				cout << " Pilih Menu [1-4]: " ;		
				cin >> menu;
				cout << endl;
	
				
				switch(menu) { 
					case 1:		
						cout << " PROGRAM KONVERSI CELCIUS " << endl;
						cout << " ------------------------ " << endl;
						cout << " Input Suhu Celcius: ";
						cin >> celcius;
						cout << endl;
				
						fahrenheit = (celcius * 9/5) + 32;
						kelvin = celcius + 273.15;
						reamur = celcius * 4/5;
						
						cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
						cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
						cout << " Hasil Konversi ke reamur      : " << reamur << " R" << endl;
					break;
					
					case 2:		
						cout << " PROGRAM KONVERSI FAHRENHEIT " << endl;
						cout << " --------------------------- " << endl;
						cout << " Input Suhu Fahrenheit         : ";
						cin >> fahrenheit;
						cout << endl;
						
						celcius = (fahrenheit - 32) * 5/9;
						kelvin = (fahrenheit - 32) * 5/9 + 273.15;
						reamur = (fahrenheit - 32) * 4/9;
						
						cout << " Hasil Konversi ke Celcius     : " << celcius << " C" << endl;
						cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
						cout << " Hasil Konversi ke Reamur      : " << reamur << " R" << endl;
					break;
		
					case 3:		
						cout << " PROGRAM KONVERSI KELVIN " << endl;
						cout << " ----------------------- " << endl;
						cout << " Input Suhu Kelvin             : ";
						cin >> kelvin;
						cout << endl;
						
						celcius = kelvin - 273.15;
						fahrenheit = (kelvin - 273.15) * 9/5 + 32;
						reamur = (kelvin - 273.15) * 4/5;
						
						cout << " Hasil Konversi ke Celcius     : " << celcius << " C" << endl;
						cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
						cout << " Hasil Konversi ke Reamur      : " << reamur << " R" << endl;
						break;
		
					case 4:
						cout << " PROGRAM KONVERSI REAMUR " << endl;
						cout << " ----------------------- " << endl;
						cout << " Input Suhu Reamur             : ";
						cin >> reamur;
						cout << endl;
						
						celcius = reamur * 5/4;
						fahrenheit = (reamur * 9/4) + 32;
						kelvin = (reamur * 5/4) + 273.15;
						
						cout << " Hasil Konversi suhu Celcius   : " << celcius << " C" << endl;
						cout << " Hasil Konversi ke Fahrenheit  : " << fahrenheit << " F" << endl;
						cout << " Hasil Konversi ke Kelvin      : " << kelvin << " K" << endl;
						break;
		
						default:
							cout << " Pilihan Menu Salah " << endl;
						break;
				}
				
				break;
				system("cls");
				
			case 4:
				cout << "+----------------------------------+" << endl;
				cout << "| 4. PROGRAM OPERATOR PERBANDINGAN |" << endl;
				cout << "+----------------------------------+" << endl;
				cout << endl;
			
				int number1, number2;
				bool hasil;

				cout << "Masukkan Angka 1: ";
				cin >> number1;

				cout << "Masukkan Angka 2: ";
				cin >> number2;
				cout << endl;
				
				hasil = number1 == number2;
				cout << "Apakah Angka 1 == Angka 2 \t ?  " << hasil << endl;
				
				hasil = number1 != number2;
				cout << "Apakah Angka 1 != Angka 2 \t ?  " << hasil << endl;
				
				hasil = number1 > number2;
				cout << "Apakah Angka 1 > Angka 2 \t ?  " << hasil << endl;
				
				hasil = number1 < number2;
				cout << "Apakah Angka 1 < Angka 2 \t ?  " << hasil << endl;
				
				hasil = number1 >= number2;
				cout << "Apakah Angka 1 >= Angka 2 \t ?  " << hasil << endl;
				
				hasil = number1 <= number2;
				cout << "Apakah Angka 1 <= Angka 2 \t ?  " << hasil << endl;
				
			    break;
				system("cls");
				
			case 5:
				cout << "+---------------------------------------------+" << endl;
				cout << "| 5. PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA |" << endl;
				cout << "+---------------------------------------------+" << endl;
				cout << endl;
			
				string namaLengkap, npm;	
				int semester;	
				float nilaiTugas, nilaiUts, nilaiUas, nilaiPresensi;	
				
				cin.ignore();
				cout <<"Masukkan Nama Lengkap\t: "; 
				getline(cin, namaLengkap);
				
				cout <<"Masukkan Semester\t: ";
				cin >> semester;
				
				cout <<"Masukkan NPM\t\t: ";
				cin >> npm;
				
				cout <<"Masukkan Nilai Tugas\t: ";
				cin >> nilaiTugas;
				
				cout <<"Masukkan Nilai Uts\t: ";
				cin >> nilaiUts;
				
				cout <<"Masukkan Nilai Uas\t: ";
				cin >> nilaiUas;
				
				cout <<"Masukkan Nilai Presensi\t: ";
				cin >> nilaiPresensi;
				cout << endl;
				
				float nilaiAkhir = (nilaiTugas * 0.3) + (nilaiUts * 0.25) + (nilaiUas * 0.35) + (nilaiPresensi * 0.1);
				
				string prodi;
				
				string kodeProdi = npm.substr(2, 3);
				
				if (kodeProdi == "100") {			
					prodi = "Teknik Informatika";	
				}
				else if (kodeProdi == "200") {		
					prodi = "Sistem Informasi";	
				}
				else {								
					prodi = "Program Studi Tidak Diketahui";	
				}
				
				string grade;
				
				if (nilaiAkhir >= 80 && nilaiAkhir <=100) {			
					grade = "A";									
				}
				else if (nilaiAkhir >= 75 && nilaiAkhir <= 79) {	
					grade = "B+";									
				}
				else if (nilaiAkhir >= 70 && nilaiAkhir <= 74) {	
					grade = "B";									
				}
				else if (nilaiAkhir >= 65 && nilaiAkhir <= 69) {	
					grade = "C+";									
				}
				else if (nilaiAkhir >= 60 && nilaiAkhir <= 64) {	
					grade = "C";									
				}
				else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) {	
					grade = "D";									
				}
				else if (nilaiAkhir >= 0 && nilaiAkhir <= 49) {		
					grade = "E";									
				}
				
				cout << "\nNama Lengkap\t\t: " << namaLengkap << endl;
				cout << "Semester\t\t: " << semester << endl;
				cout << "NPM\t\t\t: " << npm << endl;
				cout << "Prodi\t\t\t: " << prodi << endl;
				cout << "Nilai Akhir\t\t: " << nilaiAkhir << endl;
				cout << "Grade\t\t\t: " << grade << endl;
			break;
		}
        
        cout << endl;
        char pilihanLanjut;
        cout << "-------------------------------------" << endl;
        cout << "Apakah Anda ingin melanjutkan (Y/T)? ";
        cin >> pilihanLanjut;

		system("cls");
        if (pilihanLanjut != 'Y' && pilihanLanjut != 'y') {
            cout << "Program berhenti. Terima kasih" << endl;
            break;
        }

    } while (true);

    return 0;
}

