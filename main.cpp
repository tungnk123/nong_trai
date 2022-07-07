#include <iostream>
using namespace std;

class TrangTrai{
public:
    int soluongbo, soluongcuu, soluongde;
    int luot;
    void Nhap(){
        cin >> soluongbo >> soluongcuu >> soluongde >> luot;
    }
    void Keu(){
        for (int i = 0; i < soluongbo; i++){
            cout << "Booo" << ",";
        }
        for (int i = 0; i < soluongcuu; i++){
            cout << "Beee" << ",";
        }
        for (int i = 0; i < soluongde; i++){
            cout << "Eeee" ;
            if (i != soluongde - 1 ) cout << ",";
        }
        cout << endl;

    }
    void TinhSua(){
        cout << "Bo: " << soluongbo * 10 * luot << endl;
        cout << "Cuu: " << soluongbo * 5 * luot << endl;
        cout << "De: " << soluongbo * 8 * luot << endl;
    }
};

int main(){

    TrangTrai tt;
    tt.Nhap();
    tt.Keu();
    tt.TinhSua();
}
