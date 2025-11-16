#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

struct buku {
    int id;
    string judul;
    string penulis;
    string penerbit;
    int tahunterbit;
};

struct Peminjaman {
    string namaPeminjam;
    string judul;
    string penulis;
    string penerbit;
    int tahun;
    string tanggalPinjam;
    string tanggalKembali;
};

string getTanggal(int tambahHari = 0) {
    time_t now = time(nullptr);
    now += tambahHari * 24 * 60 * 60;

    tm *ltm = localtime(&now);

    char buffer[20];
    sprintf(buffer, "%02d-%02d-%d", 
            ltm->tm_mday, 
            ltm->tm_mon + 1, 
            1900 + ltm->tm_year);

    return string(buffer);
}

vector<buku> romanceList = {
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

vector<buku>  pemrogramanList ={
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

vector<buku> misteriList {
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

vector<buku> fantasiList {
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

vector<buku> sejarahList {
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

void menuPerpustakaan();
void pinjamBuku();
void listRomance();
void listPemrograman();
void listMisteri();
void listFantasi();
void listSejarah();
void pauseScreen();

void pauseScreen () {
     cout << "\nTekan ENTER untuk kembali...";
     cin.ignore();
     cin.get();
};

void menuPerpustakaan() {
    int pilihan;

    do {
        system("cls"); 
        cout << "================================================\n";
        cout << "           PERPUSTAKAAN PADA SUKA\n";
        cout << "================================================\n";

        cout << "1. Pinjam Buku\n";
        cout << "2. Mengembalikan buku\n"; //belum bisa di jalanin (on proses)
        cout << "3. Keluar/Selesai\n"; // on proses
        cout << "================================================\n";
        cout << "pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            pinjamBuku();
            break;
        
        case 2:
            cout << "mengembalikan buku\n";
            break;
        case 3:
            cout << "keluar";
            break;
        default:
            cout << " pilihan tidak valid";
        }
    } while (pilihan != 3);
}   


void pinjamBuku() {
    int genre;
    
    do {
        system("cls"); 
        cout << "================================================\n";
        cout << "                 PINJAM BUKU\n";
        cout << "================================================\n";
        cout << endl;
        cout << "------------------------------------------------\n";
        cout << "                 GENRE LIST\n";
        cout << "------------------------------------------------\n";
        cout << "1. Romance\n";
        cout << "2. Pemrograman\n";
        cout << "3. Misteri\n";
        cout << "4. Fantasi\n";
        cout << "5. Sejarah\n";
        cout << "6. Kembali\n" ;
        cout << "------------------------------------------------\n";
        cout << "Pilih Genre (1-5) dan (6) untuk Kembali : ";
        cin >> genre;

        switch (genre) {
            case 1:
                listRomance();
                break;
            case 2:
                listPemrograman();
                break;
            case 3:
                listMisteri();
                break;
            case 4:
                listFantasi();
                break;
            case 5:
                listSejarah();
                break;
            case 6:
                cout << "kembali ke menu utama\n";
                break;
            default:
                cout << "pilihan tidak valid\n";
             }

    } while (genre != 6);
}   

void listRomance() {
    system("cls"); 
    int pilih;
        cout << "================================================\n";
        cout << "                 ROMANCE LIST\n";
        cout << "================================================\n";
        
        for (const auto& buku : romanceList) {
        cout << buku.id << ". " << buku.judul
             << " - " << buku.penulis
             << " - " << buku.penerbit
             << " - " << buku.tahunterbit << endl;
    }

        cout << "------------------------------------------------\n";

    cout << "masukan ID buku yang ingin di pinjam: ";
    cin >> pilih;

    if(pilih > 0 && pilih <= 20) {

       buku dipilih = romanceList[pilih - 1];
            Peminjaman struk;
            
            cout << "Masukkan nama sebelum meminjam buku : ";
            cin.ignore();
            getline(cin, struk.namaPeminjam);
            
            struk.judul = dipilih.judul;
            struk.penulis = dipilih.penulis;
            struk.penerbit = dipilih.penerbit;
            struk.tahun = dipilih.tahunterbit;

            struk.tanggalPinjam = getTanggal();      
            struk.tanggalKembali = getTanggal(7);    

            cout << "\n========== DETAIL PEMINJAMAN ==========\n";
            cout << "Nama peminjam  : " << struk.namaPeminjam << endl;
            cout << "Judul Buku     : " << struk.judul << endl;
            cout << "Penulis        : " << struk.penulis << endl;
            cout << "Penerbit       : " << struk.penerbit << endl;
            cout << "Tahun Terbit   : " << struk.tahun << endl;
            cout << "---------------------------------------\n";
            cout << "Tanggal Pinjam : " << struk.tanggalPinjam << endl;
            cout << "Tanggal Kembali: " << struk.tanggalKembali << endl;
            cout << "=======================================\n";

    } else {
        cout << "ID tidak valid\n";
    }

    pauseScreen();
}

void listPemrograman () {
    system("cls"); 
    int pilih;
        cout << "================================================\n";
        cout << "               PEMROGRAMAN LIST\n";
        cout << "================================================\n";
        
        for (const auto& buku : pemrogramanList) {
        cout << buku.id << ". " << buku.judul
             << " - " << buku.penulis
             << " - " << buku.penerbit
             << " - " << buku.tahunterbit << endl;
    }

        cout << "------------------------------------------------\n";

    cout << "masukan ID buku yang ingin di pinjam: ";
    cin >> pilih;

    if(pilih > 21 && pilih <= 40) {
         buku dipilih = pemrogramanList[pilih - 21];
            Peminjaman struk;

            cout << "Masukkan nama sebelum meminjam buku : ";
            cin.ignore();
            getline(cin, struk.namaPeminjam);
            
            struk.judul = dipilih.judul;
            struk.penulis = dipilih.penulis;
            struk.penerbit = dipilih.penerbit;
            struk.tahun = dipilih.tahunterbit;

            struk.tanggalPinjam = getTanggal();      
            struk.tanggalKembali = getTanggal(7);    

            cout << "\n========== DETAIL PEMINJAMAN ==========\n";
            cout << "Nama peminjam  : " << struk.namaPeminjam << endl;
            cout << "Judul Buku     : " << struk.judul << endl;
            cout << "Penulis        : " << struk.penulis << endl;
            cout << "Penerbit       : " << struk.penerbit << endl;
            cout << "Tahun Terbit   : " << struk.tahun << endl;
            cout << "---------------------------------------\n";
            cout << "Tanggal Pinjam : " << struk.tanggalPinjam << endl;
            cout << "Tanggal Kembali: " << struk.tanggalKembali << endl;
            cout << "=======================================\n";
    } else {
        cout << "ID tidak valid\n";
    }

    pauseScreen();
}
    
void listMisteri () {
    system("cls"); 
    int pilih;
        cout << "================================================\n";
        cout << "               MISTERI LIST\n";
        cout << "================================================\n";
        
        for (const auto& buku : misteriList) {
        cout << buku.id << ". " << buku.judul
             << " - " << buku.penulis
             << " - " << buku.penerbit
             << " - " << buku.tahunterbit << endl;
    }

        cout << "------------------------------------------------\n";

    cout << "masukan ID buku yang ingin di pinjam: ";
    cin >> pilih;

    if(pilih > 41 && pilih <= 60) {
         buku dipilih = misteriList[pilih - 41];
            Peminjaman struk;

            cout << "Masukkan nama sebelum meminjam buku : ";
            cin.ignore();
            getline(cin, struk.namaPeminjam);

            struk.judul = dipilih.judul;
            struk.penulis = dipilih.penulis;
            struk.penerbit = dipilih.penerbit;
            struk.tahun = dipilih.tahunterbit;

            struk.tanggalPinjam = getTanggal();      
            struk.tanggalKembali = getTanggal(7);    

            cout << "\n========== DETAIL PEMINJAMAN ==========\n";
            cout << "Nama peminjam  : " << struk.namaPeminjam << endl;
            cout << "Judul Buku     : " << struk.judul << endl;
            cout << "Penulis        : " << struk.penulis << endl;
            cout << "Penerbit       : " << struk.penerbit << endl;
            cout << "Tahun Terbit   : " << struk.tahun << endl;
            cout << "---------------------------------------\n";
            cout << "Tanggal Pinjam : " << struk.tanggalPinjam << endl;
            cout << "Tanggal Kembali: " << struk.tanggalKembali << endl;
            cout << "=======================================\n";
    } else {
        cout << "ID tidak valid\n";
    }

    pauseScreen();
}

void listFantasi () {
    system("cls"); 
    int pilih;
        cout << "================================================\n";
        cout << "               FANTASI LIST\n";
        cout << "================================================\n";
        
        for (const auto& buku : fantasiList) {
        cout << buku.id << ". " << buku.judul
             << " - " << buku.penulis
             << " - " << buku.penerbit
             << " - " << buku.tahunterbit << endl;
    }

        cout << "------------------------------------------------\n";

    cout << "masukan ID buku yang ingin di pinjam: ";
    cin >> pilih;

    if(pilih > 61 && pilih <= 80) {
         buku dipilih = fantasiList[pilih - 61];
            Peminjaman struk;

            cout << "Masukkan nama sebelum meminjam buku : ";
            cin.ignore();
            getline(cin, struk.namaPeminjam);

            struk.judul = dipilih.judul;
            struk.penulis = dipilih.penulis;
            struk.penerbit = dipilih.penerbit;
            struk.tahun = dipilih.tahunterbit;

            struk.tanggalPinjam = getTanggal();      
            struk.tanggalKembali = getTanggal(7);    

            cout << "\n========== DETAIL PEMINJAMAN ==========\n";
            cout << "Nama peminjam  : " << struk.namaPeminjam << endl;
            cout << "Judul Buku     : " << struk.judul << endl;
            cout << "Penulis        : " << struk.penulis << endl;
            cout << "Penerbit       : " << struk.penerbit << endl;
            cout << "Tahun Terbit   : " << struk.tahun << endl;
            cout << "---------------------------------------\n";
            cout << "Tanggal Pinjam : " << struk.tanggalPinjam << endl;
            cout << "Tanggal Kembali: " << struk.tanggalKembali << endl;
            cout << "=======================================\n";
    } else {
        cout << "ID tidak valid\n";
    }

    pauseScreen();
}

void listSejarah () {
     system("cls"); 
    int pilih;
        cout << "================================================\n";
        cout << "               FANTASI LIST\n";
        cout << "================================================\n";
        
        for (const auto& buku : sejarahList) {
        cout << buku.id << ". " << buku.judul
             << " - " << buku.penulis
             << " - " << buku.penerbit
             << " - " << buku.tahunterbit << endl;
    }

        cout << "------------------------------------------------\n";

    cout << "masukan ID buku yang ingin di pinjam: ";
    cin >> pilih;

    if(pilih > 81 && pilih <= 100) {
         buku dipilih = sejarahList[pilih - 81];
            Peminjaman struk;

            cout << "Masukkan nama sebelum meminjam buku : ";
            cin.ignore();
            getline(cin, struk.namaPeminjam);

            struk.judul = dipilih.judul;
            struk.penulis = dipilih.penulis;
            struk.penerbit = dipilih.penerbit;
            struk.tahun = dipilih.tahunterbit;

            struk.tanggalPinjam = getTanggal();      
            struk.tanggalKembali = getTanggal(7);    

            cout << "\n========== DETAIL PEMINJAMAN ==========\n";
            cout << "Nama peminjam  : " << struk.namaPeminjam << endl;
            cout << "Judul Buku     : " << struk.judul << endl;
            cout << "Penulis        : " << struk.penulis << endl;
            cout << "Penerbit       : " << struk.penerbit << endl;
            cout << "Tahun Terbit   : " << struk.tahun << endl;
            cout << "---------------------------------------\n";
            cout << "Tanggal Pinjam : " << struk.tanggalPinjam << endl;
            cout << "Tanggal Kembali: " << struk.tanggalKembali << endl;
            cout << "=======================================\n";
    } else {
        cout << "ID tidak valid\n";
    }

    pauseScreen();
}

int main () {
    menuPerpustakaan();

return 0;
}
    
    
    


