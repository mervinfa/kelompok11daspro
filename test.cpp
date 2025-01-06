#include <iostream>
using namespace std;

struct lagu {
    string judul;
    int durasi;
};

void playlistlagu(lagu playlist[], int &totallagu) {
    totallagu = 5;
    playlist[0] = {"pelangi", 217};
    playlist[1] = {"orang ke 3", 269};
    playlist[2] = {"jakarta hari ini", 225};
    playlist[3] = {"serana", 287};
    playlist[4] = {"mawar jingga", 217};
}

void tampilkan(lagu playlist[], int &totallagu) {
    cout << "Menampilkan playlist " << endl;
    cout << "Nama playlist : kitheart" << endl;
    for (int i = 0; i < totallagu; i++) {

        cout << i + 1 << ". " << playlist[i].judul << " " << playlist[i].durasi/60 << " menit " << playlist[i].durasi%60 << " detik"<< endl;
    }
    cout << endl;
}

void putarplaylist(lagu playlist[], int memilihlagu[], int ngulang, int totallagu, int jumlahlagu) {
    int totalDurasi = 0;
    cout << "Memulai playlist musik..." << endl;
    cout << endl;
    for (int i = 0; i < ngulang; i++) {
        for (int j = 0; j < jumlahlagu; j++) {
            int pilihlagu = memilihlagu[j];
            if (pilihlagu < totallagu) {
                cout << "Memutar lagu: " << playlist[pilihlagu].judul << " " << playlist[i].durasi/60 << " menit " << playlist[i].durasi%60 << " detik"<< endl;
                totalDurasi += playlist[pilihlagu].durasi;
            } else {
                cout << "Indeks lagu " << pilihlagu << " melebihi jumlah lagu di playlist." << endl;
            }
        }
        cout << endl;
    }
    cout << "Total durasi lagu yang diputar: " << totalDurasi/60 << " menit " << totalDurasi%60 << " detik." << endl;
    cout << "Playlist selesai diputar." << endl;
}

int main() {
    int totallagu;
    lagu playlist[100];
    playlistlagu(playlist, totallagu);
    tampilkan(playlist, totallagu);

    int jumlahlagu;
    cout << "Berapa lagu yang ingin kamu putar?" << endl;
    cin >> jumlahlagu;

    int memilihlagu[jumlahlagu];
    cout << "Masukkan lagu yang ingin diputar ke dalam Query (dimulai dari 1):" << endl;
    for (int i = 0; i < jumlahlagu; i++) {
        cin >> memilihlagu[i];
        memilihlagu[i]--; 
    }

    int ngulang;
    cout << "Berapa kali ingin diulang?" << endl;
    cin >> ngulang;
    cout << endl;

    putarplaylist(playlist, memilihlagu, ngulang, totallagu, jumlahlagu);

    return 0;
}
