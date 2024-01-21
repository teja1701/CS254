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
    int *a= new int[n];
    //Enter the elements of the unsorted array
    for(int i=0;i<n;i++) inputFile>>a[i];
    sort(a,a+n);
    if(n%2==0) outputFile<<"Median is:"<<(a[(n-2)/2]+a[n/2])/2<<"\n";
    else outputFile<<"Median is:"<<(a[(n-1)/2])<<"\n";

}