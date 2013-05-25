#ifndef __EMPLEADO_H__
#define __EMPLEADO_H__

#define EMPLEADO(OBJ) ((Empleado*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Empleado Empleado;

struct _Empleado {
  /** Attributes **/
  /*private*/
    string empleadoID;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Empleado_listarVuelos ( Empleado *this );
void Empleado_listarOpciones ( Empleado *this );
void Empleado_listarHorarios ( Empleado *this );
#endif
