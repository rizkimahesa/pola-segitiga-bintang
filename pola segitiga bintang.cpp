#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    
    for (int p = 0; p < n; p++){
        for (int s = 2; s <= (n-p); s++){
            cout << " ";
        }
        for (int t = 1; t <= (2*p - 1); t++){
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}
