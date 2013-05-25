#ifndef __USUARIO_H__
#define __USUARIO_H__

#define USUARIO(OBJ) ((Usuario*)OBJ)

#ifndef String
#define String char*
#endif

#include "empleado.h"

typedef struct _Usuario Usuario;

struct _Usuario {
  /** Attributes **/
  /*private*/
    int usuarioID;
    string nombre;
    string apellidos;
    string usuario;
    string contrasena;
    string comentarios;
    boolean privilegios;
  /** Associations **/
   Empleado * unnamed;
/** Operations **/
};

/** Operations **/
/*public*/
void Usuario_ingresar ( Usuario *this );
 Usuario_verificarPrivilegios ( Usuario *this );
#endif
