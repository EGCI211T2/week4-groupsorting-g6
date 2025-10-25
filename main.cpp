#include <iostream>
#include <string.h>
#include "sorting.h"

int main(int argc, char *argv[]) {

  cout << "argc is " << argc << endl;

  char *sortType = argv[1];

 int i, N;
    int *a;

    N = argc - 2;      
    a = new int[N];
    for(i = 0; i < N; i++){
        *a = atoi(argv[i + 2]); 
        a++;
    }
    a -= N;

    cout << "Before sorting: ";
    display(a, N);

    if (strcmp(sortType, "insert") == 0) {
        cout << "\n=== Insertion Sort ===" << endl;
        insert_sort(a, N);
    } 
    else if (strcmp(sortType, "bubble") == 0) {
        cout << "\n=== Bubble Sort ===" << endl;
        bubble_sort(a, N);
    } 
    else if (strcmp(sortType, "selection") == 0) {
        cout << "\n=== Selection Sort ===" << endl;
        select_sort(a, N);
    }
    else if (strcmp(sortType, "shell") == 0) {
    cout << "\n=== Shell Sort ===" << endl;
    shell_sort(a, N);
    }

    cout << "After sorting: ";
    display(a, N);

    delete [] a;
    return 0;
}