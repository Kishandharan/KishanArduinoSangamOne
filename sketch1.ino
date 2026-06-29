#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop(){
  // 1
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  delay(1000);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);

  //2
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
}
