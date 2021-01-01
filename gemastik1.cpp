/*
Membuat Aplikasi Penghitungan Biaya Penyewaan Mobil

Nama Pembuat: Erikson Andre
Soal	: Gemastik1
Nama Program : Gemastik1.exe
Nama File    : Gemastik1.cpp	
Tanggal Pembuatan : 31/12/20 22:12

Edit: 01/01/21 12:33
=>perubahan tanggal menjadi string
*/

#include <iostream>
using namespace std;

int main(){
	string nama, jenis, tanggal;
	int datasewa[2];
	int kode, diskon, jumlahsewa, pajak;
	long long int harga, total;

	//Input
	cout << "Masukkan nama penyewa: ";
		cin >> nama;
	cout << "Masukkan tanggal/bulan/tahun sewa(ex: 1Jan21 **tanpa spasi): ";
		cin >> tanggal;
	
	cout << "Masukkan lama jam sewa(ex: 2): ";
		cin >> datasewa[0];
	cout << "Jumlah sewa: ";
		cin >> jumlahsewa;

	kodesalah:
	cout << "PILIH JENIS MOBIL : " << endl;
	cout << "1. Sedan" << endl;
	cout << "2. Minibus" << endl;
	cout << "3. Bus" << endl;

	cin >> datasewa[1];
		




	//Proses


switch(datasewa[1]){
			case 1: 
				harga = 450000;
				pajak = 100000;
				jenis = "Sedan";
				total = (jumlahsewa * (datasewa[0] * harga) ) + pajak;
				break;
			case 2: 
				harga = 700000;
				pajak = 150000;
				jenis = "Minibus";
				total = (jumlahsewa * (datasewa[0] * harga) ) + pajak;
				break;
			case 3: 
				harga = 1000000;
				pajak = 200000;
				jenis = "Bus";
				total = (jumlahsewa * (datasewa[0] * harga) ) + pajak;
				break;
			default: 
			cout << "* KODE JENIS MOBIL SALAH *" << endl;
			
			goto kodesalah;
			break;


		}
			



		if (datasewa[0] > 20){
			diskon = (10 * total) / 100;
			total -= diskon;
		}else {
			diskon = 0;
			total -= diskon;
		}


	//Output
	cout << "-------PT SAFETY TRANSPORTATION-------" << endl;
	cout << "Nama penyewa: " << nama << endl;
	cout << "Tanggal sewa: " << tanggal << endl;

	cout << "======================================" << endl;

	cout << "Kode mobil: " << datasewa[1] << endl;
	cout << "Lama sewa: " << datasewa[0] << " Jam" << endl;

	cout << "======================================" << endl;
	cout << "Jenis Mobil: " << jenis << endl;
	cout << "Harga sewa: Rp. " << harga << endl;
	cout << "Pajak sewa: Rp. " << pajak << endl << endl;
	cout << "Diskon sewa: Rp. " << diskon << endl << endl;

	cout << "======================================" << endl;

	cout << "TOTAL PEMBAYARAN: Rp. " << total << endl;







	system("PAUSE");
	return 0;
}