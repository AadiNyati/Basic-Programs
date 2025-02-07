#include <iostream>
using namespace std;
class Calculator
{
    public:
    int op, result, a, b;
    void operation(){
        cout<<"Enter 1 for sum, 2 for difference, 3 for product, 4 for division."<<endl;
        cin>>op;
    }
    void calc(){
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
        if (op==1){
            result = a + b;
        }
        else if (op==2){
            result = a - b;
        }
        else if (op==3){
            result = a * b;
        }
        else if (op==4){
            result = a / b;
        }
        else{
        }
    }
    void output(){
        if (op == 1 || op == 2 || op == 3 || op == 4){
            cout<<"Result: "<<result<<endl;
        }
        else{
            cout<<"Invalid operation"<<endl;
        }
    }

};
int main(){
    Calculator c;
    c.calc();
    c.operation();
    c.output();
    return 0;
}