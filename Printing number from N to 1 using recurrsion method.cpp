#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printGfg(int i, int n) {
        // Code here
        if(i<1) return ;
        cout << i << " ";
        printGfg(i-1,n);
    }
};


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.printGfg(n,1);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}