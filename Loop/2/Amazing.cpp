// 1 - 2 + 3 - 4 + 5 - 6 + 7

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, n, ans = 0;

    cout << "Enter the number : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        if(i%2 != 0) {
            ans = ans + i;
        } else {
            ans = ans - i;
        }
    }

    cout << ans;

    return 0;
}