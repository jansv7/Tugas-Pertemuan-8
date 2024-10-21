#include <iostream>
using namespace std;

struct Zodiak {
    string nama;
    int mulaiHari, mulaiBulan;
    int akhirHari, akhirBulan;
};

Zodiak zodiak[]={
    {"CAPRICORN", 22, 12, 19, 1},
    {"AQUARIUS", 20, 1, 18, 2},
    {"PISCES", 19, 2, 20, 3},
    {"ARIES", 21, 3, 19, 4},
    {"TAURUS", 20, 4, 20, 5},
    {"GEMINI", 21, 5, 20, 6},
    {"CANCER", 21, 6, 22, 7},
    {"LEO", 23, 7, 22, 8},
    {"VIRGO", 23, 8, 22, 9},
    {"LIBRA", 23, 9, 22, 10},
    {"SCORPIO", 23, 10, 21, 11},
    {"SAGITTARIUS", 22, 11, 21, 12}
};
void tentukanZodiak(int hari, int bulan) {
    for (int i=0; i<12; i++) {
        if ((bulan==zodiak[i].mulaiBulan&&hari>=zodiak[i].mulaiHari) ||
            (bulan == zodiak[i].akhirBulan&&hari<=zodiak[i].akhirHari)) {
            cout << "Zodiak Anda adalah: " << zodiak[i].nama << endl;
            return;
        }
    }
    cout << "Zodiak Anda tidak ditemukan." << endl;
}

int main() {
    int hari, bulan, tahun;
    char strip;

    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    cin >> hari >> strip >> bulan >> strip >> tahun;

    tentukanZodiak(hari, bulan);

    return 0;
}
