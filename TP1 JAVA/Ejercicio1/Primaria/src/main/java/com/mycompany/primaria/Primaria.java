/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.primaria;

/**
 *
 * @author andre
 */
public class Primaria {

    public static void main(String[] args) {
        System.out.println("Hello World!");
        
        Persona person = new Persona();
        
        person.crearPersona(19, "Andres", "Correnti");
        System.out.println("Persona creada.");
        System.out.println("Nombre:"+person.getNombre());
        System.out.println("Apellido:"+person.getApellido());
        System.out.println("Edad:"+person.getEdad());
    }
}
