/*********************************

You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively.
You need to print their intersection;
An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words,
when there is a common value that exists in both the arrays/lists.


Note :
Input arrays/lists can contain duplicate elements.
The intersection elements printed would be in the order they appear in the first sorted array/list(ARR1).


Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first line of each test case or query contains an integer 'N' representing the size of the first array/list.
The second line contains 'N' single space separated integers representing the elements of the first the array/list.
The third line contains an integer 'M' representing the size of the second array/list.
The fourth line contains 'M' single space separated integers representing the elements of the second array/list.


Output format :
For each test case, print the intersection elements in a row, separated by a single space.
Output for every test case will be printed in a separate line.


Constraints :
1 <= t <= 10^2
0 <= N <= 10^6
0 <= M <= 10^6

Time Limit: 1 sec


Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7
2
10 10
1
10

Sample Output 1 :
2 3 4
10


Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2

Sample Output 2 :
1 2 2


Explanation for Sample Output 2 :
Since, both input arrays have two '2's, the intersection of the arrays also have two '2's.
The first '2' of first array matches with the first '2' of the second array.
Similarly, the second '2' of the first array matches with the second '2' if the second array.

***************************************/

#include <iostream>
#include <algorithm>
using namespace std;

//#include "solution.h"

/***********Merge Sort Code

void merge(int input1[], int size1, int input2[], int size2, int output[]){
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2){

        if (input1[i] < input2[j]){
            output[k] = input1[i];
            k++;
            i++;
        }

    else{
        output[k] = input2[j];
        j++;
        k++;
    }
}

    while (i < size1){

        output[k] = input1[i];
        k++;
        i++;
    }

    while (j < size2){

        output[k] = input2[j];
        j++;
        k++;
    }
}


void mergeSort(int input[], int size){

    if (size <= 1) return;

    int mid = size / 2;
    int part1[500], part2[500];
    int size1 = mid, size2 = size - mid;

    for (int i = 0; i < mid; i++){
        part1[i] = input[i];
    }

    int k = 0;
    for (int i = mid; i < size; i++){

    part2[k] = input[i];
    k++;
    }

    mergeSort(part1, size1);
    mergeSort(part2, size2);
    merge(part1, size1, part2, size2, input);
}

*/

void intersection(int *arr1, int *arr2, int n, int m)
{
    // Write your code here
    // mergeSort(arr1,n);                          //you can use in build sort function
    // mergeSort(arr2,m);

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int i = 0, j = 0;

    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            std::cout << arr1[i] << " ";
            i++;
            j++;
        }

        else if (arr1[i] > arr2[j])
        {
            j++;
        }

        else
            i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size1, size2;

        cin >> size1;
        int *input1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> input1[i];
        }

        cin >> size2;
        int *input2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, size1, size2);

        delete[] input1;
        delete[] input2;

        cout << endl;
    }

    return 0;
}