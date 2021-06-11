/*#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;

        cin>>x>>y;

        int count =0;


        /*
        else if(y<x){
            cout<<(x*2)-1<<endl;
        }
        else{
            cout<<x+y<<endl;
        }*/

/*
    }

}*/


#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
/*void solving()
{

    int x, y;
    cin >> x >> y;
    int max = max(x, y);

    if (x == y)
        cout << max * 2 << endl;
    else
        cout << (max * 2) - 1 << endl;
}*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int x, y;
    cin >> x >> y;
    int m = max(x, y);

    if (x == y)
        cout << m * 2 << endl;
    else
        cout << (m * 2) - 1 << endl;

    }
    return 0;
}
