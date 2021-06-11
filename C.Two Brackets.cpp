#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;
        int a=0;
        int b=0;
        int store =0;

        for(int i=0;i<s.length();i++){



                if(s[i]=='('){
                    a++;
                }
                else if(s[i]=='['){
                    b++;
                }

               else if(s[i]==')'){
                    if(a>0){
                    a--;
                    store++;
                    }
                }
                else {
                        if(b>0){
                            b--;
                            store++;
                        }

                }


        }

        cout<<store<<endl;

    }

}
