#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int Change_letter(int a, int c)
{
    int b;
    b = (c - char('0') + a) % 36; // 'x' - '0'
    if(b >= 0 && b <= 9)
        b += 48;
    else
        b += 55;
    return b;
}

int main()
{
    string a{}, buffer;
    int option{}, test[20]{};
    char b, c, b2;
    cout << "Kaip norite ivesti faila? \n1 - Ranka\n2 - Is failo\n";
    cin >> option;
    while(!(option == 1 || option == 2) || !cin){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Bloga ivestis, kartokite!" << endl;
        cin >> option;
    };
    if(option == 1)
    {
        cout << "Iveskite zodi\n";
        cin >> a;
    }
    else
    {
        ifstream fd("input.txt");
        while(getline(fd, buffer)){
            a.append(buffer);
        }
    }
    if(a.length() < 20)
    {
        if(a.length() == 1)

    }
    for(int i = 0; i < a.length(); i++)
    {
        test[i % 20] += a[i];
       // b = a[i];
        //if(i == a.length() - 1)
            //b2 = a[0];
        //else
           // b2 = a[i+1];
        //for(int j = 0; j < hash.length(); j++)
        //{
            //cout << b + hash[j] << endl;
            //cout << (b + hash[j]) << endl;
            //cout << char((b + hash[j])) << endl;
            //hash[j] = char(Change_letter((b + b2)/2, hash[j]));
            //cout << hash[j] << endl << endl;
        //}
        //cout << b << "  " <<  hash << endl;

    }
    for(int i = 0; i < 20; i++)
    {
        test[i] %= 16;
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++)
        {
            if(i != j)
                test[i] += test[j];
        }
        test[i] %= 16;
    }
    for(int i = 0; i < 20; i++)
    {
        cout  << hex << test[i] + 1;
    }
}