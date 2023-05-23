#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, err;

    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }while((a * a * cos(a) + 1) * (b * b * cos(b) + 1) >= 0 );


        do{
            a = (a+b)/2;
            if((a*a * cos(a) + 1) ==0){
                break;
            }
            if((a*a * cos(a) + 1) * (b*b * cos(b) + 1) < 0){
                b=a;
            }
            err = (b-a)/2;
            if(err<0){
                err=-err;
            }
        }while(err >= 1*(M_E)-6);

    cout << a << "\n" <<  a*a * cos(a) + 1 << endl;


    return 0;
}
