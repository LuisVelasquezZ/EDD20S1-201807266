### Especificación Informal
Moneda = tipo de datos, crearMoneda, transferencia, transferenciaForm
- Descrición: Los valores del TDA moneda son nombre cantidad y lista de monederos. El TDA moneda es mutable.
Operaciones:
* crearMoneda (nombre texto, cantidad entero) devuelve (moneda)
    -requerimientos: cantidad <= 0
    -efecto: devuelve el objeto moneda con sus propiedades
* transferencia (cantidad entero, moneda, dueño) devuelve (vacio)
    -requerimientos: el dueño no debe poseer monedero de esa moneda, la moneda debe existir
    -efecto: agrega un propietario de moneda y asigna la cantidad que tiene
* transferenciaForm (origen, destino, cantidad entero, moneda) devuelve (vacio)
    -requerimientos: cantidad de monedas en el monedero origen > 0, cantidad > 0, la moneda debe existir
    -efecto: resta moendas de un propietario y se las agrega a otro 
