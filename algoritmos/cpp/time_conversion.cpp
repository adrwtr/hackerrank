#include <iostream>
#include <string>
#include <cstdio>
    
using namespace std;

string timeConversion(string ds_hora_am) {    
    string ds_meia_noite = "00";

    // pega apenas a hora inicial para comparacao
    string ds_hora = ds_hora_am.substr(0, 2);

    // pega se e AM ou PM
    string ds_am_pm = ds_hora_am.substr(8, 2);

    if (ds_am_pm == "AM") {
        // se a hora e 12 AM, 
        // então comeca com 00
        if (ds_hora == "12") {
            return ds_meia_noite.append(
                ds_hora_am, 2, 6
            );            
        }
        
        // apenas retorna a hora sem o AM ou PM no final
        return ds_hora_am.substr(0, 8);       
    }
    
    // se for exatamente 12:00:00PM,
    if (ds_hora_am == "12:00:00PM") {
        ds_meia_noite = "00:00:00";
        return ds_meia_noite;
    }

    // conversao para inteiro
    int nr_hora = std::atoi(ds_hora.c_str());
    
    // soma com 12
    if (nr_hora < 12) {
        nr_hora += 12;
    }   
     
    ds_hora = std::to_string(nr_hora);

    // retorna o horario completo
    return ds_hora.append(ds_hora_am, 2, 6);
}

int main() {
    string ds_hora = "12:00:00PM";
    cin >> ds_hora;
    string ds_result = timeConversion(ds_hora);
    cout << ds_result << endl;
    return 0;
}
