#include <iostream>
using namespace std;
bool primeCheck(int n){
        for(int i = 2; i*i <= n; i++){
                if(n % i == 0)
                        return false;
        }
        return true;
}

int main() {
        int n;
        cout << "Enter a number to check whether its prime or not: " << endl;
        cin >> n;
        primeCheck(n);
        if(primeCheck(n)) {
                cout << "Prime = YESSSSS!" << endl;
                        }
        else
                cout << "Prime = NOOOOO!" << endl;
}
