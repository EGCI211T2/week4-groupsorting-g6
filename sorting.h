#include <iostream>
using namespace std;
void swap(int &a,int &b);
void display(int *a,int N);
void bubble_sort(int *a,int N);
void select_sort(int *a,int N);
void insert_sort(int *a,int N);
void shell_sort(int *a,int N);

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a, int N){
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int *a, int N){
    int i, j, sorted;
    for(j = N - 1; j > 0; j--){
        sorted = 0;
        for(i = 0; i < j; i++){
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
                sorted = 1;
            }
            display(a, N);
        }
        cout << "===============" << endl;
        if(sorted == 0) break; 
    }
}


void select_sort(int *a, int N){
    int i, j, mi;
    for(j = 0; j < N; j++){
        mi = j;
        for(i = j + 1; i < N; i++){
            if(a[mi] > a[i]){
                mi = i;
            }
        }
        swap(a[j], a[mi]);
        display(a, N);
    }
}


void insert_sort(int *a, int N){
    int i, j;
    for(j = 1; j < N; j++){
        int value = a[j];
        for(i = j - 1; i >= 0; i--){
            if(value < a[i])
                a[i + 1] = a[i];
            else
                break;
            display(a, N);
        }
        a[i + 1] = value;
        cout << "==============" << endl;
    }
}

void shell_sort(int *a, int N) {
    for (int gap = N / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < N; i++) {
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
                a[j] = a[j - gap];
                display(a, N);
            }
            a[j] = temp;
        }
        cout << "===============" << endl;
    }
}