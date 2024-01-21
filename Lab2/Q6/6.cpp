#include <bits/stdc++.h>
using namespace std;

int findMedian(int a[], int p, int r){
    sort(a + p, a + r + 1);
    int mid = (p + r) / 2;
    return a[mid];
}

int Partition(int a[], int p, int r){
    int pivot = findMedian(a, p, r);
    int i = p - 1;
    for (int j = p; j <= r - 1; j++){
        if (a[j] == pivot){
            swap(a[j], a[r]);
            break;
        }
    }
    for (int j = p; j <= r - 1; j++){
        if (a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}

void QuickSort(int a[],int p,int r){
   if(p<r){
    int x=Partition(a,p,r);
    QuickSort(a,p,x-1);
    QuickSort(a,x+1,r);
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

    int n;
    cin>>n;
    int *a= new int[n];
    //Enter the elements of the array
    for(int i=0;i<n;i++){
      inputFile>>a[i];
    }
    QuickSort(a,0,n-1);
    outputFile<<"Sorted Array\n";
    for(int i=0;i<n;i++){
	outputFile<<a[i]<<" ";
    }
    return 0;
}