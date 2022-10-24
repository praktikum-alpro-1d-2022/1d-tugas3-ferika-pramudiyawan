#include <iostream>
#include <math.h>
using namespace std;

main(){
       float sisi_miring,alas,tinggi;
       cout << "Menghitung sisi miring segitiga siku-siku\n";
       cout<<"masukkan nilai alas = ";
       cin>>alas;
       cout<<"masukkan nilai tinggi = ";
       cin>>tinggi;
       sisi_miring=sqrt(pow(alas,2)+pow(tinggi,2));
       cout<<"jadi hasilnya adalah = "<<sisi_miring;
       return 0;
}
