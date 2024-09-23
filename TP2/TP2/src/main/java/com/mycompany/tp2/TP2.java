/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.tp2;

/**
 *
 * @author andre
 */
public class TP2 {

    public static void main(String[] args) { //throws Exception
        
        Alumno a = new Alumno ("Andres", "Correnti", 19, 2022);
        
        Docente d = new Docente("Jorge", "Cassan", 35, 2014);
        
        //Alumno
        a.consulta_nombre("Andres", "Correnti", 19);
        a.ingresoA(a);
        //Docente
        d.ingresoD(d);
    }
}
