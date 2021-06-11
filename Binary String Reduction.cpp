/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;

        cin>>n;
        cin>>s;

        int count =0;
        int ncnt=0;

        for(int i=0;i<s.length();i++){

                for(int j=i+1;j<s.length();j++){

                    if(s[i]!=s[j]){

                             s.erase(s.begin()+i);
                             s.erase(s.begin()+(i+1));
                             count++;



                        }

                        else if(s[i]==s[j]) {
                            count=count;
                        }

                        else if(s[i])
                }





                }




        cout<<count<<endl;
    }
}
