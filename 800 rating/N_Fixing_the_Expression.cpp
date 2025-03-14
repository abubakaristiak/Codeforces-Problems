#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    
    while (cin >> a >> b >> c) {
        int mx = a + b + c;
        mx = max(mx, a + b * c);
        mx = max(mx, (a + b) * c);
        mx = max(mx, a * b + c);
        mx = max(mx, a * (b + c));
        mx = max(mx, a * b * c);
        
        cout << mx << endl;
    }
    
    return 0;
}
