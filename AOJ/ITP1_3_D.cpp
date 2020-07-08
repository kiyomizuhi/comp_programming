#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    int n = 0, r;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i ++){
        r = c % i;
        if (r == 0) {
            n++;
        } else {
            continue;
        }
    }
    cout << n << endl;
    return 0;
}