#include <iostream>
#include <stdio.h>

using namespace std;
class demo{
private:
    string nombre;
    string nControl;
    string pelicula;
    string carro;
    string comida;
    
public:
    demo();
    demo(string, string);
    demo(string, string, string, string, string);
    void setnombre(string);
    string getnombre();
    string getnControl();
    string getpelicula();
    string getcarro();
    string getcomida();
};
demo::demo(){
    nombre="";
    nControl="";
    pelicula="";
    carro="";
    comida="";
}
demo ::demo(string n, string aux){
    nombre = n;
    nControl = aux;
}

demo ::demo(string n, string con, string pel, string car,string com){
    nombre = n;
    nControl = con;
    pelicula = pel;
    carro = car;
    comida = com;
}

string demo::getnombre(){
    return nombre;
}

string demo::getnControl(){
    return nControl;
}

string demo::getpelicula(){
    return pelicula;
}

string demo::getcarro(){
    return carro;
}

string demo::getcomida(){
    return comida;
}

int main(int argc, const char * argv[]) {
    demo a;
    demo b("Juan", "1234");
    demo c("Eliezer","341210011","Armaggedon","Tsuru","Pizza");
    cout<<b.getnombre()<<endl;
    cout<<c.getnombre()<<endl;
    cout<<c.getnControl()<<endl;
    cout<<c.getpelicula()<<endl;
    cout<<c.getcarro()<<endl;
    cout<<c.getcomida()<<endl;
    return 0;
}
