using namespace std;

class Input{
    public:
        Input(){}
        void masukin(){
            cout << "Program Menginput Nilai" << endl;
            cout << "========================================" << endl;
            cout << "Masukkan Nama Mahasiswa : ";
            cin >> namaMahasiswa;
            cout << "----------------------------------------" << endl;
            cout << "Masukkan Nama Mata Kuliah : ";
            cin >> namaMatkul;
            cout << "----------------------------------------" << endl;
            for(i=1;i<=3;i++){
                if(i == 1){
                cout << "Masukkan Nilai Tugas : ";
                cin >> nilai[i];
                }else if(i == 2){
                cout << "Masukkan Nilai UTS : ";
                cin >> nilai[i];
                }else{
                cout << "Masukkan Nilai UAS : ";
                cin >> nilai[i];
                }
            }
            cout << "----------------------------------------" << endl;
        }

        void toFile(){
            tulisData.open("apiData.txt");
            tulisData << namaMahasiswa << endl;
            tulisData << namaMatkul << endl;
            for(i=1;i<=3;i++){
                if(i == 3){
                    tulisData << nilai[i];
                }else{
                    tulisData << nilai[i] << endl;
                }
            }
            tulisData.close();
        }

    private:
        ofstream tulisData;
        string namaMahasiswa, namaMatkul;
        int ambil, i;
        float nilai[100];
};
