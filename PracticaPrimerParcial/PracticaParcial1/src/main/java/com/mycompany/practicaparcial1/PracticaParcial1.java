
package com.mycompany.practicaparcial1;

import java.util.Scanner; //LIBRERIA SCANNER

/**
 *
 * @author andre
 */
public class PracticaParcial1 {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in); //SCANEAR
        //String mNombre;
        //String mApellido;
        //int mEdad;
        //MOSTRAR POR CONSTRUCTOR
        //Persona p1 = new Persona ("Marianduki", "Trevisan",19);
        /*p1.MostrarDatos();
        
        //MOSTRAR POR GETTER/SETTER
        p1.setApellido("Marianduki");
        System.out.println ("El nombre es:" +p1.getNombre());*/
        
        //INGRESAR LOS DATOS POR TECLADO.
        Persona p1 = new Persona ();
        System.out.println("Ingrese un nombre:");
        p1.NombreIngresado(leer.next());
        
        System.out.println("Ingrese su apellido:");
        p1.ApellidoIngresado(leer.next());
        
        System.out.println("Ingrese su edad:");
        p1.EdadIngresada(leer.nextInt());
      
    
        System.out.println("El nombre de la persona es:" +p1.getNombre());
        System.out.println("El apellido de la persona es:" +p1.getapellido());
        System.out.println("La edad es:" +p1.getEdad());
        
    }   
}