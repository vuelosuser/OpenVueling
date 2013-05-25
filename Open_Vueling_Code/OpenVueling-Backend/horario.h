#ifndef __HORARIO_H__
#define __HORARIO_H__

#define HORARIO(OBJ) ((Horario*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Horario Horario;

struct _Horario {
  /** Attributes **/
  /*private*/
    int horarioID;
    date dia;
    time hora;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Horario_agregarHorario ( Horario *this );
void Horario_modificarHorario ( Horario *this );
void Horario_guardarHorario ( Horario *this );
void Horario_eliminarHorario ( Horario *this );
#endif
