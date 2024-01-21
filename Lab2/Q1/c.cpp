#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream inputFile("input.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }
    int m,n;
    inputFile>>m>>n;
    int *a= new int[n];
    int *b= new int[m];
    //Enter the elements of 1st array
    for(int i=0;i<m;i++) inputFile>>a[i];
    //Enter the elements of 2nd array
    for(int j=0;j<n;j++) cin>>b[j];
    int i=0,j=0;
    outputFile<<"Array obtained is:";
    while(i<m && j<n){
        if(a[i]<b[j]){i++;}
        else if(a[i]>b[j]){j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
}