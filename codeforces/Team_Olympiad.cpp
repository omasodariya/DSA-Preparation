#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b, int c)
{
    return (a < b) ? (a < c) ? a : c : (b < c) ? b
                                               : c;
}

int main()
{
    int n, team;
    vector<int> v1,v2,v3;
    cin >> n;
    int child[n], no1 = 0, no2 = 0, no3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> child[i];
        if (child[i] == 1){
            no1++;
            v1.push_back(i+1);
        }
        else if (child[i] == 2){
            no2++;
            v2.push_back(i+1);
        }
        else if (child[i] == 3){
            no3++;
            v3.push_back(i+1);
        }
    }

    team = min(no1, no2, no3);
    cout << team << endl;


    for (int i = 0; i < team; i++)
    {
        cout<<v1[v1.size()-team+i]<<" "<<v2[v2.size()-team+i]<<" "<<v3[v3.size()-team+i]<<endl;
    }

    return 0;
}