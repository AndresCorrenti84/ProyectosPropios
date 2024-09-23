/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.principal;

/**
 *
 * @author andre
 */
public class Telefono {
    private String marca;
    private String modelo;
    private long nrotel;
    private String nombretitular;
    private double saldo;

    //Constructor
    public Telefono(String marca, String modelo, long nrotel, String nombretitular, double saldo) {
        this.marca = marca;
        this.modelo = modelo;
        this.nrotel = nrotel;
        this.nombretitular = nombretitular;
        this.saldo = saldo;
    }

    //Constructor vacio
    public Telefono() {
        
    }

    //setters y getters
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public long getNrotel() {
        return nrotel;
    }

    public void setNrotel(int nrotel) {
        this.nrotel = nrotel;
    }

    public String getNombretitular() {
        return nombretitular;
    }

    public void setNombretitular(String nombretitular) {
        this.nombretitular = nombretitular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(int saldo) {
        this.saldo = saldo;
    }
    //Metodos
    public void IngresarTelefono (long nuevo_telefono){
        
    }
    
    public void CambiarTitular (String Nuevo_Titular){
        
    }
    
    public void IngresarSaldo (double SaldoIngresado){
        
    }
    
    public void RestarSaldo (double SaldoRetirado){
        
    }
}
