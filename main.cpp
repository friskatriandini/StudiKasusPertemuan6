#include<iostream>
#include<fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;

int main(){
    Input objectInput = Input();
    objectInput.masukin();
    objectInput.toFile();

    Proses objectProses = Proses();
    objectProses.getData();
    objectProses.hitung();
    objectProses.toFile();

    Output objectOutput = Output();
    objectOutput.getData();
    objectOutput.cetak();

    return 0;
}
