using namespace std;

class Output{
    public:
        void getData(){
            ambil_data.open("apiData.txt");
            ambil = 1;
            while(!ambil_data.eof()){
                if(ambil == 1){
                    ambil_data >> namaMahasiswa;
                }else if(ambil == 2){
                    ambil_data >> namaMatkul;
                }else if(ambil == 3){
                    for(i=1;i<=3;i++){
                        ambil_data >> nilai[i];
                    }
                }else if(ambil == 4){
                    ambil_data >> nilaiMax;
                }else if(ambil == 5){
                    ambil_data >> nilaiMin;
                }else{
                    ambil_data >> nilaiAkhir;
                }
                ambil += 1;
            }
            ambil_data.close();
        }

        void cetak(){
            cout << "Nama Mahasiswa = " << namaMahasiswa << endl;
            cout << "Nama Mata Kuliah = " << namaMatkul << endl;
            cout << "Daftar Nilai : " <<endl;
            for(i=1;i<=3;i++){
                if(i == 1){
                    cout << "Masukkan Nilai Tugas = " << nilai[i] << endl;
                }else if(i == 2){
                    cout << "Masukkan Nilai UTS = " << nilai[i] << endl;
                }else{
                    cout << "Masukkan Nilai UAS = " << nilai[i] << endl;
                }
            }
            cout << "Nilai Minimum = " << nilaiMin << endl;
            cout << "Nilai Maksimum = " << nilaiMax << endl;
            cout << "Nilai Akhir = " << nilaiAkhir;
        }

    private:
        ifstream ambil_data;
        string namaMahasiswa, namaMatkul;
        int ambil, i;
        float nilai[100], nilaiMin, nilaiMax, nilaiAkhir;
};
