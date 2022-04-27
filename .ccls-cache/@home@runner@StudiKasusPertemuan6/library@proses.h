using namespace std;

class Proses{
    public:
        Proses(){}
        void getData(){
            ambil_data.open("apiData.txt");
            ambil = 1;
            while(!ambil_data.eof()){
                if(ambil == 1){
                    ambil_data >> namaMahasiswa;
                }else if(ambil == 2){
                    ambil_data >> namaMatkul;
                }else{
                    for(i=1;i<=3;i++){
                        ambil_data >> nilai[i];
                    }
                }
                ambil += 1;
            }
            ambil_data.close();
        }

        void hitung(){
            for(i=1;i<=3;i++){
                if(i == 1){
                    nilaiMax = nilai[i];
                    nilaiMin = nilai[i];
                }else{
                    if(nilai[i] > nilaiMax){
                        nilaiMax = nilai[i];
                    }
                    if(nilai[i] < nilaiMin){
                        nilaiMin = nilai[i];
                    }
                }
                if(i == 1){
                    nilaiAkhir += 0.2 * nilai[i];
                }else if(i == 2){

                    nilaiAkhir += 0.35 * nilai[i];
                }else{
                    nilaiAkhir += 0.45 * nilai[i];
                }
            }
        }

        void toFile(){
            tulis_data.open("apiData.txt");
            tulis_data << namaMahasiswa << endl;
            tulis_data << namaMatkul << endl;
            for(i=1;i<=3;i++){
                tulis_data << nilai[i] << endl;
            }
            tulis_data << nilaiMax << endl;
            tulis_data << nilaiMin << endl;
            tulis_data << nilaiAkhir;
            tulis_data.close();
        }

    private:
        ifstream ambil_data;
        ofstream tulis_data;
        string namaMahasiswa, namaMatkul;
        int ambil, i;
        float nilai[100], nilaiMin, nilaiMax, uts, uas, tugas, nilaiAkhir = 0;
};