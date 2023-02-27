#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    file.open("Text.txt");
    int n;
    int a[9];
    file >> n;
    for (int i = 0; i < 9; i++)
    {
        file >> a[i];
    }
    cout << "Gia tri cua n la: " << n << endl;
    for (int i = 0; i < 9; i++)
    {
        cout <<  a[i] << endl;
    }
    string s;
    //getline(file, s);
    // cout << s;
    file.close();

    ofstream fileWrite("fileWrite.txt");
    cin >> s;
    fileWrite << s;
    fileWrite.close();
    return 0;
}
