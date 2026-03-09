#define vermelho 3
#define amarelo 4
#define verde 5
//codigo feito por Vinicius
//data:09/03/2026

void setup()
{
	pinMode(vermelho,OUTPUT);
    pinMode(amarelo,OUTPUT);
    pinMode(verde,OUTPUT);
  
}


void sinal_vermelho(int time)
{
  	digitalWrite(vermelho,HIGH);
  	digitalWrite(amarelo,LOW);
  	digitalWrite(verde,LOW);
	delay(time);
}

void sinal_verde(int time)
{
	digitalWrite(vermelho,LOW);
  	digitalWrite(amarelo,LOW);
  	digitalWrite(verde,HIGH);
  	delay(time);
} 


void sinal_amarelo(int time)
{ 
  	digitalWrite(vermelho,LOW);
  	digitalWrite(amarelo,HIGH);
  	digitalWrite(verde,LOW);
  	delay(time);
} 
  

void loop()
{

  //primeiro acender o led verde
  	sinal_verde(5000);
  //segundo acender o led amarelo
    sinal_amarelo(2000);
  //terceiro acender o led vermelho
	sinal_vermelho(5000);
  

}
