#include <iostream>
using namespace std;

class Matakuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    Matakuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() { return 0; }
    virtual void cekKelulusan() { return 0; }
    virtual void input() { return 0; }

    void setPresensi(float nilai) {
        this->presensi = nilai;
    }
    float getPresensi() {
        return presensi;
    }

    void setActivity(float nilai) {
        this->activity = nilai;
    }
    float getActivity() {
        return activity;
    }
    void setExercise(float nilai) {
        this->exercise = nilai;
    }
    float getExercise() {
        return exercise;
    }
    void setTugasAkhir(float nilai) {
        this->tugasAkhir = nilai;
    }
    float getTugasAkhir() {
        return tugasAkhir;
    }
};

class pemograman : public Matakuliah {
public :
    pemograman() : Matakuliah() {}

    float hitungNilaiAkhir()override {
        return(getPresensi() * 0.1) + (getActivity() * 0.2) + (getExercise() * 0.3) + (getTugasAkhir() * 0.4);
    }

    void cekKelulusan() override {
        float nilaiAkhir = hitungNilaiAkhir();
        cout << "Hasil Akhir" << endl;
        cout << "Masukkan nilai Presensi: " << getPresensi() << endl;
        cout << "Masukkan nilai Activity: " << getActivity() << endl;
        cout << "Masukkan nilai Exercise: " << getExercise() << endl;
        cout << "Masukkan nilai Tugas Akhir: " << getTugasAkhir() << endl;
        cout << "Nilai Akhir: " << nilaiAkhir << endl;

        if (nilaiAkhir > 75) {
            cout << "Selamat, anda lulus matakuliah Pemograman dengan nilai akhir " << nilaiAkhir << endl;
        }
        else {
            cout << "Maaf, anda tidak lulus mata kuliah pemograman" << endl;
        }

    }

    void input() {
        cout << "Masukan nilai presensi :";
        cin >> setPresensi;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

