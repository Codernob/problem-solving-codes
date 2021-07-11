#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int s) {
    int i,j;
    for(i=1;i<s;i++) {
        for(j=i;j>0 && a[j]<a[j-1];j--) {
            swap(a[j],a[j-1]);
            }
        }
    }
