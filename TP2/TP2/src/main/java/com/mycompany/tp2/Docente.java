/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tp2;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author andre
 */
public class Docente extends Persona{

    
    private int Cbu;
    private double Sueldo;
    private String EstadoCivil;
    
    //CONSTRUCTOR 

    public Docente(String Nombre, String Apellido, int Edad, int AnoIngreso) {
        super(Nombre, Apellido, Edad, AnoIngreso);
    }
    
    
    //SETTER Y GETTER

    public int getCbu() {
        return Cbu;
    }

    public void setCbu(int Cbu) {
        this.Cbu = Cbu;
    }

    public double getSueldo() {
        return Sueldo;
    }

    public void setSueldo(double Sueldo) {
        this.Sueldo = Sueldo;
    }

    public String getEstadoCivil() {
        return EstadoCivil;
    }

    public void setEstadoCivil(String EstadoCivil) {
        this.EstadoCivil = EstadoCivil;
    }
    
    public void ingresoD (Docente doc){ //throws Exception
        Scanner leer = new Scanner(System.in);
        int AnoActual = 0;
        System.out.println("Ingrese el año Actual, debe ser mayor a"+doc.getAnoIngreso());
        //do{
            try{
                AnoActual = leer.nextInt();
            } catch(Exception e){ //InputMismatchException
                System.out.println("LA CADENA INTRODUCIDA NO ES UN AÑO");      
                //e.printStackTrace(); //MOSTRAR QUE TIPO DE ERROR ES
            }
        //}while(AnoActual <= doc.getAnoIngreso());
        
        int Antiguedad = AnoActual - doc.getAnoIngreso();
        for (int i = 0; i < Antiguedad; i++){
            Sueldo = Sueldo + Sueldo *0.02;
        }
        System.out.println("Año de ingreso:" +doc.getAnoIngreso());
        System.out.println("Sueldo a cobar:"+Sueldo);
        
        
    }

    @Override
    public String toString() {
        return "Docente{" + "Cbu=" + Cbu + ", Sueldo=" + Sueldo + ", EstadoCivil=" + EstadoCivil + '}';
    }
}
