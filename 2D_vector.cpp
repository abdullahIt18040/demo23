#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
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
