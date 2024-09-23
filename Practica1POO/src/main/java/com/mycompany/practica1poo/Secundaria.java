/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practica1poo;

/**
 *
 * @author andre
 */
public class Secundaria {
    private int dni, edad;
    private String nombre;
    
    void documento (int dni){
        System.out.println("El numero de documento de la persona es:"+dni);
    }
    void anhos (int nro){
        System.out.println("La edad de la persona es:"+nro);
    }
    void nombre (String nombre){
        System.out.println("El nombre de la persona es:"+nombre);
    }
}
