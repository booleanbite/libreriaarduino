/*
 * Este archivo define la clase para gestionar 3 leds.
 * En este archivo se declara la clase junto con los
 * metodos y propiedades de esta.
 * Autor: Booleanbite.com
 * Fecha: 14/12/2014.
 */
#include <Arduino.h> //Librerias de Arduino
#define H HIGH //Indica que el estado es Alto
#define L LOW //Indica que el estado es Bajo
/*
 *Esta clase controla 3 leds para que podamos controlarlo
 */
class myLeds{
   private:
     byte _pin1; //Primer Pin
     byte _pin2;// Segundo Pin
     byte _pin3;//Tercer Pin
   public:
   myLeds(byte pin1,byte pin2, byte pin3); //Constructor. Se le pasan los numeros de los 3 leds
   ~myLeds(); //Destructor
   void changePin1(byte state); //Cambia el estado del primer pin
   void changePin2(byte state); //Cambia el estado del Segundo pin
   void changePin3(byte state); //Cambia el estado del Tercer pin
};
