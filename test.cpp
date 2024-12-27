#include <iostream>
#include <string>
using namespace std;

// Kamus
struct Lagu {
    string judul;
    int durasi;
};

struct Playlist {
    Lagu lagu[5];
    int jumlahlagu; // Jumlah lagu dalam playlist
    int ngulang;    // Jumlah kali playlist akan diulang
};

// Fungsi untuk menginisialisasi playlist
void inisialisasiPlaylist(Playlist &playlist) {
    playlist.lagu[0] = {"Pelangi", 217};
    playlist.lagu[1] = {"Orang ke 3", 269};
    playlist.lagu[2] = {"Jakarta Hari Ini", 225};
    playlist.lagu[3] = {"Serana", 287};
    playlist.lagu[4] = {"Mawar Jingga", 219};
}

// Fungsi untuk menampilkan playlist
void tampilkanPlaylist(const Playlist &playlist) {
    cout << "Tampilkan playlist " << endl;
    cout << "Nama playlist : kitheart" << endl;
    for (int i = 0; i < 5; i++) {
        cout << playlist.lagu[i].judul << endl;
    }
    cout << endl;
}

// Fungsi untuk memutar playlist
void putarPlaylist(const Playlist &playlist) {
    cout << "Memulai playlist musik..." << endl;
    cout << endl;
    if (playlist.jumlahlagu <= 5) {
        for (int i = 0; i < playlist.ngulang; i++) { // Mengulang playlist sebanyak ngulang
            for (int j = 0; j < playlist.jumlahlagu; j++) {
                cout << "Memutar lagu: " << playlist.lagu[j].judul 
                     << " (" << playlist.lagu[j].durasi << " detik)" << endl;
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
    Playlist playlist;
    inisialisasiPlaylist(playlist);

    tampilkanPlaylist(playlist);

    cout << "Berapa lagu yang ingin kamu putar?" << endl;
    cin >> playlist.jumlahlagu;
    cout << "Berapa kali ingin diulang?" << endl;
    cin >> playlist.ngulang;
    cout << endl;

    putarPlaylist(playlist);

    return 0;
}
