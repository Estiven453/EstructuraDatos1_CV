#include <iostream>
#include <vector>

using namespace std;

class Evento{

private:

    vector<string> asistentes; // estructura dinámica

public:

    // insertar un asistente
    void insertar(){

        string nombre;

        cout<<"Ingrese nombre del asistente: ";
        cin>>nombre;

        asistentes.push_back(nombre);

        cout<<"Asistente agregado\n";

    }

    // eliminar un asistente
    void eliminar(){

        string nombre;

        cout<<"Ingrese nombre a eliminar: ";
        cin>>nombre;

        for(int i=0;i<asistentes.size();i++){

            if(asistentes[i] == nombre){

                asistentes.erase(asistentes.begin()+i);

                cout<<"Asistente eliminado\n";
                return;

            }

        }

        cout<<"Asistente no encontrado\n";

    }

    // buscar un asistente
    void buscar(){

        string nombre;

        cout<<"Ingrese nombre a buscar: ";
        cin>>nombre;

        for(int i=0;i<asistentes.size();i++){

            if(asistentes[i] == nombre){

                cout<<"Asistente encontrado en posicion "<<i<<endl;
                return;

            }

        }

        cout<<"Asistente no encontrado\n";

    }

    // mostrar lista
    void mostrar(){

        cout<<"\nLista de asistentes:\n";

        for(int i=0;i<asistentes.size();i++){

            cout<<i<<" - "<<asistentes[i]<<endl;

        }

    }

    // tamaño de la lista
    void size(){

        cout<<"Total de asistentes: "<<asistentes.size()<<endl;

    }

};

int main(){

    Evento evento;

    int opcion;

    do{

        cout<<"\n===== MENU EVENTO =====\n";
        cout<<"1. Insertar asistente\n";
        cout<<"2. Eliminar asistente\n";
        cout<<"3. Buscar asistente\n";
        cout<<"4. Mostrar asistentes\n";
        cout<<"5. Elementos de la lista \n";
        cout<<"6. Salir\n";

        cout<<"Seleccione opcion: ";
        cin>>opcion;

        switch(opcion){

            case 1:
                evento.insertar();
            break;

            case 2:
                evento.eliminar();
            break;

            case 3:
                evento.buscar();
            break;

            case 4:
                evento.mostrar();
            break;

            case 5:
                evento.size();
            break;

        }

    }while(opcion != 6);

}
