#include <iostream>
using namespace std;

class B{
protected:
    int val;
public:
    B(int v);
    virtual ~B();       
    int getVal() { return val; }
};

class D : public B{
public:
    D(int v);
    ~D();              
};

B::B(int v) : val(v){
    cout << val << " ";
}

B::~B(){
    cout << val * 10 << " ";
}

D::D(int v) : B(v){
    cout << val * 20 << " ";
}

D::~D(){
    cout << getVal() << " ";
}

int main(){
    int n;
    cin >> n;

    D *ptr = new D(n);
    B *bptr = ptr;
    delete bptr;
    
    return 0;
}