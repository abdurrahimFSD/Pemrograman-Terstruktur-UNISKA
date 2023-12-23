#include <iostream> 
using namespace std; 
 
void menu1(); //deklarasi fungsi menu1 
void menu2(); //deklarasi fungsi menu2 
void menu3(); //deklarasi fungsi menu2 
void menu4(); //deklarasi fungsi menu2 
void menuKeluar(); //deklarasi fungsi menu2 
 
float luas, keliling; //variabel global, bisa dipanggil dari function mana saja 
 
int main(){ 
	int menu; //variabel lokal hanya dikenali di function main 
	cout<<"Pilih menu: "<<endl; 
	cout<<"1. Lingkaran "<<endl; 
	cout<<"2. Persegi "<<endl; 
	cout<<"3. Persegi Panjang "<<endl; 
	cout<<"4. Jejar Genjang "<<endl; 
	cout<<"Input [1-4]: "; cin>>menu; 
	if(menu == 1){ 
		menu1();//pemanggilan fungsi menu1   
	}else if(menu == 2){ 
		menu2();//pemanggilan fungsi menu2   
	}else if(menu == 3){ 
		menu3();//pemanggilan fungsi menu3   
	}else if(menu == 4){ 
		menu4();//pemanggilan fungsi menu4   
	}else{ 
		menuKeluar();//pemanggilan fungsi menuKeluar 
	}   
} 
 
 
void menu1(){ //definisi dari fungsi menu1 
	float r;//deklarasi variabel r, sifatnya lokal, hanya bisa dipanggil di function menu1 
	cout<<"Anda memilih menu Lingkaran"<<endl;  
	cout<<"Input Nilai R  : "; cin>>r; 
	luas = 3.14 * r * r; 
	keliling = 2 * 3.14 * r; 
	cout<<"Hasil luas lingkaran : "<<luas<<"cm2"<<endl;  
	cout<<"Hasil keliling lingkaran : "<<keliling<<"cm"<<endl;  
} 
 
void menu2(){ //definisi dari fungsi menu2 
   	cout<<"Anda memilih menu Persegi"<<endl;  
    float sisi, luas; 
    cout << "Masukkan panjang sisi persegi: "; 
    cin >> sisi; 
    luas = sisi * sisi; 
    cout << "Luas persegi dengan sisi " << sisi << " adalah: " << luas << endl; 
} 
 
void menu3(){ //definisi dari fungsi menu2 
   	cout<<"Anda memilih menu Persegi Panjang"<<endl;  
    float panjang, lebar, luas; 
    cout << "Masukkan panjang persegi panjang: "; 
    cin >> panjang; 
    cout << "Masukkan lebar persegi panjang: "; 
    cin >> lebar;  
    luas = panjang * lebar; 
    cout << "Luas persegi panjang dengan panjang " << panjang << " dan lebar " << lebar << " adalah: " << luas << endl;
} 
 
void menu4(){ //definisi dari fungsi menu2 
   	cout<<"Anda memilih menu Jajar Genjang"<<endl; 
    float alas, tinggi, luas;  
    cout << "Masukkan panjang alas jajar genjang: "; 
    cin >> alas; 
    cout << "Masukkan tinggi jajar genjang: "; 
    cin >> tinggi; 
    luas = alas * tinggi; 
    cout << "Luas jajar genjang dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << luas << endl; 
} 
 
void menuKeluar(){ //definisi dari fungsi menu2 
   	cout<<"Anda memilih menu Keluar"<<endl; 
}