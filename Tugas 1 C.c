#include <stdio.h>
main(){
	printf ("NAMA : YARIS SAEFI\nNIM : F1B019143\nKELOMPOK : 28\n");
	
	int kode , harga , i=1 , total_pembelian=0, diskon, total_bayar;
	char kar= 'y' ;
	printf ("================================================================\n");
    printf ("==================selamat datang di toko kami===================\n");
    printf ("========barang yang sudah di beli tidak boleh dikembalikan======\n");
    printf ("================================================================\n");
    printf ("Tersedia :\n");
	printf("1.  buku tulis	harganya = 3500\n2.  pulpen	harganya = 2500\n3.  penggaris	harganya = 1500\n4.  pensil	harganya = 2000\n5.  penghapus	harganya = 2500\n6.  spidol	harganya = 7000\n7.  stabilo	harganya = 4500\n8.  tipek	harganya = 4000\n9.  jangka	harganya = 5000\n10. buku gambar	harganya = 6000\n11. papan ujia	harganya = 10000\n12. rautan	harganya = 2800\n13. krayon	harganya = 7500\n14. busur drajat harganya = 1000\n15. doubel polio harganya = 1600\n");
	printf ("================================================================\n");
	printf("masukkan kode barang :");

while (kar=='y'){
	printf ("barang ke-%d:",i);
	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1){
	printf("barang yang anda pilih adalah : buku tulis\n");
		harga= 3500;
	printf("1 = %d\n ", harga);
}else if (kode==2){
	printf("barang yang anda pilih adalah : pulpen\n");
		harga= 2500;
	printf("2 = %d\n ", harga);
}else if ( kode == 3){
	printf("barang yang anda pilih adalah : penggaris\n");
		harga= 1500;
	printf("3 = %d ", harga);
}else if ( kode == 4){
	printf("barang yang anda pilih adalah : pensil\n");
		harga= 2000;
	printf("4 = %d ", harga);
}else if ( kode == 5){
	printf("barang yang anda pilih adalah : penghapus\n");
		harga= 2500;
	printf("5 = %d ", harga);
}else if ( kode == 6){
	printf("barang yang anda pilih adalah : spidol\n");
	 harga= 7000;
	printf("6 = %d ", harga);
}else if ( kode == 7){
	printf("barang yang anda pilih adalah : stabilo\n");
	 harga= 4500;
	printf("7 = %d ", harga);
}else if ( kode == 8){
	printf("barang yang anda pilih adalah : tipek\n");
	 harga= 4000;
	printf("8 = %d ", harga);
}else if ( kode == 9){
	printf("barang yang anda pilih adalah : jangka\n");
	 harga= 5000;
	printf("9 = %d ", harga);
}else if ( kode == 10){
	printf("barang yang anda pilih adalah : buku gambar\n");
	 harga= 6000;
	printf("10 = %d ", harga);
}else if ( kode == 11){
	printf("barang yang anda pilih adalah : papan ujian\n");
	 harga= 10000;
	printf("11 = %d ", harga);
}else if ( kode == 12){
	printf("barang yang anda pilih adalah : rautan\n");
	 harga= 2800;
	printf("12 = %d ", harga);
}else if ( kode == 13){
	printf("barang yang anda pilih adalah : krayon\n");
	 harga= 7500;
	printf("13 = %d ", harga);
}else if ( kode == 14){
	printf("barang yang anda pilih adalah : busur drajat\n");
	 harga= 1000;
	printf("14 = %d ", harga);
}else if ( kode == 15){
	printf("barang yang anda pilih adalah : doubel polio\n");
	 harga= 1600;
	printf("15 = %d ", harga);
}else{
	printf("input salah!!!! ");
}
printf ("================================================================\n");
total_pembelian=total_pembelian+harga;
printf("MAU BELI BARANG LAGI?? [y/t]\n");
scanf("%c", &kar);
i++;

printf ("================================================================\n");
}
printf("total_pembelian = %d\n ", total_pembelian);
if (total_pembelian > 100000){
	diskon=0.1*total_pembelian;
	printf ("diskon %d", diskon);
	total_bayar=total_pembelian-diskon;
}else{
	total_bayar=total_pembelian;
}
printf ("================================================================\n");
printf("total_bayar=%d\n",total_bayar);
}
