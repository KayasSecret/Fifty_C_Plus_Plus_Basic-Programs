#include <iostream>

class IndexError{
public:
    void what(){ std::cout << "index error"; }
};

class EmptySlot{
public:
    void what(){ std::cout << "empty"; }
};

template<typename T, int N>
class buffer{
public:
    buffer(){
        for(int i = 0; i < N; i++)
            data_[i] = 0;
    }

    void store(int i, T val){
        if(i >= N) throw IndexError();
        data_[i] = val;
    }

    T fetch(int i){
        if(data_[i] == 0) throw EmptySlot();
        return data_[i];
    }

private:
    T data_[N];
};

int main(){
    int idx;
    int val;
    buffer<int, 4> bf;

    try{
        for(int i = 0; i < 4; i++){
            std::cin >> idx >> val;
            bf.store(idx, val);
        }
    }
    catch(IndexError& e){
        e.what();
        std::cout << std::endl;
    }

    for(int i = 0; i < 4; i++){
        try{
            std::cout << bf.fetch(i) << " ";
        }
        catch(EmptySlot& e){
            e.what();
            std::cout << " ";
        }
    }

    return 0;
}