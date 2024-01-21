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
    int n;
    inputFile>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++) {
        inputFile>>a[i];
    }    
    inputFile.close();
    sort(a,a+n);
    outputFile<<"First minima of the array is:"<<a[0]<<"\n";
    outputFile<<"Second minima of the array is:"<<a[1]<<"\n";
}