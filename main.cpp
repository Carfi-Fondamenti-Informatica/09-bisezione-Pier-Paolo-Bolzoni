#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, err, x;


    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }while((a * a * cos(a) + 1) * (b * b * cos(b) + 1) >= 0 );

    do{
            x = (a+b)/2;
            if((x * x * cos(x) + 1) == (0)){
                break;
            }
            if((a * a * cos(a) + 1) * (x * x * cos(x) + 1) < 0){
                b=x;
            }else{
                a=x;
            }
            err = abs (b-a)/2;

    }while(err >= 1e-6);

    cout << int (x *10000)/10000.0;


    return 0;
}
