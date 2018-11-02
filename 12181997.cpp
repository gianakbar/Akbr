#include <iostream>
#include <string.h>

void ateam(){
	cout << "Dibuat dengan <3 oleh tukang coding abal - abal" << endl;
	cout << "HAHAHAHAHAHAHA" << endl;
}

main(){

  char namaPembeli[256];
    char kode,merk[50];
	char kodeUkuran,jenisUkuran[50];
	int harga,jumlahBeli,pembayaran,pajak,potongan,totalPembayaran;



	cout << "PROGRAM PENJUALAN KUE" << endl << endl;

	cout << "Masukkan Nama Pembeli: ";
	cin >> namaPembeli;

	cout << "====================================" << endl;
	cout << "Silahkan Pilih Kuenya" << endl;
	cout << "1.Bolu Black Forest" << endl;
	cout << "2.Cheese Cake" << endl;
	cout << "3.Banana Cake" << endl;
	cout << "4.Strawberry Cake" << endl;
	cout << "====================================" << endl;
	cout << "Masukkan Kode Kuenya [1/2/3/4]: ";
	cin >> kode;

	cout << "Masukkan Ukuran Kuenya [S/M/L]: ";
	cin  >> kodeUkuran;	
	
	if(kode == '1'){
		strcpy(merk, "Bolu Black Forest");
		if(kodeUkuran == 'S'){
			strcpy(jenisUkuran, "Small");
			harga = 50000;
		}else if(kodeUkuran == 'M'){
			strcpy(jenisUkuran, "Medium");
			harga = 75000;
		}else if(kodeUkuran == 'L'){
			strcpy(jenisUkuran, "Medium");
			harga = 95000;
		}
	}


	if(kode == '2'){
		strcpy(merk, "Cheese Cake");
		if(kodeUkuran == 'S'){
			strcpy(jenisUkuran, "Small");
			harga = 45000;
		}else if(kodeUkuran == 'M'){
			strcpy(jenisUkuran, "Medium");
			harga = 60000;
		}else if(kodeUkuran == 'L'){
			strcpy(jenisUkuran, "Medium");
			harga = 80000;
		}
	}


	if(kode == '3'){
		strcpy(merk, "Banana Cake");
		if(kodeUkuran == 'S'){
			strcpy(jenisUkuran, "Small");
			harga = 40000;
		}else if(kodeUkuran == 'M'){
			strcpy(jenisUkuran, "Medium");
			harga = 55000;
		}else if(kodeUkuran == 'L'){
			strcpy(jenisUkuran, "Medium");
			harga = 70000;
		}
	}

	if(kode == '4'){
		strcpy(merk, "Strawberry Cake");
		if(kodeUkuran == 'S'){
			strcpy(jenisUkuran, "Small");
			harga = 30000;
		}else if(kodeUkuran == 'M'){
			strcpy(jenisUkuran, "Medium");
			harga = 45000;
		}else if(kodeUkuran == 'L'){
			strcpy(jenisUkuran, "Medium");
			harga = 60000;
		}
	}

	

	

	cout << "Masukkan Jumlah Beli: ";
	cin >> jumlahBeli;
	// tetew
	pembayaran = harga * jumlahBeli;
	pajak = 0.1 * pembayaran;

	if (jumlahBeli >= 25){
	 	potongan = 5 * pembayaran / 100;
	 } else {
	 	potongan = 0;
	 }
	 
	 totalPembayaran = pembayaran - potongan - pajak;		

	 cout << endl;
	 cout << "Struk Pembayaran" << endl;
	 cout << "===========================================" << endl;
	 cout << "Nama Pembeli  	    : " << namaPembeli << endl;
	 cout << "Merk Kue      	    : " << merk << endl;
	 cout << "jenis Ukuran  	    : " << jenisUkuran << endl;
	 cout << "Jumlah Beli  	    : " << jumlahBeli << endl;
	 cout << "Harga Kue      	    :Rp. " << harga << endl;
	 cout << "Jumlah Pembayaran   :Rp. " << pembayaran << endl;
	 cout << "Potongan            :Rp. " << potongan << endl;
	 cout << "Pajak               :Rp. " << pajak << endl;
	 cout << "Total Pembayaran    :Rp. " << totalPembayaran << endl;
	 cout << "===========================================" << endl;

	 ateam();

	cin.get();
	return 0;
}