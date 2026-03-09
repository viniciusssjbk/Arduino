//Criado por Vinicius
//data:09/03/2026


#define ledR 6
#define ledG 5
#define ledB 3
#define ledR2 8
#define ledG2 10
#define ledB2 9
#define button 7
#define button2 4
#define button3 11
#define maximo 255
#define count 6


class btn {

private:
  int r = 0;
  int g = 0;
  int b = 0;
  int contar = 1;

public:

  void atualizar() {

    if (digitalRead(button) == HIGH || digitalRead(button3) == HIGH) {

      this->r += 30;
      this->g += 40;
      this->b += 70;

      if (this->r >= maximo){ this->r = 0;}
      if (this->g >= maximo){ this->g = 0;}
      if (this->b >= maximo){ this->b = 0;}

      analogWrite(ledR, this->r);
      analogWrite(ledG, this->g);
      analogWrite(ledB, this->b);
    }
  }
  void rgb(){
    if(digitalRead(button2)==HIGH || digitalRead(button3) == HIGH){
      if(this->contar>=count || this->contar==1){
        
      	digitalWrite(ledR2,HIGH);
      	digitalWrite(ledG2,LOW);
        digitalWrite(ledB2,LOW);
        contar = 2;
      
      }
      else if(this->contar==2){
      	digitalWrite(ledR2,HIGH);
      	digitalWrite(ledG2,HIGH);
        digitalWrite(ledB2,LOW);
        contar += 1;
      
      }
      else if(this->contar==3){
      	digitalWrite(ledR2,LOW);
      	digitalWrite(ledG2,HIGH);
        digitalWrite(ledB2,LOW);
        contar += 1;
      
      }
      else if(this->contar==4){
      	digitalWrite(ledR2,LOW);
      	digitalWrite(ledG2,HIGH);
        digitalWrite(ledB2,HIGH);
        contar += 1;
        
      }
      else if(this->contar==5){
      	digitalWrite(ledR2,LOW);
      	digitalWrite(ledG2,LOW);
        digitalWrite(ledB2,HIGH);
        contar += 1;
      
      }
    }
  }
};
//criando um objeto
btn click;
void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledG2, OUTPUT);
  pinMode(ledB2, OUTPUT);
  pinMode(button, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop()
{
  click.atualizar();
  click.rgb();
  delay(500);
}
