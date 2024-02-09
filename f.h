#include<iostream>
using namespace std;
#include<utility>

struct Node{
    int old_val , new_val;
};
void readFile(int arr[], int &n); 
int findNum(int arr[], int &n);
void replaceNum(int arr[]);
void addNumwithexcpt(int arr[], int &n);
Node modifyValuewithexcpt(int arr[], int &n);