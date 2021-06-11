/*
B. Prime Square
time limit per test1.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Sasha likes investigating different math objects, for example, magic squares. But Sasha understands that magic squares have already been studied by hundreds of people, so he sees no sense of studying them further. Instead, he invented his own type of square — a prime square.

A square of size n×n is called prime if the following three conditions are held simultaneously:

all numbers on the square are non-negative integers not exceeding 105;
there are no prime numbers in the square;
sums of integers in each row and each column are prime numbers.
Sasha has an integer n. He asks you to find any prime square of size n×n. Sasha is absolutely sure such squares exist, so just help him!

Input
The first line contains a single integer t (1≤t≤10) — the number of test cases.

Each of the next t lines contains a single integer n (2≤n≤100) — the required size of a square.

Output
For each test case print n lines, each containing n integers — the prime square you built. If there are multiple answers, print any.

Example
inputCopy
2
4
2
outputCopy
4 6 8 1
4 9 9 9
4 10 10 65
1 4 4 4
1 1
1 1

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
 
//    cout<<"Hello World!";
 
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
 
            if(i==j || i==j+1 || i==j-1){
                cout<<1<<" ";
            }
            else {
                cout<<0<<" ";
            }
 
        }
        cout<<endl;
    }
}
 
}