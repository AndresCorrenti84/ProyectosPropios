 /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tp2;

/**
 *
 * @author andre
 */
public class Alumno extends Persona {
    private int Legajo;
    private int MateriasAprobadas;
    private int MateriasPendientes;
    
    //CONSTRUCTOR

    public Alumno(String Nombre, String Apellido, int Edad, int AnoIngreso) {
        super(Nombre, Apellido, Edad, AnoIngreso);
    }
    
    
    
    //SETTER Y GETTER

    public int getLegajo() {
        return Legajo;
    }

    public void setLegajo(int Legajo) {
        this.Legajo = Legajo;
    }

    public int getMateriasAprobadas() {
        return MateriasAprobadas;
    }

    public void setMateriasAprobadas(int MateriasAprobadas) {
        this.MateriasAprobadas = MateriasAprobadas;
    }

    public int getMateriasPendientes() {
        return MateriasPendientes;
    }

    public void setMateriasPendientes(int MateriasPendientes) {
        this.MateriasPendientes = MateriasPendientes;
    }
    
    public void ingresoA (Alumno Alm){
        int Egreso =-Alm.MateriasPendientes/4;
        
       
        System.out.println("El año de ingreso es:"+Alm.getAnoIngreso());
        System.out.println("La cantidad de años estimados de egreso es:" +Egreso);
        
    }

    @Override
    public String toString() {
        return "Alumno{" + "Legajo=" + Legajo + ", MateriasAprobadas=" + MateriasAprobadas + ", MateriasPendientes=" + MateriasPendientes + '}';
    }
}
