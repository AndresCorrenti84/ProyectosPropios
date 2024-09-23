/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practicaparcial1;

/**
 *
 * @author andre
 */
public class Persona {
    private String Nombre;
    private String Apellido;
    private int Edad;
    public Persona (){  
    }
    
    public Persona (String cNombre, String cApellido, int cEdad){ //constructor
        Nombre = cNombre;
        Apellido = cApellido;
        Edad = cEdad;
    }
    
    //setter y getters
    public String getNombre(){
        return Nombre;
    }
    public void setNombre (String cNombre){
       Nombre = cNombre;
    }
    public String getapellido (){
        return Apellido;
    }
    public void setApellido(String cApellido){
        Apellido = cApellido;
    }
    public void setEdad (int cEdad){
        Edad = cEdad;
    }
    
    public int getEdad (){
        return Edad;
    }
    //METODO METHOD
    /*public void MostrarDatos (){
        System.out.println ("El nombre es:" +Nombre);
        System.out.println ("El apellido es:" +Apellido);
        System.out.println ("La edad es:" +Edad);
    }*/
    
    public void NombreIngresado(String cNombre){
        Nombre = cNombre;
    }
    public void ApellidoIngresado (String cApellido){
        Apellido = cApellido;
    }
    public void EdadIngresada (int cEdad){
        Edad = cEdad;
    }
}


