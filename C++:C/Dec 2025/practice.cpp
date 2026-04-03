#include <iostream>
#include <unordered_map>
#include <string>


using namespace std;

int main(){
    unordered_map<string, int> menu;
    
    menu["Burger"] = 500;
    menu["Fries"] = 300;

    string target = "Burger";

    if(menu.find(target) != menu.end()){
        cout << target << " is " << menu[target] << "yen." << endl;
    }else{
        cout << target << "is not found." << endl;
    }

    return 0;
}
