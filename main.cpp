#include <iostream>

using namespace std;

int main()
{
    int competidores, folhas, cada;
    cin >> competidores;
    cin >> folhas;
    cin >> cada;
    cada = cada * competidores;
    if (cada <= folhas){
        cout << "S" <<endl;
    }else{
        cout << "N" <<endl;
    }
    return 0;
}
