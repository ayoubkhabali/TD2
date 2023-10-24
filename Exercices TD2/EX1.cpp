#include <iostream>
using namespace std;

// == EX 1 ==
int i=0;
void appel() {
    cout << " appel numéro " << ++i << endl;
}


int main() {
    appel();
    appel();
    appel();
    return 0;
 }