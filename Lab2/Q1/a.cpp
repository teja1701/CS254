#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream inputFile("input1.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output1.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }

    int m,n;
    inputFile>>m>>n;
    int *a= new int[n];
    int *b= new int[m];
    // entering the elements of first array
    for(int i=0;i<m;i++){ inputFile>>a[i];}
    // entering the elements of second array
    for(int i=0;i<n;i++){inputFile>>b[i];}
    int *c= new int[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
            k++;    
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
    outputFile<<"Array obtained aftering merging is:";
    for(int k=0;k<m+n;k++) {
        outputFile<<c[k]<<" ";
    }
    return 0;
    
}