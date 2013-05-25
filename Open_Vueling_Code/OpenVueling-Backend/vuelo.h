#ifndef __VUELO_H__
#define __VUELO_H__

#define VUELO(OBJ) ((Vuelo*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Vuelo Vuelo;

struct _Vuelo {
  /** Attributes **/
  /*private*/
    int id;
    string numero;
    int asientos;
    string destino;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Vuelo_agregarVuelo ( Vuelo *this );
void Vuelo_modificarVuelo ( Vuelo *this );
void Vuelo_guardarVuelo ( Vuelo *this );
void Vuelo_eliminarVuelo ( Vuelo *this );
#endif
