#include <bits/stdc++.h>

using namespace std;
string entrada, saida="";


int main() {

    getline(cin,entrada);
    for(int g=1;g<=26; g++){
        for(int i=0; i<entrada.size(); i++){
            if(entrada[i] >= 'A' && entrada[i] <= 'Z'){
                if(entrada[i]-g < 'A'){
                    saida += (entrada[i] + 26) - g;
                }
                else{
                    saida += entrada[i]-g;
                }
            }
            else if(entrada[i] >= 'a' && entrada[i] <= 'z'){
                if(entrada[i]-g < 'a'){
                    saida += (entrada[i] + 26) - g;
                }
                else{
                    saida += entrada[i]-g;
                }
            }
            else{
                saida += entrada[i];
            }   

        }
        cout << saida << endl;
        saida="";
    }

    return 0;
}