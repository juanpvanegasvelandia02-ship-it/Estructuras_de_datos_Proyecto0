#include "valParam.h"
#include <iostream>
using namespace std;

bool validarParametros(string comando, string params[], int cantidad)
{
    if (comando == "cargar_comandos")
    {
        if (validarCargar_comandos(params, cantidad)){

            cout << "Resultado exitoso, se cargaron los comandos..." << endl;
        }
    }
    else if (comando == "cargar_elementos")

        if (validarCargar_elementos(params, cantidad)){

            cout << "Resultado exitoso, se cargaron los elementos..." << endl;
        }

    else if (comando == "agregar_movimiento")

        if(agregar_movimiento(params, cantidad)){

            cout << "Resultado exitoso, se agrego el movimiento..." << endl;

        }

    else if (comando == "agregar_analisis")

        if(agregar_analisis(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "agregar_elemento")

        if(agregar_elemento(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "guardar")
        if(validar_guardar(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "simular_comandos")
        if(validar_simular(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "ubicar_elementos")
        if(validar_ubicar (params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "en_cuadrante")
        if(validar_cuadrante(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "crear_mapa")
        if(validar_crearMapa(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "ruta_mas_larga")
        if(validar_ruta(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "ayuda")
        if(validar_ayuda(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else if (comando == "salir")
        if(validar_salir(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis..." << endl;
        }

    else
    {
        cout << "Comando NO valido" << endl;
        return false;
    }
}


bool validarCargar_comandos(string params[], int cantidad)
{

    if (cantidad != 1)
    {
        cout << "Cantidad de parametros incorrecta"<<endl;
        return false;
    }

    if (params[0] == "")
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;
}

bool validarCargar_elementos(string params[], int cantidad){

    if (cantidad != 1)
    {
        cout << "Cantidad de parametros incorrecta"<<endl;
        return false;
    }

    if (params[0] == "")
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;

}

bool agregar_movimiento(string params[], int cantidad){

    if (cantidad!=3)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }
    

    if (params[0]!="avanzar"||params[0]!="avanzar")
    {
        cout<<"El tipo de movimiento es incorrecto"<<endl;

        return false;
    }

    if (params[2]!="cm"||params[2]!="dm"||params[2]!="m"||params[2]!="km"||params[2]!="grd"||params[2]!="rad")
    {
        cout<<"Unidad de medida invalida"<<endl;
        return false;
    }

    return true;

}

bool agregar_analisis(string params[], int cantidad){

    if (cantidad!=2)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }
    if (params[0]!="fotografiar"||params[0]!="composicion"||params[0]!="perforar")
    {
        cout<<"El tipo de analisis es incorrecto"<<endl;

        return false;
    }

    if (params[1] == "")
    {
        cout << "Objeto NO valido" << endl;
        return false;
    }
}

bool agregar_elemento(string params[], int cantidad){

    if (cantidad!=5)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }

    if (params[0]!="roca"||params[0]!="crater"||params[0]!="monticulo"||params[0]!="duna")
    {
       cout<<"El tipo de componente NO es valido"<<endl;
       return false;
    }

    // falta verificacion de si es un numero o no para los ejes X y Y

    if (params[2]!="cm"||params[2]!="dm"||params[2]!="m"||params[2]!="km")
    {
       cout<<"El tipo de unidad NO es valida"<<endl;
       return false;
    }

    return true;

}

bool validar_guardar(string params[], int cantidad){

}

bool validar_simular(string params[], int cantidad){

}

bool validar_ubicar(string params[], int cantidad){

}

bool validar_cuadrante(string params[], int cantidad){

}

bool validar_crearMapa(string params[], int cantidad){

}

bool validar_ruta(string params[], int cantidad){

}

bool validar_ayuda(string params[], int cantidad){

}

bool validar_salir(string params[], int cantidad){

}