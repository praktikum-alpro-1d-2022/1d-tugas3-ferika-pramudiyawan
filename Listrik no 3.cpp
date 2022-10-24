#include <iostream>

using namespace std;

int main(){
    double I, V, R;
    cout << "menghitung arus" << endl;
    cout << "masukan tegangan =" ;
    cin >> V;
    cout << "masukan hambatan =" ;
    cin >> R;
    I = V/R;
    cout << "hasil nya =" << I << endl ;

    cout << "menghitung tegangan" << endl;
    cout << "masukan Arus =";
    cin >> I,
    cout << "masukan hambatan =" ;
    cin >> R;
    V = I*R;
    cout << " hasilnya =" << V << endl;

    cout << "menghitung hambatan" << endl;
    cout << "masukan tegangan =" ;
    cin >> V;
    cout << "masukan Arus =" ;
    cin >> I;
    R = V/I;
    cout << "hasilnya =" << R;
    return 0;
}
