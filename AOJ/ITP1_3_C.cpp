#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    while (true){
        if ((x == 0) & (y == 0)){
            break;
        } else if (x <= y){
            cout << x << " " << y << endl;
        } else if (x > y){
            cout << y << " " << x << endl;
        }
        cin >> x >> y;
    }
    return 0;
}