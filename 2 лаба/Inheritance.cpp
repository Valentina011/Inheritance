#include <iostream>
#include <string>
using namespace std;

class Animals {
public:
string name; 
int pos_x,pos_y;
void walk(int dx, int dy) {
    pos_x += dx;
    pos_y += dy;
    cout << pos_x << " " << pos_y << "\n";
}
};

class pets: public Animals {
public:
string breed;
};

class cat: public pets {
public:
string HP;
cat(int x, int y){
    pos_x = x;
    pos_y = y;
  }
void MeowMeow() {
    if (pos_y >= 5){
        cout << "Meoow! My name is "<< name;
    }
    else {
        cout << "meow";
    }
}
};

int main(){
    cat Bengal(1,1);
    Bengal.name = "Murka";
    Bengal.walk(2,4);
    Bengal.MeowMeow();
    return 0;
}