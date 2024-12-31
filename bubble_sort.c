/* Type your code here, or load an example. */
#include<stdio.h>

void bubble_sort(int num[], int n) {
    if(n==1){
        return;
    }

    int loop_counter_1=0,loop_counter_2=1;
    int temp,i=0,j;
    while(i<n){
        printf("counter 1: %d\n",loop_counter_1);
        loop_counter_1=0;
        loop_counter_2=1;
        j=0;

        while(j<n){
        
        printf("counter 2: %d\n",loop_counter_2);
        //i = loop_counter_1;
            if(num[loop_counter_1]>num[loop_counter_2]){
                temp = num[loop_counter_2];
                num[loop_counter_2]=num[loop_counter_1];
                num[loop_counter_1]=temp;

            }
            loop_counter_2++;
            loop_counter_1++;
            j++;
        }
        i++;
    }
}


void print_array(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);

    }

}
int main(){
    int num[]={13,3,14,2,15,1,16,0,20};
    bubble_sort(num,9);
    int i=0;
    print_array(num,9);
    //printf("%d",num[2]);
}

