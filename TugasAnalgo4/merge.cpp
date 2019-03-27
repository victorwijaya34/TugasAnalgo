#include <iostream>

using namespace std;

#define N 5;

void merge(int arr[],int l, int m, int r){

int n1 = m - l + 1;
int n2 = r-m;

int L[n1], R[n2];


for(int i=0; i < n1; i++)
L[i] = arr[l+i];
for(int i=0; i < n2; i++)
R[i] = arr[m+1+i];

int i = 0;
int j = 0;
int k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}

while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}

void mergeSort(int arr[], int l, int r){
if( l < r){
int m = l+(r-l)/2;

mergeSort(arr, l, m);
mergeSort(arr, m+1, r);

merge(arr, l, m, r);
}
}

void cetakArray(int arr[], int n){
for(int i=0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
}

int main(){
int arr[] = { 44,76,58,24,34,89,1};
int n = sizeof(arr)/sizeof(arr[0]);
cout << "Masukkan Array \t\t: "; cetakArray(arr,n);

mergeSort(arr, 0, n-1);
cout << "Array setelah disort\t: ";cetakArray(arr,n);

return 0;
}

