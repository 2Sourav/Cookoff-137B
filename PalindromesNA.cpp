#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0)
    {
int n;
        cin >> n;


        for(int i =0; i < n; i++){
            if(i%3==0) cout << "x";
            else if(i%3==1) cout << "y";
            else cout << "z";
        }

        cout << '\n';
    }
	return 0;
}
