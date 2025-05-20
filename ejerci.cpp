#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese un numero entero:"<<endl;
    cin>>n;
    if(n<=1){
        cout<<"El numero no es primo"<<endl;
    
    }else{
        bool esPrimo=true;
        for(int i=2; i*i<=n;  i++){
            if(n%1==0){
                esPrimo=false;
                break;
            }

    
        }if(esPrimo){
            cout<<"Es primo"<<endl;
        
        }else{
            cout<<"No es primo";
        }
    }





    return 0;
}