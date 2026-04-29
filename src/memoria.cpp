#include <iostream>

using namespace std;

int main(){
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"bool: "<<sizeof(bool)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
  

    int a;
    a=5;
    //& es direccion, tiene la direccion de memoria
    cout<<"&: "<<&a<<endl;
    cout<<a<<endl;

    cout<<"*: ";
    //* es indireccion, tiene el valor dentro de una direccion de memoria
    cout<<*(&a)<<endl;

    cout<<"int*: "<<sizeof(int*)<<endl;
    cout<<"double*: "<<sizeof(double*)<<endl;
    cout<<"float*: "<<sizeof(float*)<<endl;
    cout<<"char*: "<<sizeof(char*)<<endl;
    cout<<"bool*: "<<sizeof(bool*)<<endl;
    cout<<"long*: "<<sizeof(long*)<<endl;

    int* direccion;
    cout<<"direccion: "<<direccion<<endl;
    cout<<"&direccion: "<<&direccion<<endl;
    cout<<"*direccion: "<<*direccion<<endl;
    *direccion=10;
    cout<<"*direccion: "<<*direccion<<endl;

    return 0;
}