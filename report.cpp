// PEMANGGILAN LIBRARY
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <iostream>
// PEMANGGILAN LIBRARY - END

// PEMANGGILAN FILE HEADER
#include "report.h"
// PEMANGGILAN FILE HEADER - END

#define BUFFER_SIZE 1000

// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI SEMUA DATA
void header_laporan_semua()
{
	char filename_csv[255], baris[255];
	FILE *f_csv; // VARIABEL FILE

	strcpy(filename_csv, "main_data/LAPORAN SEMUA TRANSAKSI.csv");

	if (!(f_csv = fopen(filename_csv, "w")))
	{
		system("cls");
		printf ("File %s tidak dapat diakses\n", filename_csv); 
		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi...");
		getch();

		// REDIRECT KE main_antrian() UNTUK KEMBALI
		// main_antrian();
	}
	else{
		sprintf(baris,"NO POLISI,GOLONGAN,DURASI,HARGA,IN,PROSES,OUT\n");
		fputs(baris,f_csv);
	}

	
	fclose(f_csv);
	
}
// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI SEMUA DATA - END

// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 1
void header_laporan_semua_tempat_cuci_1()
{
	char filename_csv[255], baris[255];
	FILE *f_csv; // VARIABEL FILE

	strcpy(filename_csv, "main_data/LAPORAN SEMUA TRANSAKSI TEMPAT CUCI 1.csv");

	if (!(f_csv = fopen(filename_csv, "w")))
	{
		system("cls");
		printf ("File %s tidak dapat diakses\n", filename_csv); 
		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi...");
		getch();

		// REDIRECT KE main_antrian() UNTUK KEMBALI
		// main_antrian();
	}
	else{
		sprintf(baris,"NO POLISI,GOLONGAN,DURASI,HARGA,IN,PROSES,OUT\n");
		fputs(baris,f_csv);
	}

	
	fclose(f_csv);
	
}
// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 1 - END


// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 2
void header_laporan_semua_tempat_cuci_2()
{
	char filename_csv[255], baris[255];
	FILE *f_csv; // VARIABEL FILE

	strcpy(filename_csv, "main_data/LAPORAN SEMUA TRANSAKSI TEMPAT CUCI 2.csv");

	if (!(f_csv = fopen(filename_csv, "w")))
	{
		system("cls");
		printf ("File %s tidak dapat diakses\n", filename_csv); 
		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi...");
		getch();

		// REDIRECT KE main_antrian() UNTUK KEMBALI
		// main_antrian();
	}
	else{
		sprintf(baris,"NO POLISI,GOLONGAN,DURASI,HARGA,IN,PROSES,OUT\n");
		fputs(baris,f_csv);
	}

	
	fclose(f_csv);
	
}
// MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 2 - END


// MODUL UNTUK EXPORT LAPORAN AKUMULASI
void tampil_laporan_akumulasi( int jumlah_kendaraan, int jumlah_waktu, int jumlah_harga)
{
	char filename[255], brs[255];
	FILE *file_csv; // VARIABEL FILE

	strcpy(filename, "main_data/LAPORAN AKUMULASI.csv");

	if (!(file_csv = fopen(filename, "w")))
	{
		system("cls");
		printf ("File %s tidak dapat diakses\n", filename); 
		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi...");
		getch();

		// REDIRECT KE main_antrian() UNTUK KEMBALI
		// main_antrian();
	}
	else{
		sprintf(brs,"TOTAL MOBIL,TOTAL WAKTU CUCI,TOTAL PEMASUKAN\n");
		fputs(brs,file_csv);

		sprintf(brs,"%d Mobil,%d Menit,Rp. %d\n", jumlah_kendaraan, jumlah_waktu, jumlah_harga);
		fputs(brs,file_csv);
	}

	
	fclose(file_csv);
	
}
// MODUL UNTUK EXPORT LAPORAN AKUMULASI - END

// MODUL UNTUK HAPUS LAPORAN
void hapus_laporan()
{
	remove("main_data/LAPORAN SEMUA TRANSAKSI.csv");
	remove("main_data/LAPORAN AKUMULASI.csv");
	remove("main_data/LAPORAN SEMUA TRANSAKSI TEMPAT CUCI 1.csv");
	remove("main_data/LAPORAN SEMUA TRANSAKSI TEMPAT CUCI 2.csv");
}
// MODUL UNTUK HAPUS LAPORAN - END