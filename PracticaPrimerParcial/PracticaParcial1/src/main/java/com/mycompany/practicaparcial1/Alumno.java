/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practicaparcial1;

/**
 *
 * @author andre
 */
public class Alumno extends Persona {
    private Persona persona;
    private int Notas;

    public Alumno(String cnombre, String capellido, int cedad) {
        super(cnombre, capellido, cedad);
    }

    public Persona getPersona() {
        return persona;
    }

    public void setPersona(Persona persona) {
        this.persona = persona;
    }

    public int getNotas() {
        return Notas;
    }

    public void setNotas(int Notas) {
        this.Notas = Notas;
    }
    
}
