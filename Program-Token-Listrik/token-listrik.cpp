#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihanToken, hargaToken = 0;	//Deklarasi variable pilihanToken dan hargaToken dengan tipe data int
    int biayaAdmin = 2500;				//Deklarasi sekaligus inisialisasi variable biayaAdmin dengan tipe data int
    string kodePromo;					//Deklarasi variable kodePromo dengan tipe data string
    int potongan = 0;					//Deklarasi sekaligus inisialisasi variable potongan dengan tipe data int
    string noPelanggan;					//Deklarasi variable noPelanggan dengan tipe data string

    // Daftar token listrik dan harganya
    cout << "LOKET PEMBAYARAN UNISKA" << endl;
    cout << "--------------------------" << endl;
    cout << "Pilihan Token Listrik : " << endl;
    cout << "1. Rp. 20000" << endl;
    cout << "2. Rp. 50000" << endl;
    cout << "3. Rp. 100000" << endl;
    cout << "4. Rp. 150000" << endl;
    cout << "5. Rp. 200000" << endl;
    cout << "===========================" <<endl;
    cout << "Pilih Token Listrik [1-5]\t: ";
    cin >> pilihanToken;
	
    // Menghitung harga token berdasarkan pilihan
    switch (pilihanToken) {
        case 1:
            hargaToken = 20000;
            break; // fungsi program menjalankan pernyataan berikutnya di luar switch pernyataan
        case 2:
            hargaToken = 50000;
            break; 
        case 3:
            hargaToken = 100000;
            break; 
    	case 4:
            hargaToken = 150000;
            break;
        case 5:
            hargaToken = 200000;
            break; 
        default:
            cout << "Pilihan token salah" << endl;
            return 1; 
    }
	
	// Meminta user untuk input No Pelanggan
	cout << "Masukkan No Pelanggan \t\t: ";
   	cin >> noPelanggan;
    
    // Meminta user untuk input kode promo
    cout << "Masukkan kode promo\t\t: ";
	cin >> kodePromo;

    // Mengecek dan menerapkan potongan berdasarkan kode promo
    
    if (kodePromo == "FTIUNISKA" || kodePromo == "FKMUNISKA") {     // jika kodePromo == "FTIUNISKA" atau kodePromo == "FKMUNISKA"
        potongan = 1500;    // maka potongan = 1500
    }
    else if (kodePromo == "FHUNISKA") {   //Jika kodePromo == "FHUNISKA"
        potongan = 1200;    // maka potongan = 1200
    }
    else if (kodePromo == "FKIPUNISKA") {         //Jika kodePromo == "FKIPUNISKA"
        potongan = 1700;    // maka potongan = 1700
    }
    else if (kodePromo == "UNISKA2022") {         //Jika kodePromo == "UNISKA2022"
        potongan = 2000;        	// maka potongan = 2000
    }

    // Menghitung total pembayaran
    int totalPembayaran = hargaToken + biayaAdmin - potongan;
    cout << "==============================================" <<endl;
    
    // Menampilkan detail output ke layar
    cout << "No Pelanggan\t\t: "<< noPelanggan << endl;
    cout << "Token yang dibeli\t: Rp." << hargaToken << endl;
    cout << "Biaya Admin \t\t: Rp." << biayaAdmin << endl;
    cout << "Kode Promo \t\t: " << kodePromo << endl;
	cout << "Potongan \t\t: Rp." << potongan << endl;
    cout << "Total Pembayaran\t: Rp." << totalPembayaran << endl;

    return 0;
}

