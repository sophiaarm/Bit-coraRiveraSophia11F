//librerias
//Instaciar OBJ
//definicion de pines 
#define verde 13
#define amarillo 2
#define rojo 10
//declaracion de variables
int NumeroRandon=0;
//Sophia Rivera 

void setup() {
  //Configuraciones iniciales y asignacion de roles
  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
  Serial.begin(9600);
  Serial.println("Hola mundo, el programa se está iniciando");
}

void loop() {
  //programa toda la configuracion del circuito
NumeroRandon=random(0,100);
  Serial.println("el valor aleatorio es: ");
  Serial.println(NumeroRandon);
  delay(5000);
 }
