#include <iostream>
using namespace std;

struct Buku {
    int id;
    string judul;
    string penulis;
    string penerbit;
    int tahunterbit;
};


Buku daftarromance[20] = {
    {1, "Cinta di Musim Hujan", "Dewi Anggraini", "Gramedia", 2020},
    {2, "Langit dan Kamu", "Raka Pratama", "Deepublish", 2019},
    {3, "Kisah di Balik Senja", "Nadia Putri", "Elex Media", 2021},
    {4, "Seribu Hari Tanpamu", "Andini Rahma", "Informatika", 2018},
    {5, "Hujan di Ujung Rindu", "Bayu Saputra", "Andi Publisher", 2020},
    {6, "Purnama untuk Cinta", "Citra Amelia", "Gramedia", 2022},
    {7, "Janji di Bawah Bintang", "Dian Arini", "Deepublish", 2019},
    {8, "Kamu dan Laut", "Eko Wibowo", "Elex Media", 2021},
    {9, "Hati yang Tertinggal", "Fina Lestari", "Informatika", 2023},
    {10, "Cinta yang Tak Selesai", "Gilang Ardi", "Graha Ilmu", 2018},
    {11, "Rasa yang Sama", "Hani Pratiwi", "Deepublish", 2020},
    {12, "Bersamamu Lagi", "Indra Maulana", "Gramedia", 2022},
    {13, "Kisah Dua Dunia", "Jihan Amalia", "Elex Media", 2021},
    {14, "Cinta di Balik Kabut", "Kiki Rahman", "Informatika", 2019},
    {15, "Rindu yang Hilang", "Lina Handayani", "Graha Ilmu", 2023},
    {16, "Waktu untuk Kita", "Maya Putri", "Deepublish", 2021},
    {17, "Aku, Kamu, dan Takdir", "Naufal Hadi", "Andi Publisher", 2022},
    {18, "Cinta di Stasiun Lama", "Olia Anggita", "Informatika", 2020},
    {19, "Rindu Senja", "Puja Lestari", "Gramedia", 2021},
    {20, "Kenangan Terindah", "Qomarudin", "Deepublish", 2023}
};


Buku daftarpemrograman[20] = {
    {21, "Pemrograman C++ Dasar", "Andi Pratama", "Informatika", 2020},
    {22, "Algoritma dan Struktur Data", "Budi Santoso", "Deepublish", 2021},
    {23, "Pemrograman Python", "Citra Lestari", "Elex Media", 2023},
    {24, "Dasar-Dasar Java", "Dewi Kurnia", "Graha Ilmu", 2020},
    {25, "Pemrograman Web PHP", "Eko Nugroho", "Andi Publisher", 2019},
    {26, "Pengantar Machine Learning", "Fajar Maulana", "Deepublish", 2022},
    {27, "Kecerdasan Buatan", "Gita Ramadhani", "Informatika", 2023},
    {28, "Pemrograman JavaScript", "Hari Prasetyo", "Gramedia", 2021},
    {29, "Pemrograman Go", "Intan Wulandari", "Deepublish", 2022},
    {30, "Pemrograman Rust", "Joko Santoso", "Andi Publisher", 2023},
    {31, "Pemrograman C Lanjut", "Kartika Dewi", "Deepublish", 2019},
    {32, "Pemrograman Mobile Android", "Lukman Hakim", "Elex Media", 2022},
    {33, "Pemrograman Flutter", "Mira Susanti", "Informatika", 2023},
    {34, "Pemrograman React", "Nina Anggraini", "Deepublish", 2022},
    {35, "Pemrograman Laravel", "Oki Saputra", "Informatika", 2021},
    {36, "Pemrograman Kotlin", "Putri Lestari", "Deepublish", 2023},
    {37, "Pemrograman Unity 3D", "Rizky Adi", "Elex Media", 2020},
    {38, "Pemrograman Unreal Engine", "Sinta Anggraeni", "Deepublish", 2023},
    {39, "Pemrograman Database MySQL", "Teguh Hidayat", "Graha Ilmu", 2021},
    {40, "Pemrograman Cloud", "Umar Zaini", "Informatika", 2023}
};


Buku daftarmisteri[20] = {
    {41, "Rahasia di Rumah Tua", "Vina Oktavia", "Gramedia", 2021},
    {42, "Pembunuhan di Danau Sunyi", "Wawan Setiawan", "Deepublish", 2020},
    {43, "Misteri Kota Hilang", "Yuni Pratiwi", "Elex Media", 2023},
    {44, "Surat dari Masa Lalu", "Zaki Rahman", "Informatika", 2022},
    {45, "Kasus di Malam Tahun Baru", "Anisa Maulida", "Deepublish", 2019},
    {46, "Hilang di Tengah Hujan", "Bambang Suryana", "Graha Ilmu", 2020},
    {47, "Misteri Jam 3 Pagi", "Cahyo Nugroho", "Informatika", 2021},
    {48, "Pembunuhan di Kereta", "Dina Kurniawati", "Deepublish", 2022},
    {49, "Jejak Bayangan", "Erlangga Pratama", "Gramedia", 2020},
    {50, "Rahasia di Balik Lukisan", "Fina Handayani", "Elex Media", 2023},
    {51, "Hantu di Perpustakaan", "Galih Raharjo", "Deepublish", 2022},
    {52, "Rumah di Ujung Jalan", "Hasan Basri", "Informatika", 2021},
    {53, "Catatan Pembunuh", "Indah Wulandari", "Deepublish", 2018},
    {54, "Bayangan di Cermin", "Jamaludin", "Graha Ilmu", 2019},
    {55, "Suara dari Dinding", "Kania Rizki", "Deepublish", 2021},
    {56, "Malam di Kota Tua", "Laila Amalia", "Elex Media", 2023},
    {57, "Teror di Gedung Tua", "Miko Saputra", "Deepublish", 2022},
    {58, "Pembunuhan Misterius", "Nando Wijaya", "Andi Publisher", 2023},
    {59, "Kasus yang Tak Terpecahkan", "Olivia Putri", "Informatika", 2021},
    {60, "Hilangnya Dokumen Rahasia", "Pandu Aditya", "Deepublish", 2023}
};


Buku daftarfantasi[20] = {
    {61, "Kerajaan Langit", "Qori Amalia", "Informatika", 2020},
    {62, "Legenda Naga Merah", "Rian Nugraha", "Deepublish", 2021},
    {63, "Putri dari Hutan Gelap", "Sari Dewi", "Elex Media", 2023},
    {64, "Pedang Cahaya", "Tono Rahman", "Graha Ilmu", 2022},
    {65, "Prajurit Bayangan", "Utami Dewi", "Deepublish", 2023},
    {66, "Kota Ajaib di Utara", "Vito Saputra", "Informatika", 2021},
    {67, "Sang Penyihir", "Wina Marlina", "Deepublish", 2020},
    {68, "Kisah Para Dewa", "Yoga Hidayat", "Andi Publisher", 2023},
    {69, "Cincin Abadi", "Zahra Fadhilah", "Elex Media", 2021},
    {70, "Kerajaan Awan", "Aldi Kurniawan", "Deepublish", 2023},
    {71, "Anak Bintang", "Benny Arif", "Informatika", 2022},
    {72, "Misteri Dunia Bawah", "Cindy Oktaviani", "Deepublish", 2019},
    {73, "Perjalanan Sang Ksatria", "Dede Pratama", "Graha Ilmu", 2021},
    {74, "Hutan Terlarang", "Eka Rahma", "Deepublish", 2020},
    {75, "Sihir dan Bayangan", "Farhan Maulana", "Informatika", 2022},
    {76, "Kuil Rahasia", "Gina Lestari", "Deepublish", 2023},
    {77, "Kerajaan Gelap", "Hani Rachmawati", "Elex Media", 2021},
    {78, "Naga Terakhir", "Imam Suryadi", "Informatika", 2023},
    {79, "Penjaga Waktu", "Jihan Amalia", "Deepublish", 2022},
    {80, "Putra Langit", "Kevin Santoso", "Graha Ilmu", 2023}
};


Buku daftarsejarah[20] = {
    {81, "Sejarah Nusantara", "Lina Rahayu", "Gramedia", 2018},
    {82, "Kerajaan Majapahit", "Mario Prasetyo", "Deepublish", 2020},
    {83, "Perang Dunia II", "Nia Marlina", "Elex Media", 2021},
    {84, "Sejarah Islam di Indonesia", "Omar Ridwan", "Informatika", 2019},
    {85, "Kerajaan Sriwijaya", "Putra Santosa", "Deepublish", 2021},
    {86, "Peradaban Mesir Kuno", "Rara Kurnia", "Graha Ilmu", 2022},
    {87, "Sejarah Revolusi Industri", "Satria Pradana", "Deepublish", 2023},
    {88, "Perang Kemerdekaan Indonesia", "Tika Nuraini", "Informatika", 2020},
    {89, "Sejarah Dunia Modern", "Ujang Firmansyah", "Elex Media", 2021},
    {90, "Keruntuhan Romawi", "Vera Lestari", "Deepublish", 2023},
    {91, "Sejarah Asia Timur", "Winda Oktaviani", "Informatika", 2022},
    {92, "Sejarah Eropa Kuno", "Yusuf Rahman", "Deepublish", 2020},
    {93, "Sejarah Penjajahan di Indonesia", "Zulfa Maulida", "Graha Ilmu", 2021},
    {94, "Perjalanan Bangsa Indonesia", "Ari Saputra", "Deepublish", 2023},
    {95, "Sejarah Amerika Serikat", "Bella Anggraini", "Informatika", 2020},
    {96, "Kehidupan di Abad Pertengahan", "Cika Novita", "Deepublish", 2022},
    {97, "Sejarah Kerajaan Inggris", "Dani Prasetya", "Elex Media", 2021},
    {98, "Sejarah Dunia Timur Tengah", "Evi Marlina", "Deepublish", 2023},
    {99, "Sejarah Kerajaan Jepang", "Fahmi Syahputra", "Informatika", 2020},
    {100, "Sejarah Peradaban Dunia", "Gilang Ardi", "Deepublish", 2023}
};

int main() {
   int menu, buku, jumlah, genre;
   char ulang;

    //menu utama nya sebelum masuk
    cout << "================================================\n";
    cout << "           PERPUSTAKAAN PADA SUKA\n";
    cout << "================================================\n";

    cout << "1. Pinjam Buku\n";
    cout << "2. Mengembalikan buku\n"; //belum bisa di jalanin (on proses)
    cout << "3. Keluar/Selesai\n"; // on proses
    cout << "================================================\n";
    cout << "pilih menu (1-3): ";
    cin >> menu;
    cout << "\n";

    switch (menu) {
        case 1:
            do {
                //ini menu buat kita milih buku apa aja yang di pinjem sama mau berapa yang di pinjem
                cout << "================================================\n";
                cout << "                 PINJAM BUKU\n";
                cout << "================================================\n" << endl;
                cout << "------------------------------------------------\n"
                     << "                 GENRE LIST\n"
                     << "------------------------------------------------\n"
                     << "1. Romance\n"
                     << "2. Pemrograman\n"
                     << "3. Misteri\n"
                     << "4. Fantasi\n"
                     << "5. Sejarah\n"
                     << "6. Kembali\n" << endl
                     << "------------------------------------------------\n"
                     << "Pilih Genre (1-5) dan (6) untuk Kembali : ";
                cin >> genre;
                cout << "------------------------------------------------\n";
                    
                    
                    switch (genre) {
                        case 1:
                                 for (int i = 0; i < 20; i++) {
                        cout << daftarromance[i].id << ". " 
                             << daftarromance[i].judul << " - " 
                             << daftarromance[i].penulis << ", "
                             << daftarromance[i].tahunterbit << endl;
                        }
        
                        cout << "pilih nomor buku: ";
                        cin >> buku;
        
                        if (buku >= 1 && buku <= 20) {
                           cout << "Anda memilih buku "
                           << daftarromance[buku-1].id << ". "
                           << daftarromance[buku-1].judul << " - "
                           << daftarromance[buku-1].penulis << ", "
                           << daftarromance[buku-1].tahunterbit << endl;
                           
                        } else if (buku == 21) {
                            
                            
                        } else {
                            cout << "pilihan tidak valid\n";
                            ulang = 'y';
                        }
                        
                         cout << "jumlah pinjam buku ini: ";
                            cin >> jumlah;
                            
                            cout << "apakah anda ingin memilih buku lainnya? y/n: ";
                            cin >> ulang;
                        cout << endl;
                    } while (ulang == 'y' || ulang == 'Y');
                    break;
                            
                            
                       
                        case 2:
                                 for (int i = 0; i < 20; i++) {
                        cout << daftarpemrograman[i].id << ". " 
                             << daftarpemrograman[i].judul << " - " 
                             << daftarpemrograman[i].penulis << ", "
                             << daftarpemrograman[i].tahunterbit << endl;
                        }
        
                        cout << "pilih nomor buku: ";
                        cin >> buku;
        
                        if (buku >= 1 && buku <= 20) {
                           cout << "Anda memilih buku "
                           << daftarpemrograman[buku-1].id << ". "
                           << daftarpemrograman[buku-1].judul << " - "
                           << daftarpemrograman[buku-1].penulis << ", "
                           << daftarpemrograman[buku-1].tahunterbit << endl;
                           
                        } else if (buku == 21) {
                            
                            
                        } else {
                            cout << "pilihan tidak valid\n";
                            ulang = 'y';
                        }
                        
                         cout << "jumlah pinjam buku ini: ";
                            cin >> jumlah;
                            
                            cout << "apakah anda ingin memilih buku lainnya? y/n: ";
                            cin >> ulang;
                        cout << endl;
                    } while (ulang == 'y' || ulang == 'Y');
                    break;
                            
                            
                           
                        case 3:
                                 for (int i = 0; i < 20; i++) {
                        cout << daftarmisteri[i].id << ". " 
                             << daftarmisteri[i].judul << " - " 
                             << daftarmisteri[i].penulis << ", "
                             << daftarmisteri[i].tahunterbit << endl;
                        }
        
                        cout << "pilih nomor buku: ";
                        cin >> buku;
        
                        if (buku >= 1 && buku <= 20) {
                           cout << "Anda memilih buku "
                           << daftarmisteri[buku-1].id << ". "
                           << daftarmisteri[buku-1].judul << " - "
                           << daftarmisteri[buku-1].penulis << ", "
                           << daftarmisteri[buku-1].tahunterbit << endl;
                           
                        } else if (buku == 21) {
                            
                            
                        } else {
                            cout << "pilihan tidak valid\n";
                            ulang = 'y';
                        }
                        
                         cout << "jumlah pinjam buku ini: ";
                            cin >> jumlah;
                            
                            cout << "apakah anda ingin memilih buku lainnya? y/n: ";
                            cin >> ulang;
                        cout << endl;
                    } while (ulang == 'y' || ulang == 'Y');
                    break;
                            
                            
                          
                        case 4:
                                 for (int i = 0; i < 20; i++) {
                        cout << daftarfantasi[i].id << ". " 
                             << daftarfantasi[i].judul << " - " 
                             << daftarfantasi[i].penulis << ", "
                             << daftarfantasi[i].tahunterbit << endl;
                        }
        
                        cout << "pilih nomor buku: ";
                        cin >> buku;
        
                        if (buku >= 1 && buku <= 20) {
                           cout << "Anda memilih buku "
                           << daftarfantasi[buku-1].id << ". "
                           << daftarfantasi[buku-1].judul << " - "
                           << daftarfantasi[buku-1].penulis << ", "
                           << daftarfantasi[buku-1].tahunterbit << endl;
                           
                        } else if (buku == 21) {
                            
                            
                        } else {
                            cout << "pilihan tidak valid\n";
                            ulang = 'y';
                        }
                        
                         cout << "jumlah pinjam buku ini: ";
                            cin >> jumlah;
                            
                            cout << "apakah anda ingin memilih buku lainnya? y/n: ";
                            cin >> ulang;
                        cout << endl;
                    } while (ulang == 'y' || ulang == 'Y');
                    break;
                            
                            
                         
                        case 5:
                                 for (int i = 0; i < 20; i++) {
                        cout << daftarsejarah[i].id << ". " 
                             << daftarsejarah[i].judul << " - " 
                             << daftarsejarah[i].penulis << ", "
                             << daftarsejarah[i].tahunterbit << endl;
                        }
        
                        cout << "pilih nomor buku: ";
                        cin >> buku;
        
                        if (buku >= 1 && buku <= 20) {
                           cout << "Anda memilih buku "
                           << daftarsejarah[buku-1].id << ". "
                           << daftarsejarah[buku-1].judul << " - "
                           << daftarsejarah[buku-1].penulis << ", "
                           << daftarsejarah[buku-1].tahunterbit << endl;
                           
                        } else if (buku == 21) {
                            
                            
                        } else {
                            cout << "pilihan tidak valid\n";
                            ulang = 'y';
                        }
                        
                         cout << "jumlah pinjam buku ini: ";
                            cin >> jumlah;
                            
                            cout << "apakah anda ingin memilih buku lainnya? y/n: ";
                            cin >> ulang;
                        cout << endl;
                    } while (ulang == 'y' || ulang == 'Y');
                    break;
                            
                            }
                            break;

        case 2:
            do {
                cout << "================================================\n";
                cout << "              PENGEMBALIAN BUKU\n";
                cout << "================================================\n";
                cout << "LIST BUKU :\n";
                cout << "1. Buku Williams 8th \n";
                cout << "2. Buku Williams 9th \n";
                cout << "3. Buku Williams 10th \n";
                cout << "4. Cara Memahami Wanita\n";
                cout << "5. Cara menjadi miliarder di umur 15 tahun \n";
                cout << "6. Kembali\n";
                cout << "pilih nomor buku yang ingin dikembalikan: ";
                cin >> buku;

                if (buku >= 1 && buku <= 5) {
                    cout << "jumlah buku yang dikembalikan: ";
                    cin >> jumlah;
                    cout << "Buku berhasil dikembalikan! Terima kasih.\n";
                    cout << "Apakah anda ingin mengembalikan buku lainnya? y/n: ";
                    cin >> ulang;
                } else if (buku == 6) {
                    break;
                } else {
                    cout << "Pilihan tidak valid\n";
                    ulang = 'y';
                }
                cout << endl;
            } while (ulang == 'y' || ulang == 'Y');
            break;

        case 3:
            cout << "Terima kasih telah menggunakan layanan perpustakaan.\n";
            break;

        default:
            cout << "Pilihan menu tidak valid!\n";
            break;
    }

 cout << "Terima kasih telah menggunakan layanan perpustakaan.\n";
    return 0;
}
