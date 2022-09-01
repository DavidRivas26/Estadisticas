#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <windows.h>

using namespace std;

char a, b, c, o, total=1;
int j,e;
float aux, suma=0;
char VF[50];                           
float Suma;                                      
int cont;           
bool Conse = true;
char VF1[50];
int NumerosM;                                    
int Mediana, permitir;  


int membrete(){
	
cout<<"\t\t\t\t\t,---.     |             |o     |    o                "<<endl;	
cout<<"\t\t\t\t\t|--- ,---.|---1 ,---.,---|.,---.|--- .,---.,---.,---. "<<endl;
cout<<"\t\t\t\t\t|    `---.|    ,---||   ||`---.|    ||    ,---|`---. "<<endl;
cout<<"\t\t\t\t\t`---'`---'`---'`---^`---'``---'`---'``---'`---^`---' "<<endl<<endl;	
	
}

int main(){
		
membrete();		

cout<<"\t\t\t\t\t\t\t|-------------|"<<endl;		
cout<<"\t\t\t\t\t\t\t| 1- Media    |"<<endl;                             
cout<<"\t\t\t\t\t\t\t| 2- Mediana  |"<<endl;
cout<<"\t\t\t\t\t\t\t| 3- Salir    |"<<endl;
cout<<"\t\t\t\t\t\t\t|-------------|"<<endl;	
	
cout<<"\n\nElige Una Opcion:";
cin>>o;
	
	
if ((o=='1') || (o=='1')){ system("cls");
		
	bool prueba3 = true;
  		do{
	  	
	cout<<"\nIngrese la cantidad de datos: "; cin>>VF1;  
	prueba3 = false;                                                 
	
	permitir = atoi(VF1);  
	  		 
   	if(permitir >10){
   	
	cout<<"\nERROR, demasiados digitos\n";	
   	cout<<"\nIngrese la cantidad de datos: "; cin>>VF1;	   	
	   }
	   
	   for( int i = 0;i<strlen(VF1) && prueba3 == false;i++){
   		
   		prueba3 = !isdigit(VF1[i]);
   	}
  	}while(prueba3 == true);
	   
	 NumerosM= atoi(VF1);
	   system("cls");

	      	
	int Bector[50];
    int tam,i,j,aux;
    
    do {
      Conse = false;
      cin.clear();
      if(cont > 0) cin.ignore(1024, '\n');
   	system("cls");

    for (i=0;i<NumerosM;i++)
    {
        cout<<"\n-"<<(i+1)<<": ";
        cin>>Bector[i];
    }
    for(i=0;i<NumerosM;i++)
    {
        for(j=i+1;j<NumerosM;j++)
        {
            if(Bector[i]>Bector[j])
            {
                aux=Bector[i];
                Bector[i]=Bector[j];
                Bector[j]=aux;
            }
        }
    }
    
    	if(cin.fail() && cin.rdstate()){
         Conse = true;
      }
   } while (Conse);
    

  cout<<"\nSe van a organizar los Numeros\n"<<endl;
    
    int pos = NumerosM / 2;
				float m = 0.0;
				
				if (NumerosM% 2 == 0) {
					m = (float)(Bector[pos - 1] + Bector[pos]) / 2.0; 
				}
				else {
					m = Bector[pos ];
				}
    
    
    	for(int i=0; i<NumerosM; i++){
					
					cout<<i+1<<". "<<Bector[i]<<endl; 
				
				}						
			
				cout<<"\nEl resultado de la mediana es: "<<m<<endl;
	      	
	     	
	     cout << "\nDesea salir S/N : ";
	     cin>>o;
	 
       	if ((o=='n') || (o=='N')){
	  	system("cls");
	 	return main();		
	     }
	 
	     else if ((o=='s') || (o=='S')){
	  	 char s;
	 	 cout << "\nEsta seguro que desea salir S/N : ";
	 	 cin>>s; 
	 	 if ((s=='s') || (s=='S')){
	 	 exit (1);	
	 	 }
	 	
	 	 else if ((s=='n') || (s=='N')){
	 	 system("cls");	
	 	 return main();	
	 	 }		
	     }	     	
          
        }
	
	
	
	 else if ((o=='2') || (o=='2')){ system("cls");
		
	 
	    bool prueba3 = true;
  		do{
	  	
	cout<<"\nIngrese la cantidad de datos: "; cin>>VF1;  
	prueba3 = false;                                                 
	  	
	 permitir = atoi(VF1); 	
		  	 
   	if(permitir >10){
   	
	cout<<"\nERROR, demasiados digitos\n";	
   	cout<<"\nIngrese la cantidad de datos: "; cin>>VF1;	   	
	   }
   	
	   for( int i = 0;i<strlen(VF1) && prueba3 == false;i++){
   		
   		prueba3 = !isdigit(VF1[i]);
   	}
  	}while(prueba3 == true);
	   
	 NumerosM= atoi(VF1);
	   system("cls");

	      	
	int Bector[50];
    int tam,i,j,aux;
    
    do {
      Conse = false;
      cin.clear();
      if(cont > 0) cin.ignore(1024, '\n');
   	system("cls");

    for (i=0;i<NumerosM;i++)
    {
        cout<<"\n-"<<(i+1)<<": ";
        cin>>Bector[i];
    }
    for(i=0;i<NumerosM;i++)
    {
        for(j=i+1;j<NumerosM;j++)
        {
            if(Bector[i]>Bector[j])
            {
                aux=Bector[i];
                Bector[i]=Bector[j];
                Bector[j]=aux;
            }
        }
    }
    
    	if(cin.fail() && cin.rdstate()){
         Conse = true;
      }
   } while (Conse);
    

  cout<<"\nSe van a organizar los Numeros\n"<<endl;
    
    int pos = NumerosM / 2;
				float m = 0.0;
				
				if (NumerosM% 2 == 0) {
					m = (float)(Bector[pos - 1] + Bector[pos]) / 2.0; 
				}
				else {
					m = Bector[pos ];
				}
    
    
    	for(int i=0; i<NumerosM; i++){
					
					cout<<i+1<<". "<<Bector[i]<<endl; 
				
				}						
			
				cout<<"\nEl resultado de la mediana es: "<<m<<endl; 
	     
		cout << "\nDesea salir S/N : ";
     	cin>>o;
 	
     	if ((o=='n') || (o=='N')){
	 	system("cls");
	 	return main();		
     	}
	
     	else if ((o=='s') || (o=='S')){
	 	char s;
	 	cout << "\nEsta seguro que desea salir S/N : ";
	 	cin>>s;
	 	if ((s=='s') || (s=='S')){
	 	exit (1);	
	 	}
	  	
	 	else if ((s=='n') || (s=='N')){
	 	system("cls");	
	 	return main();	
		}		
	 }	      
	       
	     }
	  	 
	 
	 
	 
	else if ((o=='3') || (o=='3')){ system("cls");
		
		char s;
		cout << "Estas Seguro De Que Deseas Salir S/N : ";
		cin>>s;
		if ((s=='s') || (s=='S')){
		exit (1);	
		}
		
		else if ((s=='n') || (s=='N')){
		system("cls");	
		return main();	
		}
		
	}
	
	
	else if ((o!='c') || (o!='C') || (o!='a') || (o!='A') || (o!='B') || (o!='b')){
		
		cout<<"ERROR La Opcion Ingresada Es Incorrecta ";
		system("cls");
		return main();
	}		 
	
		return 0;	
}
