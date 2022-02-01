#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n1=s1.length(), n2=s2.length();
    int ml=min(n1,n2);
    int count=0;
    for(int i=0, j=0;i<n1 && j<n2;i++, j++)
    {
        string num1="";
        string num2="";
        while(s1[i]!='.')
        {
            num1+=s1[i];
            i++;
        }
        int number1=stoi(num1);
        while(s2[j]!='.')
        {
            num2+=s2[j];
            j++;
        }
        int number2=stoi(num2);
        if(number1>number2)
        {
            cout << s2 << endl;
            count=1;
            break;
        }
        else if(number2>number1)
        {
            cout << s1 << endl;
            count=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(count==0){
        if(n1>n2)
        {
            cout << s2 << endl;
        }
        else if(n1<n2)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s1 << endl;
        }
    }

    return 0;
}
