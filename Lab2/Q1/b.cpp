#include <bits/stdc++.h>
using namespace std;

int main(){
     ifstream inputFile("input2.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output2.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }
    int m,n;
    cin>>m>>n;
    int *a= new int[n];
    int *b= new int[m];
    //Enter the elements of 1st array
    for(int i=0;i<m;i++) inputFile>>a[i];
    //Enter the elements of 2nd array
    for(int j=0;j<n;j++) inputFile>>b[j];
    int i=0,j=0;
    outputFile<<"Array obtained after union operation is:";
    while(i<m && j<n){
       if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
       else if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
       else{cout<<a[i]<<" ";i++;j++;}
    }  
    while(i<m){cout<<a[i++]<<" ";}
    while(j<n){cout<<b[j++]<<" ";}
    return 0;
}