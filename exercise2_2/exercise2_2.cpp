#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pengarang;
class Penerbit;
class Buku;

class Pengarang {
private:
    string nama;
    vector<Penerbit*> penerbit;
    vector<Buku*> buku;

public:
    Pengarang(string nama) : nama(nama) {}

    void tambahPenerbit(Penerbit* p) {
        penerbit.push_back(p);
    }

    void tambahBuku(Buku* b) {
        buku.push_back(b);
    }

    string getNama() {
        return nama;
    }

    vector<Penerbit*> getPenerbit() {
        return penerbit;
    }

    vector<Buku*> getBuku() {
        return buku;
    }
};

class Penerbit {
private:
    string nama;
    vector<Pengarang*> pengarang;

public:
    Penerbit(string nama) : nama(nama) {}

    void tambahPengarang(Pengarang* p) {
        pengarang.push_back(p);
    }

    string getNama() {
        return nama;
    }

    vector<Pengarang*> getPengarang() {
        return pengarang;
    }
};

class Buku {
private:
    string judul;
    vector<Pengarang*> pengarang;

public:
    Buku(string judul) : judul(judul) {}

    void tambahPengarang(Pengarang* p) {
        pengarang.push_back(p);
    }

    string getJudul() {
        return judul;
    }

    vector<Pengarang*> getPengarang() {
        return pengarang;
    }
};

int main() {
    Pengarang joko("Joko");
    Pengarang lia("Lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");

    Penerbit gama_press("Gama Press");
    Penerbit intan_pariwara("Intan Pariwara");

    Buku fisika("Fisika");
    Buku algoritma("Algoritma");
    Buku basisdata("Basisdata");
    Buku dasar_pemrograman("Dasar Pemrograman");
    Buku matematika("Matematika");
    Buku multimedia_1("Multimedia 1");

    joko.tambahPenerbit(&gama_press);
    joko.tambahPenerbit(&intan_pariwara);
    lia.tambahPenerbit(&gama_press);
    giga.tambahPenerbit(&gama_press);
    giga.tambahPenerbit(&intan_pariwara);

    joko.tambahBuku(&fisika);
    joko.tambahBuku(&algoritma);
    lia.tambahBuku(&basisdata);
    asroni.tambahBuku(&dasar_pemrograman);
    giga.tambahBuku(&matematika);
    giga.tambahBuku(&multimedia_1);

    return 0;

}
    
