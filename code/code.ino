#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define relay 11
#define ENA 9
#define ENB 10

#define Speed 180

void setup() {
  Serial1.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
}

void loop() {
  if (Serial1.available() > 0) {
    delay(2);
    char value = Serial1.read();
    Serial.println(value);
 
    if (value == 'U') {
      Forward();
    } else if (value == 'D') {
      Backward();
    } else if (value == 'S') {
      Stop();
    } else if (value == 'L') {
      Left();
    } else if (value == 'R') {
      Right();
    }else if(value == '1'){
      digitalWrite(relay,LOW);
    }else if(value == '2'){
      digitalWrite(relay,HIGH);
    }
  }
}

void Forward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void Backward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
void Stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void Left() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
void Right() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
