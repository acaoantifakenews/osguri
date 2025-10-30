const int ENA = 10;
const int IN1 = 12;
const int IN2 = 13;

const int ENB = 11;
const int IN3 = 8;
const int IN4 = 9;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  andarFrente();
  pararMotores();
  girarDireita();
  andarTras();
  pararMotores();
  girarEsquerda();
  pararMotores();
}


  
