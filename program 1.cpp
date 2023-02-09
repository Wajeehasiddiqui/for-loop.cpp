

#include <iostream>
using namespace std;
int main() {
    int num,rows=3,cols=10;
    cout << "Enter a positive integer: ";
    cin >> num;
    for(int i=1,k=1; i<=rows; i++) {
        for (int j = 1; j <= cols; ++j,k++) {
            cout << num*k<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}