// PEMANGGILAN LIBRARY
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <iostream>
// PEMANGGILAN LIBRARY - END

// FUNCTION UNTUK MENAMPILKAN HEADER APLIKASI
void header_aplikasi(){
	printf("|===========================================================================================================|\n");
	printf("|                                                                                                           |\n");
	printf("|                                                SICARWASH                                                  |\n");
	printf("|                                                                                                           |\n");
	printf("|===========================================================================================================|\n");
}
// FUNCTION UNTUK MENAMPILKAN HEADER APLIKASI - END


// FUNCTION UNTUK MENAMPILKAN FOOTER APLIKASI
void footer_aplikasi(){
	printf("|===========================================================================================================|\n");
	printf("|                                         Copyright 2022 - SiCarwash                                        |\n");
	printf("|===========================================================================================================|\n");
}
// FUNCTION UNTUK MENAMPILKAN FOOTER APLIKASI - END


// FUNCTION UNTUK BANTUAN APABILA ADA KESULITAN DALAM PENGGUNAAN APLIKASI
void bantuan_aplikasi(){
	printf("\n");
	printf("BANTUAN PADA APLIKASI SICARWASH (PANDUAN) : \n");
	printf("> Tabel paling atas merupakan list antrian mobil beserta tempat pencuciannya \n");
	printf("> Ketik '0' pada setiap inputan, jika kamu tidak akan jadi melakukan hal tersebut (input data) \n");
	printf("> ketik '1' pada menu untuk input kendaraan \n");
	printf("> ketik '2' pada menu apabila ada kendaraan yang tidak jadi di cuci namun masih pada antrian \n");
	printf("> ketik '3' pada menu untuk melakukan pencucian selama 5 menit ke depan \n");
	printf("> ketik '4' pada menu untuk bantuan penggunaan aplikasi \n");
	printf("> ketik '5' pada menu untuk keluar dari aplikasi \n");
}
// FUNCTION UNTUK BANTUAN APABILA ADA KESULITAN DALAM PENGGUNAAN APLIKASI - END


// FUNCTION UNTUK MENAMPILKAN HEADER MENU
header_menu(){
	printf("|=================================================|\n");
	printf("|          Silahkan Pilih Menu Dibawah :          |\n");
	printf("|=================================================|\n");
	printf("|                                                 |\n");
}
// FUNCTION UNTUK MENAMPILKAN HEADER MENU - END


// FUNCTION UNTUK MENAMPILKAN FOOTER MENU
footer_menu(){
	printf("|                                                 |\n");
	printf("|=================================================|\n");
	printf("|             Copyright 2022 - SiCarwash          |\n");
	printf("|=================================================|\n");
}
// FUNCTION UNTUK MENAMPILKAN FOOTER MENU - END