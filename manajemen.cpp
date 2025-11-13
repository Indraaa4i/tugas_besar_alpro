#include <iostream>
using namespace std;

void pinjamBuku();

void menuPerpustakaan() {
    int pilihan;

    do {
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
                cout << "kamu memilih buku romance\n";
                break;
            case 2:
                cout << "kamu memilih buku pemograman\n";
                break;
            case 3:
                cout << "kamu memilih misteri\n";
                break;
            case 4:
                cout << "fantasi\n";
                break;
            case 5:
                cout << "sejarah\n";
                break;
            case 6:
                cout << "kembali ke menu utama\n";
                break;
            default:
                cout << "pilihan tidak valid\n";
             }

        } while (genre != 6);
}   

    
int main () {
    menuPerpustakaan();

return 0;
}
    
    
    


