// judul: playlist spotify
#include <iostream>
using namespace std;

// kamus
int durasi1, durasi2, durasi3, durasi4, durasi5;
string judul1, judul2, judul3, judul4, judul5;
int i, j;
int jumlahlagu; // Jumlah lagu dalam playlist
int ngulang;    // Jumlah kali playlist akan diulang
int totallagu;

// diskripsi
int main()
{
// 1.Pelangi// 217
// 2.orng ke 3// 269
// 3.Jakarta hari ini//225
// 4.serana// 287
// 5.mawar jingga//219
// lagu dan durasinya
    judul1 = "Pelangi";
    durasi1 = 217;

    judul2 = "Orang ke 3";
    durasi2 = 269;

    judul3 = "Jakarta Hari Ini";
    durasi3 = 225;

    judul4 = "Serana";
    durasi4 = 287;

    judul5 = "Mawar Jingga";
    durasi5 = 219;



    // tampilkan playlist
    cout << "tampilkan playlist " << endl;
    cout << "Nama playlist : kitheart"<<endl;
    cout << judul1 << endl;
    cout << judul2 << endl;
    cout << judul3 << endl;
    cout << judul4 << endl;
    cout << judul5 << endl;
    cout << endl;

    cout << "berapa lagu yang ingin kamu putar?" << endl;
    cin >> jumlahlagu;
    cout << "berapa kali ingin di ulang?" << endl;
    cin >> ngulang;
    cout << endl;

    // Memulai pemutaran playlist
    cout << "Memulai playlist musik..." << endl;
    cout << endl;

totallagu=5;
if(jumlahlagu<=totallagu)
{

    for (i = 0; i < ngulang; i++)
    { // Mengulang playlist sebanyak ngulang
        
        switch (jumlahlagu)
        {
        case 1:
            cout << "Memutar lagu: " << judul1 << " (" << durasi1 << " detik)" << endl;
            cout<<endl;
            break;
        case 2:
            cout << "Memutar lagu: " << judul1 << " (" << durasi1 << " detik)" << endl;
            cout << "Memutar lagu: " << judul2 << " (" << durasi2 << " detik)" << endl;
            cout << endl;
            break;
        case 3:
            cout << "Memutar lagu: " << judul1 << " (" << durasi1 << " detik)" << endl;
            cout << "Memutar lagu: " << judul2 << " (" << durasi2 << " detik)" << endl;
            cout << "Memutar lagu: " << judul3 << " (" << durasi3 << " detik)" << endl;
            cout << endl;
            break;
        case 4:
            cout << "Memutar lagu: " << judul1 << " (" << durasi1 << " detik)" << endl;
            cout << "Memutar lagu: " << judul2 << " (" << durasi2 << " detik)" << endl;
            cout << "Memutar lagu: " << judul3 << " (" << durasi3 << " detik)" << endl;
            cout << "Memutar lagu: " << judul4 << " (" << durasi4 << " detik)" << endl;
            cout << endl;
            break;
        case 5:
            cout << "Memutar lagu: " << judul1 << " (" << durasi1 << " detik)" << endl;
            cout << "Memutar lagu: " << judul2 << " (" << durasi2 << " detik)" << endl;
            cout << "Memutar lagu: " << judul3 << " (" << durasi3 << " detik)" << endl;
            cout << "Memutar lagu: " << judul4 << " (" << durasi4 << " detik)" << endl;
            cout << "Memutar lagu: " << judul5 << " (" << durasi5 << " detik)" << endl;
            cout << endl;
            break;
        case 6:
            cout << "melebihi jumlah lagu di playlist" << endl;
        }
    }
}
else
{
    cout << "melebihi jumlah lagu di playlist" << endl;
    cout << endl;
    cout << "Playlist selesai diputar." << endl;
    return 0;
}


    cout << "Playlist selesai diputar." << endl;

    return 0;
}