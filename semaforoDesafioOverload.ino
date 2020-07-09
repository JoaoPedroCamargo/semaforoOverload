const int LedRed = 10; 
const int LedYellow = 11;
const int LedGreen = 12;
// Como os LEDs estão ligados nas portas 10, 11 e 12 
// por convenção se coloca as portas de cada pino utilizado como uma constante;


int currentLED = 0; // Led que será aceso 

void setup() {
  // Configurando quais as portas que serão utilizadas;
  pinMode(LedRed, OUTPUT);
  pinMode(LedYellow, OUTPUT);
  pinMode(LedGreen, OUTPUT);
}

void loop() {
  digitalWrite(currentLED + 10, LOW); //Faz com que o LED atual seja desligado;
  
  currentLED = (currentLED + 1)%3; // Faz com que Mude o LED;
  
  digitalWrite(currentLED + 10, HIGH); // Faz com que o LED atual acenda;

  delay(1000); // tempo para mudar qual LED estará aceso no momento;
}
