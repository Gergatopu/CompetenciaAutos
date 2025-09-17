#pragma once
#include <stdexcept>

template <typename T>
class ArregloDinamico {
private:
    T* datos;
    int cantidad;
    int capacidad;

    void redimensionar(int nuevaCapacidad) {
        T* nuevo = new T[nuevaCapacidad];
        for (int i = 0; i < cantidad; i++) {
            nuevo[i] = datos[i];
        }
        delete[] datos;
        datos = nuevo;
        capacidad = nuevaCapacidad;
    }

public:
    ArregloDinamico() {
        cantidad = 0;
        capacidad = 2;
        datos = new T[capacidad];
    }

    ~ArregloDinamico() {
        delete[] datos;
    }

    void push_back(T valor) {
        if (cantidad == capacidad) {
            redimensionar(capacidad * 2);
        }
        datos[cantidad++] = valor;
    }

    T get(int indice) {
        if (indice < 0 || indice >= cantidad) {
            throw "Índice fuera de rango";
        }
        return datos[indice];
    }

    void set(int indice, T valor) {
        if (indice < 0 || indice >= cantidad) {
            throw "Índice fuera de rango";
        }
        datos[indice] = valor;
    }

    int size() {
        return cantidad;
    }

    void remove_at(int indice) {
        if (indice < 0 || indice >= cantidad) {
            throw "Índice fuera de rango";
        }
        for (int i = indice; i < cantidad - 1; i++) {
            datos[i] = datos[i + 1];
        }
        cantidad--;
    }

    T& operator[](int indice) {
        if (indice < 0 || indice >= cantidad) {
            throw "Índice fuera de rango";
        }
        return datos[indice];
    }
};
