#include <iostream>

using namespace std;
class IntArray{
    private:
        int* data;
        int size;

    public:
        IntArray(int s) : size(s){
            data = new int[size];
            for(int i = 0; i < size;i++)
            {
                data[i] = 0;
            }
            cout << "メモリを確保しました。" << endl;
        }

        ~IntArray(){
            delete[] data;
            cout << "メモリを解放しました。"<< endl;
        }

        void set(int index, int value){
            if(index >= 0 && index < size){
                data[index] = value;
            }
        }

        void print() const{
            for(int i = 0; i < size;i++){
                cout << data[i] << " ";
            }
        }
        
};

int main(){{

    IntArray arr(5);
    arr.set(0,10);
    arr.set(2,30);
    arr.set(4,50);
    arr.print();
}
return 0;
}
