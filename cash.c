// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] ={500,200,100,50,20,10,5,2,1};
    int arr1[] = {0, 0,  0,  0, 0, 0,0,0,0};
    int rupees;
    printf("Enter owe rupees: \n");
    scanf("%d", &rupees);
    for(int i = 0; i < 9; i++){
        if(arr[i] <= rupees){
            arr1[i] = rupees / arr[i];
            rupees = rupees - (arr[i] * arr1[i]);
        }
    }
    printf(" 500 200 100 50 20 10 5 2 1\n");
    for(int i = 0; i < 9; i++){
        printf(" %d\t", arr1[i]);
    }
    return 0;
}
