#ifndef queue_controller_h
#define queue_controller_h


// DEKLARASI VARIABEL GLOBAL
typedef struct antrian_cuci *address;
struct antrian_cuci{
	char nopol[15];
	int golongan;
	int durasi;
	int harga;
	int waktu_in;
	int waktu_proses;
	int waktu_out;
	address next;
};

antrian_cuci *tempat_cuci_1 = NULL; // LIST MENUNJUK NULL
antrian_cuci *tempat_cuci_2 = NULL; // LIST MENUNJUK NULL

int jumlah_durasi[2]; // DURASI PADA SETIAP TEMPAT CUCI
int pilihan_durasi[3] = {45,60,90}; // DURASI SESUAI JENIS MOBIL
int pilihan_harga[3] = {10000,30000,50000}; // HARGA SESUAI JENIS MOBIL
int durasi_simulasi = 5; // SIMULASI SKIP WAKTU DI SET 5 MENIT
int durasi_jeda = 5; // SIMULASI JEDA WAKTU DI SET 5 MENIT SETIAP SELESAI MENCUCI
int waktu_buka = 0; // DALAM MENIT
int waktu_tutup = 600; // DALAM MENIT
int waktu_mulai_istirahat = 300; // DALAM MENIT
int waktu_selesai_istirahat = 359; // DALAM MENIT
int pukul_waktu; // JAM SEBAGAI PENGGANTI JAM REALTIME
int antrean; // TEMPAT CUCI
int jumlah_kendaraan; // JUMLAH TOTAL KENDARAAN YANG DI CUCI
int jumlah_waktu; // JUMLAH TOTAL WAKTU MENCUCI
int jumlah_harga; // JUMLAH TOTAL PEMASUKAN
// DEKLARASI VARIABEL GLOBAL - END


// DEKLRASI MODUL
int main_antrian();
void tombol_selanjutnya();
void data_antrian();
void konversi_waktu();
void konversi_waktu_cuci(int menit_cuci);
void input_kendaraan();
void cancel_kendaraan();
int cek_nopol(char no_plat[], int *tanda_tempat);
int jenis_kendaraan();
void keluarkan(int tanda_tempat, char no_plat[]);
int cek_antrian();
int keluar_kendaraan(char no_plat[], struct antrian_cuci *tempat);
void skip_waktu_berjalan(int m);
void simulasi_waktu();
void cek_sisawaktu_cuci();
void dequeue(int pilih);
void hitung_total(int pilih);
void pra_enqueue(char no_plat[],int golongan);
void hitung_durasi();
int pilih_tempat_cuci();
void enqueue_proses(struct antrian_cuci *data_inputan, struct antrian_cuci *tempat, int pilihan);
void notifikasi_status(char no_plat[], int golongan);

void tampil_laporan_semua(struct antrian_cuci *tempat);
void ringkasan_total(); // MODUL UNTUK MENAMPILKAN RINGKASAN TOTAL TRANSAKSI
// DEKLRASI MODUL - END

#endif
