#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b) & (b == c)){
        cout << a << " " << b << " " << c << endl;

    } else if ((a == b) & (b > c)){
        cout << c << " " << a << " " << b << endl;
    } else if ((c == a) & (a > b)){
        cout << b << " " << c << " " << a << endl;
    } else if ((b == c) & (c > a)){
        cout << a << " " << b << " " << c << endl;

    } else if ((a == b) & (b < c)){
        cout << a << " " << b << " " << c << endl;
    } else if ((c == a) & (a < b)){
        cout << a << " " << c << " " << b << endl;
    } else if ((b == c) & (c < a)){
        cout << b << " " << c << " " << a << endl;

    } else if ((a > b) & (b > c)){
        cout << c << " " << b << " " << a << endl;
    } else if ((c > a) & (a > b)) {
        cout << b << " " << a << " " << c << endl;
    } else if ((b > c) & (c > a)) {
        cout << a << " " << c << " " << b << endl;

    } else if ((a < b) & (b < c)){
        cout << a << " " << b << " " << c << endl;
    } else if ((c < a) & (a < b)) {
        cout << c << " " << a << " " << b << endl;
    } else if ((b < c) & (c < a)) {
        cout << b << " " << c << " " << a << endl;
    }
    return 0;
}