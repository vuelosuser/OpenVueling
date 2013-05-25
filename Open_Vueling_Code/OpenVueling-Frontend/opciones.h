#ifndef __OPCIONES_H__
#define __OPCIONES_H__

#define OPCIONES(OBJ) ((Opciones*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Opciones Opciones;

struct _Opciones {
  /** Attributes **/
  /*private*/
    boolean salavip;
    string asientoConfort;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Opciones_agregarOpciones ( Opciones *this );
void Opciones_modificarOpciones ( Opciones *this );
void Opciones_eliminarOpciones ( Opciones *this );
void Opciones_GuardarOpciones ( Opciones *this );
void Opciones_listarOpciones ( Opciones *this );
#endif
