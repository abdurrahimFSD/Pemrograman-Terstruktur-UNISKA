#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Function untuk menampilkan menu login
void loginMenu() {
    cout << "PROGRAM TRANSAKSI RENTAL DI RENTAL FTI UNISKA" << endl;
    cout << "=============================================" << endl;
    cout << "Silahkan Login Untuk Masuk ke sistem" << endl;
}

// Function untuk menampilkan menu utama
void mainMenu(bool admin) {
    cout << "Menu Utama :" << endl;
    cout << "1. Input Transaksi" << endl;
    cout << "2. Cetak Transaksi Terakhir" << endl;
    cout << "3. Keluar" << endl;

    if (!admin) {
        cout << "Pilihan [1-3]: ";
    } else {
        cout << "Input Menu[1-3]: ";
    }
}

// Function untuk menampilkan detail transaksi
void transactionData(string namaPenyewa, string tanggal, int lamaSewa, string kodeMobil, string namaMobil, int biayaPerHari, int subTotal, int pajak, string kodePromo, int potongan, int totalKeseluruhan) {
    cout << "Data Transaksi Pembayaran Rental di RENTAL FTI UNISKA" << endl;
    cout << "=====================================================" << endl;
    cout << "Nama Penyewa \t\t: " << namaPenyewa << endl;
    cout << "Tanggal Menyewa\t\t: " << tanggal << endl;
    cout << "Lama Menyewa\t\t: " << lamaSewa << " hari" << endl;
    cout << "Kode Mobil\t\t: " << kodeMobil << endl;
    cout << "Nama Mobil\t\t: " << namaMobil << endl;
    cout << "Biaya Per Hari\t\t: " << biayaPerHari << endl;
    cout << "SubTotal\t\t: " << subTotal << endl;
    cout << "Pajak 11%\t\t: " << pajak << endl;
    cout << "Total Setelah Pajak\t: " << subTotal + pajak << endl;
    cout << "Kode Promo \t\t: " << kodePromo << endl;
    cout << "Potongan\t\t: " << potongan << endl;
    cout << "Total Keseluruhan\t: " << totalKeseluruhan << endl;
}

int main() {
	// Maksimum jumlah percobaan login yang diperbolehkan
    int maxLogin = 3;
    // Jumlah percobaan login yang telah dilakukan
    int login = 0;

    string username, password;
    bool admin = false;

	// Menampilkan menu login
    loginMenu();
    do {
        cout << "Input Username : ";
        cin >> username;
        cout << "Input Password : ";
        cin >> password;

        if (username == "adminUser" && password == "adminPass") {
            admin = true;
            break;
        } else {
            cout << "Username atau password Salah. Silahkan Ulangi!" << endl;
            login++;
            cout << "Kesempatan Mengulang : " << maxLogin - login << " Kali" << endl;
        }

    } while (login < maxLogin);
    system("cls");

    if (!admin) {
        cout << "Anda telah mengulang sebanyak 3 kali. Program akan keluar." << endl;
        return 0;
    }

    int pilihMenu;
    string ulangi;

	// Variabel untuk menyimpan rincian transaksi terakhir
    string lastNamaPenyewa, lastTanggal, lastKodeMobil, lastNamaMobil, lastKodePromo;
    int lastLamaSewa, lastHargaPerHari, lastSubTotal, lastPajak, lastPotongan, lastTotalKeseluruhan;

    do {
    	// Menampilkan menu utama
        mainMenu(admin);
        // Input pilihan menu
        cin >> pilihMenu;
        
        string namaPenyewa, tanggal, kodeMobil, namaMobil, kodePromo;
        int lamaSewa, hargaPerHari, subTotal, pajak, potongan, totalSetelahPajak, totalKeseluruhan;
        
        switch (pilihMenu) {
            case 1: {
            	system("cls");
            	// Input Transaksi
                cout << "PROGRAM TRANSAKSI RENTAL DI RENTAL FTI UNISKA" << endl;
                cout << "=============================================" << endl;
                cout << "Input Nama Penyewa: ";
                cin.ignore();
                getline(cin, namaPenyewa);

                cout << "Input Kode Mobil: ";
                cin >> kodeMobil;

                cout << "Input Lama Menyewa: ";
                cin >> lamaSewa;

                cout << "Input Tanggal Menyewa: ";
                cin.ignore();
                getline(cin, tanggal);

                cout << "Input Kode Promo: ";
                cin >> kodePromo;

                if (kodeMobil == "MPV-1") {
                    namaMobil = "Toyota Avanza 2015";
                    hargaPerHari = 300000;
                } else if (kodeMobil == "MPV-2") {
                    namaMobil = "Daihatsu Xenia 2016";
                    hargaPerHari = 320000;
                } else if (kodeMobil == "CTY-1") {
                    namaMobil = "Daihatsu Ayla 2017";
                    hargaPerHari = 230000;
                } else if (kodeMobil == "CTY-2") {
                    namaMobil = "Honda Brio 2015";
                    hargaPerHari = 250000;
                } else if (kodeMobil == "HMPV-1") {
                    namaMobil = "Toyota Alphard 2015";
                    hargaPerHari = 1200000;
                } else {
                    namaMobil = "Nama Mobil Tidak Dikenal";
                    hargaPerHari = 0;
                }

                subTotal = hargaPerHari * lamaSewa;
                pajak = (11 * subTotal) / 100;
                totalSetelahPajak = subTotal + pajak;

                potongan = 0;
                if (kodePromo == "HEMAT01" && totalSetelahPajak >= 1100000) {
                    potongan = 0.10 * totalSetelahPajak;
                } else if (kodePromo == "HEMAT02" && totalSetelahPajak >= 1500000) {
                    potongan = 0.15 * totalSetelahPajak;
                } else if (kodePromo == "HEMAT03" && totalSetelahPajak >= 2500000) {
                    potongan = 0.20 * totalSetelahPajak;
                }

                totalKeseluruhan = totalSetelahPajak - potongan;
                cout << endl;

				// Menampilkan detail transaksi
                transactionData(namaPenyewa, tanggal, lamaSewa, kodeMobil, namaMobil, hargaPerHari, subTotal, pajak, kodePromo, potongan, totalKeseluruhan);

				// Menyimpan rincian transaksi sebagai transaksi terakhir
                lastNamaPenyewa = namaPenyewa;
                lastTanggal = tanggal;
                lastKodeMobil = kodeMobil;
                lastNamaMobil = namaMobil;
                lastKodePromo = kodePromo;
                lastLamaSewa = lamaSewa;
                lastHargaPerHari = hargaPerHari;
                lastSubTotal = subTotal;
                lastPajak = pajak;
                lastPotongan = potongan;
                lastTotalKeseluruhan = totalKeseluruhan;
                break;
            }
            case 2: {
            	// Cetak Transaksi Terakhir
            	
                if (lastNamaPenyewa.empty()) {
                	cout << endl;
                    cout << "Belum Ada Data Transaksi Pembayaran." << endl;
                } else {
                	cout << endl;
                	// Menampilkan detail transaksi terakhir
                    transactionData(lastNamaPenyewa, lastTanggal, lastLamaSewa, lastKodeMobil, lastNamaMobil, lastHargaPerHari, lastSubTotal, lastPajak, lastKodePromo, lastPotongan, lastTotalKeseluruhan);
                }
                break;
            }
            case 3: {
            	// Keluar dari program
                cout << "Program Keluar!" << endl;
                return 0;
            }
            default: {
            	// Pilihan menu tidak valid
                cout << "Pilihan tidak valid." << endl;
                break;
            }
        }

		cout << endl;
		// Input untuk mengulang program
        cout << "Ulangi Lagi (y/t): ";
        cin >> ulangi;
        system("cls");

    } while (ulangi == "y" || ulangi == "Y");

    cout << "Terima kasih telah menggunakan program ini" << endl;

    return 0;
}
