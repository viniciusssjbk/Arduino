#include <LiquidCrystal.h>
LiquidCrystal tela_led(7,6,13,12,11,10);

int sinal = A0;

void planta()
{
  	
  	int leitor = analogRead(sinal);
	if(leitor>=754)
	{
		escrever("Hidratado",leitor);
    }
  	else if(leitor>=225){
    	escrever("Complicado",leitor);
  	}
  	else{
    	escrever("Lascou",leitor);
    }


}


void escrever(char texto[14], int num)
{
  	
  	int porcentagem = (num+124)/10;
	tela_led.clear();
	tela_led.setCursor(0,0);
  	tela_led.print(texto);
  	tela_led.setCursor(0,1);
  	tela_led.print("%");
  	tela_led.setCursor(3,1);
  	tela_led.print(porcentagem);
  	delay(2000);
	
}



void setup()
{
  tela_led.begin(16,2);
  tela_led.clear();
  Serial.begin(9600);
  
  pinMode(sinal,INPUT);

  
}

void loop()
{


 planta();
  Serial.println(analogRead(sinal));
  
}
