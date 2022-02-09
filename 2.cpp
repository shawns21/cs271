#include <iostream>
using namespace std;

int main(){

int first_int;
int second_int;

cout << "enter the first int: \n";
cin >> first_int;
cout << "enter the second int: \n";
cin >> second_int;

if (second_int % first_int == 0){

cout << first_int << " is a multiple of " << second_int << "\n"; 

}

else{

cout << first_int << " is not a multiple of " << second_int << "\n";
}

for (int i = 0; i < 4; i++){

cout << "* * * * * * * *\n";
cout << " * * * * * * * *\n";

}

cout << "*********         ***               *               *             \n";
cout << "*       *     *         *          ***             * *            \n";
cout << "*       *    *           *        *****           *   *           \n";
cout << "*       *    *           *          *            *     *          \n";
cout << "*       *    *           *          *           *       *         \n";
cout << "*       *    *           *          *            *     *          \n";
cout << "*       *    *           *          *             *   *           \n";
cout << "*       *     *         *           *              * *            \n";
cout << "*********         ***               *               *             \n";

}