#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main(){

string s = "garets";
//reverse(s.begin(),s.end());

int length = s.length();
int b = length - 1;

for (int i = 0; i < (length/2); i++ ) {

swap(s[i], s[b]);
b = b - 1;

}


cout << s;

    
}