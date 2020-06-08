//sistema de nomina
#include <stdio.h>

int main()
{
    int x;
    printf("Bienbenido \n");
    printf("Eliga una opcion\n");
    printf("1- Factueas \n2- Control de inventario \n3- Cuentas por cobrar\n4- Cuentas por pagar\n5- cotizaciones \n6-Nomina de pago \n7- Recursos hunamos \n8-control de Acceso \n9- Ordenes de compras \n10- Control de pedidos \n11- Salir \n ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Fracturas \n");
            //se solicita que ingresen su nombre y clave
            //comprobar que el nombre y la clave sea correcto para la factura
            break;
        case 2:
            printf("Control de inventario \n");
            // se solisita que ingrese su nombre y clave
            //se muestran todos los productos con ese nombre
            break;
        case 3:
            printf("Cuentas por cobrar\n");
            //se muestran la descripcion de todas las cuentas por cobrar
            // y se aparece el total al sumar todas las cuentas
            break;
        case 4:
            printf("Cuentas por pagar \n");
            //se muestran la descripcion de todas las cuentas por pagar
            // y se aparece el totel al sumar las cuentas
            break;
        case 5:
            printf("Cotizaciones \n");
            //se ingresan y guardan los datos del producto y precio
            //del producto que se decee comprar
            // y se le mostraran formas y plazos de pago
            break;
        case 6:
            printf("nomina de pago\n");
            //se pedira el nombre y clave del empleado
            break;
        case 7:
            printf("Recursos humanos\n");
            //se pedira el nombre y clave del empleado
            //para verificar informacion personal
        case 8:
            printf("Control de acceso \n");
            //essta opcion sera en caso de olvidar la contraseña
            break;
        case 9:
            printf("Ordenes de compras\n");
            //se mostraran todas las ventas hechas hasta el momento
            break;
        case 10:
            printf("Control de pedidos \n");
            //se mostraran todas las ventas que han sido aceptadas
            //y las que aun no han sido aceptadsa
            break;
        case 11:
            printf("Salir \n");
            break;
            default:
            printf("opcion no valida\n");
    }
    return 0;
}
