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

// MODUL UNTUK EXPORT LAPORAN AKUMULASI
void tampil_laporan_akumulasi()
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
		sprintf(brs,"NO POLISI,GOLONGAN,DURASI,HARGA,IN,PROSES,OUT\n");
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
}
// MODUL UNTUK HAPUS LAPORAN - END