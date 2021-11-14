#include <iostream>

using namespace std;

int main () {
    int n=0;
    cin >> n;
    int numero1=1;
    int numero2=1;
    int numero3=0;
    if(n>=1){
        cout<<numero1<<endl<<numero2<<endl;
    }while(n>=numero3){
        numero3=numero1+numero2;
        numero1=numero2;
        numero2=numero3;
        if(n>=numero3){
            cout<< numero3 << endl;
        }
    }

    return 0;
}
