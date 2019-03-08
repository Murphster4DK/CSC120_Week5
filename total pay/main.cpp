#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     double sale = 0;
     int cont=0;
     double earnings;
     while (cont != -1) {

         cout << "In put total sales: ";
         cin >> sale;

         earnings = (sale * .09) + 200;
         cout << setprecision(2) << fixed;

        cout << "total weekly earning: " << earnings;
         cout << "\nenter positive intiger to continue: ";
         cin >> cont;
     }
}