/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.principal;

import java.util.Scanner;

/**
 *
 * @author andre
 */
public class Principal {

    @SuppressWarnings("empty-statement")
    public static void main(String[] args) {
        int rta;
        Scanner leer = new Scanner (System.in);
        Telefono tel = new Telefono();
        boolean flag = true;
        do {
            System.out.println ("Coloque 1: Ingresar numero de telefono.");
            System.out.println("Coloque 2: Cambiar titular de la linea.");
            System.out.println("Coloque 3: Ingresar saldo.");
            System.out.println("Coloque 4: Retirar saldo.");
            System.out.println("Coloque 5: Consultar saldo");
            
            rta = leer.nextInt(); //leer la respuesta del menu, es como si fuese un scanf.
            
            switch (rta){
                case 1 ->{
                    System.out.println("Ingrese el numero de telefono:");
                    tel.IngresarTelefono(leer.nextLong());
                }
                case 2 ->{
                    System.out.println("Ingrese nombre nuevo del titular.");
                    tel.CambiarTitular(leer.next());
                }
                
                case 3 ->{
                    System.out.println("Ingrese cantidad de saldo:");
                    tel.IngresarSaldo(leer.nextInt());
                }
                
                case 4 ->{
                    System.out.println("Ingrese cantidad de saldo a retirar:");
                    tel.RestarSaldo(leer.nextInt());
                }
                
                case 5 -> System.out.println(tel.getSaldo());
                case 0 -> flag = false;
            }
        }while (flag == true);
        
        System.out.println("El numero de telefono es:"+tel.getNrotel());
        System.out.println("El nombre del titular es:"+tel.getNombretitular());
        System.out.println("El saldo es:"+tel.getSaldo());
    }
}
