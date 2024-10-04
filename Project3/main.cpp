#include <iostream>

using namespace std;

int main() {
    float rubles, amount, commission;
    string currency;
    do {
        cout << "Vvedite skolko rubley: ";
        cin >> rubles;

        cout << "Vibiriti valytu (Dollar, Euro, Yuan, Farit, Yen): ";
        cin >> currency;

        if (currency == "Dollar") {
            amount = rubles / 95.03; 
        }
        else if (currency == "Euro") {
            amount = rubles / 104.87; 
        }
        else if (currency == "Yuan") {
            amount = rubles / 13.48; 
        }
        else if (currency == "Farit") {
            amount = rubles / 37; 
        }
        else if (currency == "Yen") {
            amount = rubles / 0.64; 
        }
        else {
            cout << "Net takoy valuta" << endl;
            continue;
        }

        commission = amount * 0.05; 
        amount -= commission;

        cout << "You buy " << amount << " " << currency << endl;
        cout << "Commission: " << commission << endl;

        cout << "hotite prodolzhit? (yes/no): ";
        string response;
        cin >> response;

        if (response != "yes") {
            break;
        }

    } while (true);

    return 0;
}