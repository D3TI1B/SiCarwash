// // PEMANGGILAN LIBRARY
// #include <stdio.h>
// #include <stdlib.h> 
// #include <string.h> 
// #include <conio.h>
// #include <iostream>
// #include <ctype.h> 
// #include <windows.h> 
// // PEMANGGILAN LIBRARY - END

// // PEMANGGILAN HEADER FILE
// #include "program.h"
// #include "sys_compare.h"
// #include "transaksi.h"
// #include "laporan.h"
// #include "sys_time.h"
// #include "sys_kembali_input.h"
// #include "sys_validasi.h"
// // PEMANGGILAN HEADER FILE - END

// using namespace std;

// #define BUFFER_SIZE 1000



// // MODUL UTAMA DARI HALAMAN LAPORAN TRANSAKSI
// int laporan_main(){
// 	int menu;
	
// 	// LIST MENU
// 	system("cls");
// 	printf("|=================================================|\n");
// 	printf("|            HALAMAN LAPORAN TRANSAKSI            |\n");
// 	printf("|      Silahkan Pilih Menu Laporan Dibawah :      |\n");
// 	printf("|=================================================|\n");
// 	printf("|1. Laporan - Semua                               |\n");
// 	printf("|2. Laporan - Pertahun                            |\n");
// 	printf("|3. Laporan - Perbulan                            |\n");
// 	printf("|4. Laporan - Perhari                             |\n");
// 	printf("|5. Kembali Ke Homepage Admin                     |\n");
// 	printf("|                                                 |\n");
// 	printf("|=================================================|\n");
// 	printf("             Copyright 2021 - KlikCafe             \n");
    
//     printf("\n\n");
//     printf("Masukkan angka pada menu yang dipilih : ");
// 	scanf("%d", &menu);
// 	system("cls");
	
//     switch (menu) { 
//         case 1:
// 			// REDIRECT KE tampil_laporan_semua() UNTUK MENAMPILKAN DATA LAPORAN SEMUA - FILE : laporan.h --> laporan.cpp
// 			tampil_laporan_semua();
// 			break;
// 		case 2:
// 			// REDIRECT KE tampil_laporan_tahun() UNTUK MENAMPILKAN DATA LAPORAN BERDASARKAN TAHUN - FILE : laporan.h --> laporan.cpp
// 			tampil_laporan_tahun();
// 			break;
// 		case 3:
// 			// REDIRECT KE tampil_laporan_bulan() UNTUK MENAMPILKAN DATA LAPORAN BERDASARKAN BULAN DAN TAHUN - FILE : laporan.h --> laporan.cpp
// 			tampil_laporan_bulan();
// 			break;
// 		case 4:
// 			// REDIRECT KE tampil_laporan_tanggal() UNTUK MENAMPILKAN DATA LAPORAN BERDASARKAN TANGGAL, BULAN, TAHUN - FILE : laporan.h --> laporan.cpp
// 			tampil_laporan_tanggal();
// 			break;
// 		case 5:
// 			// REDIRECT KE homepage_admin() - FILE : program.h --> homepage_admin.cpp
// 			homepage_admin();
// 			break;
// 	 	default:
// 	 		printf("Maaf inputan salah\n");
// 	 		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi . . . ");
// 	 		getchar();
	 		
// 			// REDIRECT KE laporan_main() - FILE : program.h --> laporan.cpp
// 			laporan_main();
// 			break;
//     }
// } 
// // MODUL UTAMA DARI HALAMAN LAPORAN TRANSAKSI - END



// // MODUL UNTUK MENAMPILKAN LAPORAN TRANSAKSI SEMUA DATA
// void tampil_laporan_semua(antrian_cuci *tempat)
// {
// 	char filename_csv[255], baris[255];
// 	// antrian_cuci data_transaksi; // VARIABEL STRUCT
// 	FILE *f_csv; // VARIABEL FILE

// 	strcpy(filename_csv, "main_data/LAPORAN SEMUA TRANSAKSI.csv");

// 	if (!(f_csv = fopen(filename_csv, "w")))
// 	{
// 		system("cls");
// 		printf ("File %s tidak dapat diakses\n", filename_csv); 
// 		printf("Silahkan tekan Enter untuk kembali ke halaman laporan transaksi...");
// 		getch();

// 		// REDIRECT KE laporan_main() UNTUK KEMBALI
// 		main_antrian();
// 	}


// 	sprintf(baris,"NO POLISI,GOLONGAN,DURASI,HARGA,IN,PROSES,OUT\n");
// 	fputs(baris,f_csv);


// 	// PROSES MEMASUKAN DATA KE CSV FILE
// 	sprintf(baris,"%s,%s,%s,%d,%d-%d-%d %d:%d:%d\n",tempat->nopol, tempat->golongan, tempat->durasi, tempat->harga, tempat->waktu_in, tempat->waktu_proses, tempat->waktu_out);
// 	fputs(baris,f_csv);
	
// 	fclose(f_csv);
	
// }
// // MODUL UNTUK MENAMPILKAN LAPORAN TRANSAKSI SEMUA DATA - END