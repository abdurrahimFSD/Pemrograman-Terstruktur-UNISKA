#include <iostream>
using namespace std;

int main() {
	// Deklarasi variabel-variabel yang akan digunakan
	string namaLengkap, npm;	//Mendeklarasi variable namaLengkap, npm dengan tipe data string
	int semester;	//Mendeklarasi variable semester dengan tipe data int
	float nilaiTugas, nilaiUts, nilaiUas, nilaiPresensi;	//Mendeklarasi variable nilaiTugas, nilaiUts, nilaiUas, nilaiPresensi dengan tipe data float
	
	// Meminta pengguna untuk memasukkan Nama Lengkap
	cout <<"Masukkan Nama Lengkap\t: "; 
	getline(cin, namaLengkap);
	
	// Meminta pengguna untuk memasukkan Semester
	cout <<"Masukkan Semester\t: ";
	cin >> semester;
	
	// Meminta pengguna untuk memasukkan NPM
	cout <<"Masukkan NPM\t\t: ";
	cin >> npm;
	
	// Meminta pengguna untuk memasukkan Nilai Tugas
	cout <<"Masukkan Nilai Tugas\t: ";
	cin >> nilaiTugas;
	
	// Meminta pengguna untuk memasukkan Nilai Uts
	cout <<"Masukkan Nilai Uts\t: ";
	cin >> nilaiUts;
	
	// Meminta pengguna untuk memasukkan Nilai Uas
	cout <<"Masukkan Nilai Uas\t: ";
	cin >> nilaiUas;
	
	// Meminta pengguna untuk memasukkan Nilai Presensi
	cout <<"Masukkan Nilai Presensi\t: ";
	cin >> nilaiPresensi;
	
	// Menghitung nilai akhir berdasarkan bobot
	float nilaiAkhir = (nilaiTugas * 0.3) + (nilaiUts * 0.25) + (nilaiUas * 0.35) + (nilaiPresensi * 0.1);
	
	// Mendeklarasikan variabel prodi yang akan digunakan untuk menentukan program studi
	string prodi;
	
	// Mengambil tiga karakter dari string 'npm' mulai dari indeks ke-2 dan mengambil 3 numbers lalu menyimpannya dalam variabel 'kodeProdi'
	string kodeProdi = npm.substr(2, 3);
	
	if (kodeProdi == "100") {			//Jika kodeProdi == "100"
		prodi = "Teknik Informatika";	//Maka program studi mahasiswa adalah "Teknik Informatika"
	}
	else if (kodeProdi == "200") {		//Jika kodeProdi == "200"
		prodi = "Sistem Informasi";		//Maka program studi mahasiswa adalah "Sistem Informasi"
	}
	else {								//Jika tidak
		prodi = "Program Studi Tidak Diketahui";	//Maka program studi mahasiswa adalah "Program Studi Tidak Diketahui"
	}
	
	// Mendeklarasikan variabel grade yang akan digunakan untuk menentukan nilai huruf
	string grade;
	
	 // Menentukan grade berdasarkan rentang nilai akhir
	if (nilaiAkhir >= 80 && nilaiAkhir <=100) {			//Jika nilaiAkhir lebih dari sama dengan 80 dan nilaiAkhir kurang dari sama dengan 100
		grade = "A";									//Maka grade mahasiswa adalah "A"
	}
	else if (nilaiAkhir >= 75 && nilaiAkhir <= 79) {	//Jika nilaiAkhir lebih dari sama dengan 75 dan nilaiAkhir kurang dari sama dengan 79
		grade = "B+";									//Maka grade mahasiswa adalah "B+"
	}
	else if (nilaiAkhir >= 70 && nilaiAkhir <= 74) {	//Jika nilaiAkhir lebih dari sama dengan 70 dan nilaiAkhir kurang dari sama dengan 74	
		grade = "B";									//Maka grade mahasiswa adalah "B"
	}
	else if (nilaiAkhir >= 65 && nilaiAkhir <= 69) {	//Jika nilaiAkhir lebih dari sama dengan 65 dan nilaiAkhir kurang dari sama dengan 69
		grade = "C+";									//Maka grade mahasiswa adalah "C+"
	}
	else if (nilaiAkhir >= 60 && nilaiAkhir <= 64) {	//Jika nilaiAkhir lebih dari sama dengan 60 dan nilaiAkhir kurang dari sama dengan 64
		grade = "C";									//Maka grade mahasiswa adalah "C"
	}
	else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) {	//Jika nilaiAkhir lebih dari sama dengan 50 dan nilaiAkhir kurang dari sama dengan 59
		grade = "D";									//Maka grade mahasiswa adalah "D"
	}
	else if (nilaiAkhir >= 0 && nilaiAkhir <= 49) {		//Jika nilaiAkhir lebih dari sama dengan 0 dan nilaiAkhir kurang dari sama dengan 49
		grade = "E";									//Maka grade mahasiswa adalah "E"
	}
	
	// Menampilkan hasil perhitungan ke layar
	cout << "\nNama Lengkap\t\t: " << namaLengkap << endl;
	cout << "Semester\t\t: " << semester << endl;
	cout << "NPM\t\t\t: " << npm << endl;
	cout << "Prodi\t\t\t: " << prodi << endl;
	cout << "Nilai Akhir\t\t: " << nilaiAkhir << endl;
	cout << "Grade\t\t\t: " << grade << endl;
}
