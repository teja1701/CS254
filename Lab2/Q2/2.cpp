#include<bits/stdc++.h>
using namespace std;

void insertionSort(int A[],int m,int n){
    for(int i=m;i<n;i++){
        int key = A[i];
        int j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

int main(){

    ifstream inputFile("input.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }
    int n,m;
    inputFile>>n>>m;
    int *a= new int[n];
    for(int i=0;i<n;i++){inputFile>>a[i];}
    inputFile.close();
    insertionSort(a,m,n);

    outputFile<<"Final array obtained is: "<<endl;
    for(int i=0;i<n;i++){
        outputFile<<a[i]<<" ";
    }
    outputFile<<endl;
}