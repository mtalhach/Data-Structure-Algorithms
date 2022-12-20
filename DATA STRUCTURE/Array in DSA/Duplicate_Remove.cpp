#include <stdio.h>


void display(int arr[], int arrSize) {
    printf("\nArray: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);

    }

}

void Duplicate(int arr[], int arrSize) {
    int flag ;
    for (int i  = 0; i < arrSize - 1;i++) {
        flag = 0;
        for (int j = i+1 ; j < arrSize; j++) {
            if (arr[i] == arr[j]) {
                flag = 1;
            }
        }
        for (int k = i-1; k > 0; k--) {
            if(arr[i] == arr[k]){
                flag = 0;
            }
        }
        if (flag == 1){
            printf("%d\t", arr[i]);
        }
    }

}

int main () {
    int arr[] = {1,2,1,2,3,2,3,4,2,5,4};
    int arrSize = sizeof(arr) / sizeof(int);

    display(arr, arrSize);

    printf("\n\nResult: ");
    Duplicate(arr,arrSize);
}
