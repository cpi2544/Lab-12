#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){

    int i = 9;
    string x[i]= {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    i = rand()%9;
    cout << "You will get " << x[i] << " in this 261102.";

    return 0;
}

