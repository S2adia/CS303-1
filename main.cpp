#include<iostream>
#include<fstream>
#include"f.cpp"

using namespace std;

int main(){
    
    int arr[10000];
    int n, i=0;
    readFile(arr, n); // calling the function to read from the file into the array
    cout<<findNum(arr,n)<<endl; // calling the function to find the index of a given int (1)
    try{
        Node m = modifyValuewithexcpt(arr, n); // calling the function to modify the value of a given index (2)
        cout<<"Modified value: "<<m.new_val<<endl<<"Old value: "<<m.old_val<<endl; // printing the new and old value
    }
    catch(out_of_range excpt){
        cout<<excpt.what()<<endl; // handle the out
    }
    //try catch block for addNum function
    try{
        addNumwithexcpt( arr, n); // calling the function add an int at the end of the array (3)
    }
    catch(out_of_range excpt){
        cout<<excpt.what()<<endl;
    }
    replaceNum(arr); // calling the function to replace the value of a given index with 0 (4)
    cout<<endl;

}