int Obtener_Pelicula_Disponible (char cod_pelicula[5]) {
	char formato[10], resp;   
	int disponible=0, formato_valido=0;   
	do   {     
		LEER_FORMATO(formato);       
		formato_valido= VALIDAR_FORMATO(formato);    
		if (!formato_valido)         
		return (FORMATO_NO_EXISTENTE);       
		else  {       
			LEER_TITULO_PELICULA(titulo);      
			if (! EXISTE_PELICULA(titulo))        
			return (PELICULA_NO_EXISTENTE);     
			else        {         
				disponible= VALIDAR_PELICULA_DISPONIBLE (formato, titulo, cod_pelicula);    
				if (!disponible)        
				return (PELICULA_NO_DISPONIBLE);     
				else       
				{          printf(“Ha  escogido  la  pelicula\n  %s,  en  formato  %s”,  titulo, formato);    
					printf(“¿Está seguro? (s/n)\n”);      scanf(“%c”,&resp);  
				}   
			}    
		}  
	} while (resp!=’s’); 
} 