#include <iostream>
using namespace std;
using std::string;

class Test {
     public:
    static int count;
    void call() {
        count++;
    }

    
};

int Test::count = 0;

int main() {
    Test obj;

    obj.call();
    obj.call();
    obj.call();

    cout << "La fonction 'call' a ete appelee " << Test::count << " fois depuis le programme principal." << endl;

    return 0;
}