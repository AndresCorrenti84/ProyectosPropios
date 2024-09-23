/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tp2;

/**
 *
 * @author andre
 */
public class Persona {
    private String Nombre;
    private String Apellido;
    private int Edad;
    private int AnoIngreso;
    
    //CONSTRUCTOR

    public Persona(String Nombre, String Apellido, int Edad, int AnoIngreso) {
        this.Nombre = Nombre;
        this.Apellido = Apellido;
        this.Edad = Edad;
        this.AnoIngreso = AnoIngreso;
    }

    //SETTER GETTER
    public String getNombre() {
        return Nombre;
    }

    public void setNombre(String Nombre) {
        this.Nombre = Nombre;
    }

    public String getApellido() {
        return Apellido;
    }

    public void setApellido(String Apellido) {
        this.Apellido = Apellido;
    }

    public int getEdad() {
        return Edad;
    }

    public void setEdad(int Edad) {
        this.Edad = Edad;
    }

    public int getAnoIngreso() {
        return AnoIngreso;
    }

    public void setAnoIngreso(int AnoIngreso) {
        this.AnoIngreso = AnoIngreso;
    }
    
    //FUNCION METODO
    public void consulta_nombre(String Nombre, String Apellido, int edad){
        System.out.println("Nombre:" +Nombre);
        System.out.println("Apellido:" +Apellido);
        System.out.println("Edad:" +Edad);
    }

    @Override
    public String toString() {
        return "Persona{" + "Nombre=" + Nombre + ", Apellido=" + Apellido + ", Edad=" + Edad + ", AnoIngreso=" + AnoIngreso + '}';
    }
    
    
}
