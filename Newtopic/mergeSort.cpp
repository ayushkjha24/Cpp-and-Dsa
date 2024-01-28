#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            index++, left++;
        }
        else {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    while (left <= mid) {
        temp[index] = arr[left];
        index++, left++;
    }
    while (right <= end) {
        temp[index] = arr[right];
        index++, right++;
    }

    // Copy the merged elements back to the original array
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
}


void mergeSort(int arr[],int start,int end)
{
    if(start==end)
    return ;
    int mid=start+(end-start)/2;
    //left side
    mergeSort(arr,start,mid);

    //right side
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main()
{
    int arr[] = {6,3,1,2,3,8,9,10,7,3,10};
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
    return 0;
}