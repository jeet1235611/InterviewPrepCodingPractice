#include <iostream>
using namespace std;
bool primeCheck(int n, int divisor) {
        //By default kisi bhi programming mein false hi written hota h.
        //Edge Case.
        if(n <= 1)
                return false;
        if(n == 2)
                return true;
        //Base case
        if(n % divisor == 0)
                return false;
        if(divisor <= 2)
                return true;

        return primeCheck(n, divisor-1);

}
int main() {
        int n;
        cout << "Enter the number to be checked for prime: " << endl;
        cin >> n;
        int divisor = n - 1;
        bool index = primeCheck(n, divisor);
        if(index)
                cout << "Prime = YESSSSS!" << endl;
        else
                cout << "Prime = NOOOOOO!" << endl;
        return 0;
}
