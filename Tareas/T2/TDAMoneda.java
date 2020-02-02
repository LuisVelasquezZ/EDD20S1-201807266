/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tdamoneda;

import java.util.ArrayList;

/**
 *
 * @author Luis Fernando
 */
public class TDAMoneda {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}

class Moneda {
    String nombre;
    int cantidad;
    ArrayList<Monedero> monederos = new ArrayList<Monedero>();

    public Moneda(String nombre, int cantidad) {
        this.nombre = nombre;
        this.cantidad = cantidad;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }

    public ArrayList<Monedero> getMonederos() {
        return monederos;
    }

    public void setMonederos(ArrayList<Monedero> monederos) {
        this.monederos = monederos;
    }
    
    public Moneda crearMoneda(String nombre, int cantidad) {
        Moneda m = new Moneda(nombre, cantidad);
        return m;
    }
    
    public void transferencia(int cantidad, Moneda moneda, Duenio duenio) {
        moneda.getMonederos().add(new Monedero(duenio, moneda, cantidad));
    }
    
    public void trasnferenciaForm(Duenio origen, Duenio destino, int cantidad, Moneda moneda) {
        for(Monedero m :moneda.getMonederos()) {
            if(origen.nombre == m.getDuenioo().nombre) {
                for(Monedero n: moneda.getMonederos()) {
                    if(destino.nombre == n.getDuenioo().nombre) {
                        m.setCantidad(m.getCantidad() - cantidad);
                        n.setCantidad(n.getCantidad() +cantidad);
                    }
                }
            }
        }
    }
        
}

class Monedero {
    Duenio duenio;
    Moneda mondea;
    int cantidad; 

    public Monedero(Duenio duenio, Moneda mondea, int cantidad) {
        this.duenio = duenio;
        this.mondea = mondea;
        this.cantidad = cantidad;
    }

    public Duenio getDuenioo() {
        return duenio;
    }

    public void setDuenio(Duenio duenio) {
        this.duenio = duenio;
    }

    public Moneda getMondea() {
        return mondea;
    }

    public void setMondea(Moneda mondea) {
        this.mondea = mondea;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }
    
    
    
}

class Duenio {
    String nombre;

    public Duenio(String nombre) {
        this.nombre = nombre;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    
}
