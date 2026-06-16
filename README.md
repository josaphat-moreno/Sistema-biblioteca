# Sistema de Biblioteca

## Descripción

Este proyecto permite registrar y mostrar información básica de varios libros.

## Objetivo

El programa tiene como finalidad almacenar información de diferentes libros utilizando estructuras en C++

## Funcionalidades

- Registrar libros.
- Mostrar información de los libros.
- Organizar los datos mediante estucturas.

## Tecnologías utilizadas

- C++
- Markdown
- Visual Studio Code

## Estructura del programa

### Estructura Libro

Permite almacenar

- Título
- Autor
- Año de publicación

### Función mostrarLibro()

Permite mostrar la información de cada libro almacenado.

## Código fuente

```cpp

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
```

## Enlace

[Github](https://github.com)

## Resultado esperado

El programa mostrará la información corrrespondiente a cada libro registrado.

## Conclusión

Markdown permite documentar proyectos de softwar de forma clara y organizada, facilitando la comprensión del código y sus funcionalidades.

## Autor

**Josaphat Moreno Moreno**

*Grupo 1-2*

Entornos de Desarrollo para Programación