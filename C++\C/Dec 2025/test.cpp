// 12/17/2025

#include <iostream>
#include <stdexcept>
using namespace std;
class MyVector{
    private:
        int* data;
        size_t size;
        size_t capacity;

        void resize(){
            size_t newCapacity = (capacity == 0) ? 1 : capacity *2;
            int* newData = new int[newCapacity];

            for(size_t i = 0; i < size; ++i){
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
            capacity = newCapacity;

            cout << "[DEBUG] メモリを拡張しました： 容量 " << capacity <<" に変更" << endl;

        }
    public:
        
        MyVector() : data(nullptr), size(0), capacity(0){}

        ~MyVector(){
            delete[] data;
            cout << "[DEBUG] メモリを解放しました" << endl;
        }

        void push_back(int value){
            if(size == capacity){
                resize();
            }
            data[size] = value;
            size++;
        }

        int get(size_t index) const{
            if(index >= size){
                throw out_of_range("インデックスが範囲外です");
            }
            return data[index];
        }

        size_t get_size() const{
            return size;
        }

        size_t get_capacity() const{
            return capacity;
        }
};

int main(){
    cout << "--MyVector 写経テスト開始--" << endl;
    

    MyVector vec;

    for(int i = 0; i < 10;i++){
        cout << "Pushing: " << i *10;
        vec.push_back(i *10);
        cout <<" (Size: " << vec.get_size() <<", Cap: " << vec.get_capacity() <<")"<< endl;
    }

    cout << "--中身を表示--" << endl;
    for(size_t i = 0; i < vec.get_size();i++){
        cout << "Index " <<i<<": "<< vec.get(i)<<endl;
     }

     cout <<"-- 終了 --"<< endl;
     return 0;
}