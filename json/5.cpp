#include <iostream>
#include <stdio.h>


using namespace std;
  
int main() {
    int i,j,n;
 
    cout << "Masukkan jumlah yang di inginkan: ";
    cin >> n;
 
    for (i=1;i<=n;i++) {
        for (j=i;j<n;j++) {
            cout << " "; // spasi digunakan untuk mengisi point sebelum tanda bintang
        }
         
        for (j=1;j<=i;j++) {
            cout << "*"; // ounput yanng dihasilkan akan berbentuk tanda bintang
        }
        cout << endl;
    }
  
    return 0;
}
