#include <iostream>
using namespace std;
int main(){
    long double pi=0.0;
        int i=1;
        int j=1;
        int iteraciones{0};
        while (iteraciones < 10000000)
        {
            pi+= (static_cast<double>(i)/(j));
            i*=(-1);
            j+=2;
            iteraciones++;
        }
    long double resultado = (pi * 4);
    cout.precision(7);
    cout<<"el valor de pi es : "<<fixed<<resultado<<endl;
        
    return 0;
}

