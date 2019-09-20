#include <iostream>
#include <string>

using namespace std;

char Change_letter(char a)
{
    int b;
    if(!(a >= 48 && a <= 57 || a >= 97 && a <= 122))
    {
        b = (int)a;
        b = b % 36;
        if(b >= 0 && b <= 9)
            a = char('0' + b);
        else
            a = char('a' + b - 10);
    }
    return a;
}

int main()
{
    string a;
    char b, c;
	cout << "Iveskite zodi\n";
	cin >> a;
	while(a.length() <= 20)
    {
	    if(a.length() == 1)
        {
            b = a[a.length()-1];
            c = a[a.length()-1];

        }
        else
        {
            b = a[a.length()-2];
            c = a[a.length()-1];
        }

	    a.push_back(Change_letter(char((b+c + b * 2 + c * 2)%128)));
    }
    for(int i = 0; i < a.length(); i++)
        for(int j = 0; j < a.length(); j++)
        {
            b = a[i];
            a[j] = Change_letter(char((b + a[j])%128));
        }
    a = a.substr(0,20);
    cout << "Hash: "<< a << endl;
}