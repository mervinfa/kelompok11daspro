#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan informasi lagu
struct Lagu {
    string judul;
    int durasi;
};

// Fungsi untuk menginisialisasi playlist
void inisialisasiPlaylist(Lagu playlist[], int &totallagu) {
    totallagu = 5; // Jumlah lagu dalam playlist
    
    // Inisialisasi lagu
    playlist[0] = {"Pelangi", 217};
    playlist[1] = {"Orang ke 3", 269};
    playlist[2] = {"Jakarta Hari Ini", 225};
    playlist[3] = {"Serana", 287};
    playlist[4] = {"Mawar Jingga", 219};
}

// Fungsi untuk menampilkan playlist
void tampilkanPlaylist(Lagu playlist[], int totallagu) {
    cout << "Tampilkan playlist" << endl;
    cout << "Nama playlist: kitheart" << endl;
    for (int i = 0; i < totallagu; i++) {
        cout << playlist[i].judul << " (" << playlist[i].durasi << " detik)" << endl;
    }
    cout << endl;
}

// Fungsi untuk memutar playlist
void putarPlaylist(Lagu playlist[], int jumlahlagu, int ngulang, int totallagu) {
    cout << "Memulai playlist musik..." << endl;
    cout << endl;
    if (jumlahlagu <= totallagu) { // Mengulang playlist sebanyak ngulang
        for (int i = 0; i < ngulang; i++) {
            for (int j = 0; j < jumlahlagu; j++) {
                cout << "Memutar lagu: " << playlist[j].judul 
                     << " (" << playlist[j].durasi << " detik)" << endl;
            }
            cout << endl;
        }
    } else {
        cout << "Melebihi jumlah lagu di playlist" << endl;
    }
    cout << "Playlist selesai diputar." << endl;
}

// Fungsi utama
int main() {
    int totallagu;
    Lagu playlist[100]; // Array untuk menyimpan hingga 100 lagu
    inisialisasiPlaylist(playlist, totallagu);

    tampilkanPlaylist(playlist, totallagu);

    int jumlahlagu; // Jumlah lagu dalam playlist
    int ngulang;    // Jumlah kali playlist akan diulang

    cout << "Berapa lagu yang ingin kamu putar?" << endl;
    cin >> jumlahlagu;
    cout << "Berapa kali ingin diulang?" << endl;
    cin >> ngulang;
    cout << endl;

    putarPlaylist(playlist, jumlahlagu, ngulang, totallagu);

    return 0;
}
