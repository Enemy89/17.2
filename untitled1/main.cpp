#include <iostream>

void reverse_arr(int* parr) {
   int tmp;
   for (int i=0; i<5; ++i) {
       tmp=*(parr+i);
       *(parr+i)=*(parr+9-i);
       *(parr+9-i)=tmp;
   }
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int* parr=arr;
    reverse_arr(parr);

    for (int i=0; i<10; ++i) {
        std::cout<<*(parr+i)<<" ";
    }
}
