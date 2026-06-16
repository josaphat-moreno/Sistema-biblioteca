#include <iostream>
#include <string>

using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anio;
};

void mostrarLibro(const Libro& libro) {
    cout << "Título: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Año: " << libro.anio << endl;
    cout << "-------------------------" << endl;
}

int main() {
    Libro libro1 = {"Cien Años de Soledad", "Gabriel García Márquez", 1967};
    Libro libro2 = {"1984", "George Orwell", 1948};
    Libro libro3 = {"El Principito", "Antoine de Saint-Exupéry", 1943};

    cout << "LIBROS REGISTRADOS:" << endl;
    cout << "========================" << endl;

    mostrarLibro(libro1);
    mostrarLibro(libro2);
    mostrarLibro(libro3);

    return 0;
}