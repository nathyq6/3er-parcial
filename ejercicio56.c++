//equipo 6 

#include <iostream>
#include <string>

using namespace std;

// valentin Clase Usuario
class Usuario {
private:
    string nombre;
    string correo;
    string contrasena;

public:
    Usuario(string nombre, string correo, string contrasena) : nombre(nombre), correo(correo), contrasena(contrasena) {}

    string getNombre() const { return nombre; }
    string getCorreo() const { return correo; }
    string getContrasena() const { return contrasena; }

    void setNombre(string nombre) { this->nombre = nombre; }
    void setCorreo(string correo) { this->correo = correo; }
    void setContrasena(string contrasena) { this->contrasena = contrasena; }
};

// osvaldo valentin escobar Clase Producto
class Producto {
private:
    string nombre;
    double precio;

public:
    Producto(string nombre, double precio) : nombre(nombre), precio(precio) {}

    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
};

//danna paola garcia perez Clase Anuncio
class Anuncio {
private:
    Usuario vendedor;
    Producto producto;

public:
    Anuncio(Usuario vendedor, Producto producto) : vendedor(vendedor), producto(producto) {}

    Usuario getVendedor() const { return vendedor; }
    Producto getProducto() const { return producto; }
};

// Función para mostrar el menú del usuario anónimo
//nathaly cuamatzi cuamatzi 
void mostrarMenuAnonimo() {
    cout << "1. Identificarse (login)" << endl;
    cout << "2. Ver todos los productos a la venta" << endl;
    cout << "0. Salir de la aplicación" << endl;
}

// Ailyn Santacruz Avalos Función para mostrar el menú del usuario registrado
void mostrarMenuRegistrado() {
    cout << "1. Modificar mis datos personales" << endl;
    cout << "2. Mostrar mis vendedores recomendados" << endl;
    cout << "3. Recomendar un vendedor" << endl;
    cout << "4. Ver todos los productos a la venta" << endl;
    cout << "5. Ver los productos de mis vendedores recomendados" << endl;
    cout << "6. Valorar un producto" << endl;
    cout << "7. Poner a la venta un producto" << endl;
    cout << "8. Desconectarse (volver a anónimo)" << endl;
    cout << "0. Salir de la aplicación" << endl;
}

// Katherine Sanchez Morales Función para mostrar el menú del usuario administrador
void mostrarMenuAdmin() {
    cout << "1. Dar de alta a un nuevo usuario" << endl;
    cout << "2. Modificar los datos de un usuario" << endl;
    cout << "3. Mostrar todos los usuarios" << endl;
    cout << "4. Mostrar todos los vendedores recomendados por un usuario" << endl;
    cout << "5. Ver los productos ofrecidos por un vendedor" << endl;
    cout << "6. Mostrar todos los productos a la venta" << endl;
    cout << "7. Desconectarse (volver a anónimo)" << endl;
    cout << "0. Salir de la aplicación" << endl;
}

//danna paola Función para el inicio de sesión
Usuario* login(const Usuario& usuario) {
    string correo, contrasena;
    cout << "Ingrese su correo electrónico: ";
    cin >> correo;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    if (usuario.getCorreo() == correo && usuario.getContrasena() == contrasena) {
        return new Usuario(usuario);
    } else {
        cout << "Credenciales incorrectas. Por favor, inténtelo de nuevo." << endl;
        return nullptr;
    }
}

int main() {
    Usuario admin("admin", "admin@admin.com", "admin123");

    // Menú principal
    //todos
    int opcion;
    do {
        cout << "\nBienvenido a la plataforma de anuncios de productos de segunda mano." << endl;
        cout << "Seleccione su tipo de usuario:" << endl;
        cout << "1. Usuario anónimo" << endl;
        cout << "2. Usuario registrado" << endl;
        cout << "3. Usuario administrador" << endl;
        cout << "0. Salir de la aplicación" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: // Usuario anónimo //nathaly
                mostrarMenuAnonimo();
                break;
            case 2: // 
                {
                    
                    mostrarMenuRegistrado();
                }
                break;
            case 3: //Ailyn Usuario administrador
                {
                    
                    mostrarMenuAdmin();
                }
                break;
            case 0: 
                cout << "Saliendo de la aplicación..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
