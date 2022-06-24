#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimization();
    vector<int>vec[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){

            int a;
            cin>>a;
            vec[i].push_back(a);
        }
    }


        for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){

         cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<vec[1][2];


}
