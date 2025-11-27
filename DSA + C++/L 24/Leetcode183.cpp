#include<iostream>
using namespace std;


int main()
{
char s[]={'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};

int n=0;
while (s[n]!=0)
{
    n++;
}
char ans[n];
int po=0,loop=0;
for (int i = n-1; i >= 0; i--)
{
    if (s[i]==' ')
    {
        for (int k=; k < loop; k++)
        {
            ans[k]=s[i];
        }
        
        po++;
            ans[po]=' ';
        loop=0;
    }
    
    loop++;
}

cout<<ans<<"is";


return 0;
}