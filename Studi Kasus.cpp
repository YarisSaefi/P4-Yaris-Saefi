#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
main(){
	cout<<"| SELAMAT DATANG DI PROGRAM KASIR KELOMPOK : 28 | \n\n"<<endl;
	
	int kode, harga, i=1, total_pembelian=0, diskon, total_bayar;
	char kar= 'y';
	cout<<"+==================================+"<<endl;
    cout<<"|kode|    Barang    |    Harga     |"<<endl;
    cout<<"|==================================|"<<endl;
    cout<<"| 1  |  Buku        | Rp. 7000     |"<<endl;
    cout<<"| 2  |  Pensil      | Rp. 3000     |"<<endl;
    cout<<"| 3  |  Pulpen      | Rp. 4000     |"<<endl;
    cout<<"| 4  |  Penggaris   | Rp. 5000     |"<<endl;
    cout<<"| 5  |  Penghapus   | Rp. 2000     |"<<endl;
    cout<<"| 6  |  Jangka      | Rp. 6500     |"<<endl;
    cout<<"| 7  |  Stabilo     | Rp. 7500     |"<<endl;
    cout<<"| 8  |  Spidol      | Rp. 13000    |"<<endl;
    cout<<"| 9  |  Rautan      | Rp. 1000     |"<<endl;
    cout<<"| 10 |  Tipek       | Rp. 5500     |"<<endl;
    cout<<"| 11 |  tinta       | Rp. 8000     |"<<endl;
    cout<<"| 12 |  lem         | Rp. 2500     |"<<endl;
    cout<<"| 13 |  papan ujian | Rp. 20000    |"<<endl;
    cout<<"| 14 |  gunting     | Rp. 9500     |"<<endl;
    cout<<"| 15 |  Sampul Buku | Rp. 1500     |"<<endl;
    cout<<"|----|--------------|--------------|"<<endl;
    cout<<"+==================================+"<<endl;

	cout<<"masukkan kode barang :"<<endl;

while (kar=='y'){

	cin>>kode;
	fflush (stdin);
	if (kode==1)	{
		cout<<"barang yang anda pilih adalah : Buku\n"<<endl;
	harga= 7000;
	cout<<"Harga Buku = \n "<<harga<<endl;
}else if (kode==2){
	cout<<"barang yang anda pilih adalah : Pensil\n"<<endl;
		harga= 3000;
	cout<<"Harga Pensil = \n "<<harga<<endl;
}else if ( kode == 3){
	cout<<"barang yang anda pilih adalah : Pulpen\n"<<endl;
		harga= 4000;
	cout<<"Harga Pulpen = \n "<<harga<<endl;
}else if ( kode == 4){
	cout<<"barang yang anda pilih adalah : Penggaris\n"<<endl;
		harga= 5000;
	cout<<"Harga Penggaris = \n "<<harga<<endl;
}else if ( kode == 5){
	cout<<"barang yang anda pilih adalah : Penghapus\n"<<endl;
		harga= 2000;
	cout<<"Harga Penghapus = \n "<<harga<<endl;
}else if ( kode == 6){
	cout<<"barang yang anda pilih adalah : Jangka\n"<<endl;
		harga= 6500;
	cout<<"Harga Jangka = \n "<<harga<<endl;
}else if ( kode == 7){
	cout<<"barang yang anda pilih adalah : Stabilo\n"<<endl;
	harga= 7500;
	cout<<"Harga Stabilo = \n "<<harga<<endl;
}else if ( kode == 8){
	cout<<"barang yang anda pilih adalah : Spidol\n"<<endl;
	harga= 13000;
	cout<<"Harga Spidol = \n "<<harga<<endl;
}else if ( kode == 9){
	cout<<"barang yang anda pilih adalah : Rautan\n"<<endl;
	harga= 1000;
	cout<<"Harga Rautan = \n "<<harga<<endl;
}else if ( kode == 10){
	cout<<"barang yang anda pilih adalah : Tipek\n"<<endl;
	harga= 5500;
	cout<<"Harga Tipek = \n "<<harga<<endl;
}else if ( kode == 11){
	cout<<"barang yang anda pilih adalah : Tinta\n"<<endl;
	harga= 8000;
	cout<<"Harga Tinta = \n "<<harga<<endl;
}else if ( kode == 12){
	cout<<"barang yang anda pilih adalah : Lem\n"<<endl;
	harga= 2500;
	cout<<"Harga Lem = \n "<<harga<<endl;
}else if ( kode == 13){
	cout<<"barang yang anda pilih adalah : Papan ujian\n"<<endl;
	harga= 20000;
	cout<<"Harga Papan ujian = \n "<<harga<<endl;
}else if ( kode == 14){
	cout<<"barang yang anda pilih adalah : Gunting\n"<<endl;
	harga= 9500;
	cout<<"Harga Gunting = \n "<<harga<<endl;
}else if ( kode == 15){
	cout<<"barang yang anda pilih adalah : Sampul Buku\n"<<endl;
	harga= 1500;
	cout<<"Sampul Buku = \n "<<harga<<endl;
}else{
	cout<<"input salah!!!! "<<endl;
}
total_pembelian=total_pembelian+harga;
cout<<"MAU BELI BARANG LAGI?? [y/t]:"<<endl;
cin>>kar;
i++;


}
cout<<"................................................\n"<<endl;
cout<<"................................................"<<endl;
cout<<"total pembelian = \n "<<total_pembelian<<endl;
if (total_pembelian > 1000000){
	diskon=0.1*total_pembelian;
	cout<<"diskon : \n"<<diskon<<endl;
	total_bayar=total_pembelian-diskon;
}else{
	total_bayar=total_pembelian;
}

cout<<"************************************************\n"<<endl;
cout<<"************************************************"<<endl;
cout<<"total bayar=\n"<<total_bayar<<endl;
}
