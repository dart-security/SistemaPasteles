#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void aceptados( );
void cancelados( );
void entregar();

FILE *ent;
FILE *can;
FILE *pen;

struct entregados{
	char nombre[20];
	char direccion[50];
	char tipo_pastel[50];
	char atendido[20];
	char telefono[20];
	char costo[1000];
	char fecha_ped[30];
	char fecha_entrega[30];
	char motivo[200];	
}datos;


int main()
{
	int opc;
	printf("Seleccione una opcion: \n");
	printf("1. Entregados.\n");
	printf("2. Cancelados.\n");
	printf("3. Por entregar.\n");
	printf("4. Salir.\n");
	scanf("%i", &opc);
	do{
		switch(opc)
		{
			case 1:
				aceptados(  );
				break;
			case 2:
				 cancelados( );
				 break;	 
			case 3:
			
			case 4:
				printf("Esta saliendo del programa");
		}
	}while(opc != 4);
	
	return 0;
}
void aceptados()
{
		char direccion[]= "C:\\Users\\hells_000\\Desktop\\pateles\\Pasteles.txt";
		char res;
	
		ent=fopen(direccion,"at");
		
		if (ent == NULL)
		{
			printf("Error al tratar de crear el archivo.");
			
			exit (1);
		}
		
		printf(".:Lista de entregados:.");
		fprintf(ent,".:Lista de entregados:.");
		
		do{
			fflush(stdin);
		printf("\nNombre: "); gets(datos.nombre);
		printf("Direccion: "); gets(datos.direccion);
		printf("Tipo de pastel: "); gets(datos.tipo_pastel);
		printf("Le atendio: "); gets(datos.atendido);
		printf("Telefonno:"); gets(datos.telefono);
		printf("Costo: $"); gets(datos.costo);
		printf("Fecha de pedido: "); gets(datos.fecha_ped);
		printf("Fecha de entrega: "); gets(datos.fecha_entrega);
		
		fprintf(ent,"\nNombre: ");
			fwrite(datos.nombre,1,strlen(datos.nombre),ent);
		fprintf(ent,"\nDireccion: ");
			fwrite(datos.direccion,1,strlen(datos.direccion),ent);
		fprintf(ent,"\nTipo de pastel: ");
			fwrite(datos.tipo_pastel,1,strlen(datos.tipo_pastel),ent);
		fprintf(ent,"\nLe atendio: ");
			fwrite(datos.atendido,1,strlen(datos.atendido),ent);
		fprintf(ent,"Telefono: ");
			fwrite(datos.telefono,1,strlen(datos.telefono),ent);
		fprintf(ent,"\nCosto: $");
			fwrite(datos.costo,1,strlen(datos.costo),ent);
		fprintf(ent,"\nFecha de pedido: ");
			fwrite(datos.fecha_ped,1,strlen(datos.fecha_ped),ent);
		fprintf(ent,"\nFecha de entrega: ");
			fwrite(datos.fecha_entrega,1,strlen(datos.fecha_entrega),ent);
		
			printf("¿Decea agregar mas registros?,(digite s): ");
				scanf("%c",&res);
				
		}while(res != 's' );
		
	fclose(ent);
	
}
void cancelados()
{
	char direccion[]= "C:\\Users\\hells_000\\Desktop\\pateles\\PastelesCancelados.txt";
		char ru;
	
		can=fopen(direccion,"at");
		
		if (can == NULL)
		{
			printf("Error al tratar de crear el archivo.");
			
			exit (1);
		}
		
		printf(".:Lista de Cancelados:.");
		fprintf(can,".:Lista de Cancelados:.");
		
		do{
			fflush(stdin);
		printf("\nNombre: "); gets(datos.nombre);
		printf("Tipo de pastel: "); gets(datos.tipo_pastel);
		printf("Le atendio: "); gets(datos.atendido);
		printf("Telefonno:"); gets(datos.telefono);
		printf("Fecha de pedido: "); gets(datos.fecha_ped);
		printf("Fecha de entrega: "); gets(datos.fecha_entrega);
		
		fprintf(ent,"\nNombre: ");
			fwrite(datos.nombre,1,strlen(datos.nombre),can);
		fprintf(ent,"\nTipo de pastel: ");
			fwrite(datos.tipo_pastel,1,strlen(datos.tipo_pastel),can);
		fprintf(ent,"\nLe atendio: ");
			fwrite(datos.atendido,1,strlen(datos.atendido),can);
		fprintf(ent,"Telefono: ");
			fwrite(datos.telefono,1,strlen(datos.telefono),can);
		fprintf(ent,"\nFecha de pedido: ");
			fwrite(datos.fecha_ped,1,strlen(datos.fecha_ped),can);
		fprintf(ent,"\nFecha de entrega: ");
			fwrite(datos.fecha_entrega,1,strlen(datos.fecha_entrega),can);
		fprintf(can,"\nMotivos: ");
			fwrite(datos.motivo,1,strlen(datos.motivo),can);
		
			printf("¿Decea agregar mas registros Cancelados?,(digite 's'): ");
				scanf("%c",&ru);
				
		}while(ru == 's');
		
	fclose(can);
	
}
void entregar()
{
	char direccion[]= "C:\\Users\\hells_000\\Desktop\\pateles\\PastelesPendientes.txt";
		char ru;
	
		pen=fopen(direccion,"at");
		
		if (pen == NULL)
		{
			printf("Error al tratar de crear el archivo.");
			
			exit (1);
		}
		
		printf(".:Listado por Entregar:.");
		fprintf(pen,".:Listado por Entregar:.");
		
		do{
			fflush(stdin);
		printf("\nNombre: "); gets(datos.nombre);
		printf("Tipo de pastel: "); gets(datos.tipo_pastel);
		printf("Le atendio: "); gets(datos.atendido);
		printf("Fecha de pedido: "); gets(datos.fecha_ped);
		printf("Fecha de entrega: "); gets(datos.fecha_entrega);
		
		fprintf(pen,"\nNombre: ");
			fwrite(datos.nombre,1,strlen(datos.nombre),pen);
		fprintf(pen,"\nTipo de pastel: ");
			fwrite(datos.tipo_pastel,1,strlen(datos.tipo_pastel),pen);
		fprintf(pen,"\nLe atendio: ");
			fwrite(datos.atendido,1,strlen(datos.atendido),pen);
		fprintf(pen,"\nFecha de pedido: ");
			fwrite(datos.fecha_ped,1,strlen(datos.fecha_ped),pen);
		fprintf(pen,"\nFecha de entrega: ");
			fwrite(datos.fecha_entrega,1,strlen(datos.fecha_entrega),pen);

			printf("¿Decea agregar mas registros Po entregar?,(digite 's'): ");
				scanf("%c",&ru);
				
		}while(ru == 's');
		
	fclose(can);
}
