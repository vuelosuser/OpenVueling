#ifndef __RESERVA_H__
#define __RESERVA_H__

#define RESERVA(OBJ) ((Reserva*)OBJ)

#ifndef String
#define String char*
#endif


typedef struct _Reserva Reserva;

struct _Reserva {
  /** Attributes **/
  /*private*/
    int reservaID;
    string numero;
  /** Associations **/
/** Operations **/
};

/** Operations **/
/*public*/
void Reserva_crearReserva ( Reserva *this );
void Reserva_modificarReserva ( Reserva *this );
void Reserva_eliminarReserva ( Reserva *this );
void Reserva_guardarReservas ( Reserva *this );
#endif
