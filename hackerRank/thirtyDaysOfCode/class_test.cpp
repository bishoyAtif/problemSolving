#include <iostream>

using namespace std;

class Test {
    public :
        void print_hi() {
            cout << "Hi" << endl;
        }
        virtual void x()=0;
};

class Inherited : public Test {
    void x(){
        
    }
};

int main()
{
    Inherited t;
    t.print_hi();

    return 0;
}