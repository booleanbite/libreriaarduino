/*
 * Este archivo contiene la definicion la clase para gestionar 3 leds.
 * En este archivo se define la clase.
 * Autor: Booleanbite.com
 * Fecha: 14/12/2014.
 */
#include<Arduino.h> //Librerias de Arduino.
#include "MyLeds.h" //Añadimos la declaracion de la clase
//Definicion del constructor
myLeds::myLeds(byte pin1, byte pin2, byte pin3){
  this->_pin1=pin1;
  this->_pin2=pin2;
  this->_pin3=pin3;
  pinMode(this->_pin1, OUTPUT);
  pinMode(this->_pin2, OUTPUT);
  pinMode(this->_pin3, OUTPUT);
}
//DEfinicion del destructor
myLeds::~myLeds(){}
//Definicion del primer metodo
void myLeds::changePin1(byte state){
   if(state==H){
     digitalWrite(this->_pin1,HIGH);
   }else{
     digitalWrite(this->_pin1,LOW);    
   } 
}
//Definicion del Segundo metodo
void myLeds::changePin2(byte state){
   if(state==H){
     digitalWrite(this->_pin2,HIGH);
   }else{
     digitalWrite(this->_pin2,LOW);    
   } 
}
//Definicion del tercer metodo
void myLeds::changePin3(byte state){
   if(state==H){
     digitalWrite(this->_pin3,HIGH);
   }else{
     digitalWrite(this->_pin3,LOW);    
   } 
}
