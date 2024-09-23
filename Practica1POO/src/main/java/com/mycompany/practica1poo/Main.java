/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practica1poo;

/**
 *
 * @author andre
 */
public class Main {
    public static void main (String[] Args){
        Secundaria secu=new Secundaria();
        int dni = 45450455;
        int year = 19;
        String nombre = "Andres";
        secu.documento(dni);
        secu.anhos(year);
        secu.nombre(nombre);
    }
    
}
