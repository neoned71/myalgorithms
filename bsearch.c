/* Type your code here, or load an example. */
#include<stdio.h>


int bsearch(int num[], int low,int high,int value) {

    while(low<=high){
        int mid = low+(high-low)/2;
        printf("mid %d\n",mid);
        if(num[mid]==value){
            return mid;
        }
        if(num[mid]<value){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}


int main(){
    int num[]={4,6,8,9,11,13,14,15,16,20};
    int p=bsearch(num,0,10,2);
    printf("%d",p);
}
