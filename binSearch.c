/*Problem Solving with Programming Lab MST
Name - Arya Bhattacharyya
UID - 20BCS3161
Section - 20BCS27 Group - B
Branch - B.E. CSE
Semester - 1*/

/*WAP to search a number in an array using Binary search.*/


#include <stdio.h>

int main(void) {
    int n, number;
    printf("Enter the number to be searched for: ");
    scanf("%d", &number);
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int L = 0, U = n - 1, M, flag = 0;
    
    while(L < U) {
      M = (L + U) / 2;  //  finding the middle term
      if(arr[M] < number) L = M + 1;
      else if(arr[M] > number) U = M - 1;
      else if(arr[M] == number) {
        flag = 1;  //  number is found in the array
        break;
      }
    }

    if(flag == 1) printf("The number is present at position %d", (M + 1));
    else printf("The number is not present.");

    return 0;
}