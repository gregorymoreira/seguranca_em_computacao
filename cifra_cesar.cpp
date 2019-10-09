#include <bits/stdc++.h>

using namespace std;
string entrada, saida="";
int chave = 14;

int main() {

    while(getline(cin,entrada)){
        for(int i=0; i<entrada.size(); i++){
            if(entrada[i] >= 'A' && entrada[i] <= 'Z'){
                if(entrada[i]+chave <= 'Z'){
                    saida += entrada[i]+chave;
                }
                else{
                    saida += (entrada[i] -26) + chave;
                }
            }
            else if(entrada[i] >= 'a' && entrada[i] <= 'z'){
                if(entrada[i]+chave <= 'z'){
                    saida += entrada[i]+chave;
                }
                else{
                    saida += (entrada[i] -26) + chave;
                }
            }
            else{
                saida += entrada[i];
            }
        }
        cout << saida << endl;
        entrada="";
        saida="";
    }
    return 0;
}