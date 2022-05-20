#ifndef report_h
#define report_h

// DEKLARASI MODUL
void header_laporan_semua(); // MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI SEMUA DATA
void header_laporan_semua_tempat_cuci_1(); // MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 1
void header_laporan_semua_tempat_cuci_2(); // MODUL UNTUK EXPORT HEADER LAPORAN TRANSAKSI DATA ANTRIAN TEMPAT CUCI 2
void tampil_laporan_akumulasi( int jumlah_kendaraan, int jumlah_waktu, int jumlah_harga); // MODUL UNTUK EXPORT LAPORAN AKUMULASI
void tampil_laporan_akumulasi_tempat_cuci_1( int jumlah_kendaraan_by_tempat_cuci_total, int jumlah_waktu_by_tempat_cuci_total, int jumlah_harga_by_tempat_cuci_total); // MODUL UNTUK EXPORT LAPORAN AKUMULASI TEMPAT CUCI 1
void tampil_laporan_akumulasi_tempat_cuci_2( int jumlah_kendaraan_by_tempat_cuci_total, int jumlah_waktu_by_tempat_cuci_total, int jumlah_harga_by_tempat_cuci_total); // MODUL UNTUK EXPORT LAPORAN AKUMULASI TEMPAT CUCI 2
void hapus_laporan(); // MODUL UNTUK HAPUS LAPORAN
// DEKLARASI MODUL

#endif

