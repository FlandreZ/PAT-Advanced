#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    char str[10]={};
    snprintf(str, sizeof(str), "%d", a+b);
    int len = strlen(str);
    for (int i = 0; i < len;i++)
        if(str[i] == '-')
            cout << str[i];
        else if((len -1 - i) % 3 == 0 && i!=(len-1))
            cout << str[i] << ',';
        else
            cout << str[i];
    return 0;
}