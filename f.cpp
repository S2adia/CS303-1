#include<iostream>
#include"f.h"
#include<fstream>
#include<utility>
using namespace std;
//function to read from file 
void readFile(int arr[], int &n){
    ifstream input;
    input.open("i.txt"); //open file
    int i=0;
    while(input>>arr[i]){ // take input from the file into the array
        i++;
        n++;
    }
}

//function to check for a intergar's presence in the array (1)
int findNum(int arr[], int &n){
    int val;
    cout<<"Enter value to check if it's in the array"<<endl;
    cin>>val;
    for(int i=0;i<n;i++){
        if(arr[i]==val){ //check if the given int matches with any of the int in the array
            cout<<val<<" found at index ";
            return i; // return the index where the int is found
        }
    }
    return -1; // when given int is not found in the array
}

//function to modify the value of a given index (2)
Node modifyValuewithexcpt(int arr[], int &n){
    int new_val, prev_val, idx;
    cout<<"Enter the index for which you want to modify the value"<<endl;
    cin>>idx;
    if(idx<0 or idx>=n){
        throw out_of_range("Index is out of range"); // index cann't be less than 0 so throw error
    }
    prev_val = arr[idx]; // store the value of the given index before modification
    cout<<"Enter the new value"<<endl;
    cin>>new_val;
    arr[idx] = new_val; // modify the the value of the given index with the desired new value
    Node k;
    k.new_val = new_val; 
    k.old_val = prev_val;
    return k; 

}

// function to throw error for the addNum function (3)
void addNumwithexcpt(int arr[], int &n){
    int add_n;
    cout<<"Enter an integar to add at the end of the array"<<endl;
    cin>>add_n;
    if(n>=10000){
        throw out_of_range("Index out of range");  // throw error if index is not within the range
    }
    arr[n] = add_n; // add the new int at the end
    n++;
    cout<<add_n<<" added at the end of the array"<<endl;
}

//function to replace a value of an index with 0 (4)
void replaceNum(int arr[])
{
    int idx;
    int store_val;
    cout<<"Enter index to replace the value with 0"<<endl;
    cin>>idx;
    store_val = arr[idx]; // store the  value of given the index before replacing with 0
    arr[idx] = 0; // replace the value of the given index with 0
    cout<<store_val<<" replaced with 0"<<endl;
   
}



