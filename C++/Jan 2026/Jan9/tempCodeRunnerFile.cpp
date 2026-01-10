using namespace std;  
int main(){
    vector<int> numbers ={12, 45, 7,30,88,15};

    vector<int> evens;

    for(int n:numbers){
        if(n>=30){
            evens.push_back(n);
        }
    }

    for(int n: evens){
        cout << n << " "<<endl;
    }
    return 0;