// judul: playlist spotify
#include <iostream>
using namespace std;

// kamus
struct lagu
{
    string judul;
    int durasi;
};
void playlistlagu(lagu playlist[], int &totallagu)
{
    totallagu = 5;
    playlist[0] = {"pelangi", 217};
    playlist[1] = {"orang ke 3", 269};
    playlist[2] = {"jakarta hari ini", 225};
    playlist[3] = {"serana", 287};
    playlist[4] = {"mawar jingga", 217};
}

void tampilkan(lagu playlist[], int totallagu)
{
    cout << "Menampilkan playlist " << endl;
    cout << "nama playlist : kitheart" << endl;
    for (int i = 0; i < totallagu; i++)
    {
        cout << playlist[i].judul << " " << playlist[i].durasi << " detik" << endl;
    }
    cout << endl;
}
void putarplaylist(lagu playlist[], int jumlahlagu, int ngulang, int totallagu)
{
    cout << "Memulai playlist musik..." << endl;
    cout << endl;
    if (jumlahlagu <= totallagu)
    {
        for (int i = 0; i < ngulang; i++)
        {
            for (int j = 0; j < jumlahlagu; j++)
            {
                cout << "Memutar lagu: " << playlist[j].judul << " (" << playlist[j].durasi << " detik)" << endl;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Melebihi jumlah lagu di playlist" << endl;
    }
    cout << "Playlist selesai diputar." << endl;
}

int durasi1, durasi2, durasi3, durasi4, durasi5;
string judul1, judul2, judul3, judul4, judul5;
int i, j;
int ngulang;    // Jumlah kali playlist akan diulang

// diskripsi
int main()
{
    int totallagu;
    lagu playlist[100];
    playlistlagu(playlist, totallagu);
    tampilkan(playlist, totallagu);
    int jumlahlagu;
    cout << "Berapa lagu yang ingin kamu putar?" << endl;
    cin >> jumlahlagu;
    cout << "Berapa kali ingin diulang?" << endl;
    cin >> ngulang;
    cout << endl; 
    putarplaylist(playlist, jumlahlagu, ngulang, totallagu);
    return 0;
}