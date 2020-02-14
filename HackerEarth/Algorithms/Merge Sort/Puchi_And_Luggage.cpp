/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<iostream>
 
using namespace std;
 
 
void merge(int weight[], int start, int mid, int end, int frequency[]) {
    int start1 = start;
    int start2 = mid+1;
    int k = 0;
    int count = 0;
 
    int tempArr[end+1];
 
    for(int i=start; i<=end; i++) {
 
        if(start1 > mid) {
            tempArr[k++] = weight[start2++];
        }
 
        else if(start2 > end) {
            frequency[weight[start1]] += count;
            tempArr[k++] = weight[start1++];
        }
 
        else if(weight[start1] <= weight[start2]) {
            frequency[weight[start1]] += count;
            tempArr[k++] = weight[start1++];
        }
 
        else {
            count++;
            tempArr[k++] = weight[start2++];
        }
    }
 
    for(int i = 0; i<k; i++) {
        weight[start++] = tempArr[i];
    }
 
}
 
void mergeSort(int weight[], int start, int end, int frequency[]) {
 
    if(start<end) {
    int mid = (start + end)/2;
 
    mergeSort(weight, start, mid, frequency);
    mergeSort(weight, mid+1, end, frequency);
 
    merge(weight, start, mid, end, frequency);
    }
}
 
int main() {
    int T;
    cin>>T;
    for(int t=0; t<T; t++) {
    int N;
    cin>>N;
    int weight[N];
    for(int i=0; i<N; i++) {
        cin>>weight[i];
        }
 
    int duplicate[N];
 
    for(int i=0; i<N; i++) {
        duplicate[i] = weight[i];
    }
 
    int max = weight[0];
    for(int i=1; i<N; i++) {
        if(max < weight[i]){
            max = weight[i];
        }
    }
 
    max = max+1;
    int frequency[max] = {0};
 
    mergeSort(weight, 0, N-1, frequency);
 
    for(int i=0; i<N; i++) {
        cout<<frequency[duplicate[i]]<<" ";
    }
 
    cout<<endl;
 
    }
 
 
}
