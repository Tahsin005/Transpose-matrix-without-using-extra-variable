#include<stdio.h>
/*Write a program to store and print the transpose of the matrix
entered by the user*/
/*WITHOUT USING EXTRA VARIABLE*/
//[LEETCODE]
int main(){
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}