#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#define CLIENTE(OBJ) ((Cliente*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Cliente Cliente;

struct _Cliente {
  /** Attributes **/
  /*private*/
    string direccion;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Cliente_modificarCuenta ( Cliente *this );
void Cliente_listaReservas ( Cliente *this );
#endif
