#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printGfg(int n) {
        // Code here
        if(n>0){
            printGfg(n-1);
            cout << "Aryan" << " ";
        }
    }
};



int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.printGfg(n);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}