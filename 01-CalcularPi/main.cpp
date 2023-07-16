#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double numero{0};
    double signo {-1.0};
    double nume;
    double deno;
    double acum;
    double sumador = 0;
   

    while(sumador*4 < 3.1415920 || sumador*4 > 3.1415924)
    {   
        nume = pow(signo, numero);
        deno = ((2.0 * numero)+1.0);
        acum = (nume)/deno;
        sumador += acum;
        numero++;
    
    };

    cout.precision(7);
    cout << "Valor calculado de pi: " << (sumador*4) << endl;

    return 0;
}