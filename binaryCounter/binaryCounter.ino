int count = 0;
const int bit0 = 3;
const int bit1 = 5;
const int bit2 = 7;
const int bit3 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(bit0,OUTPUT);
  pinMode(bit1,OUTPUT);
  pinMode(bit2,OUTPUT);
  pinMode(bit3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bit0, LOW);
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);

  delay(500);


  switch (count){
    case 0:
      break;
    case 1:
      digitalWrite(bit0, HIGH);
      break;
    case 2:
      digitalWrite(bit1, HIGH);
      break;
    case 3:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit1, HIGH);
      break;
    case 4:
      digitalWrite(bit2, HIGH);
      break;
    case 5:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit2, HIGH);
      break;
    case 6:
      digitalWrite(bit1, HIGH);
      digitalWrite(bit2, HIGH);
      break;
    case 7:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit1, HIGH);
      digitalWrite(bit2, HIGH);
      break;
    case 8:
      digitalWrite(bit3, HIGH);
      break;
    case 9:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 10:
      digitalWrite(bit1, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 11:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit1, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 12:
      digitalWrite(bit2, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 13:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit2, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 14:
      digitalWrite(bit1, HIGH);
      digitalWrite(bit2, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    case 15:
      digitalWrite(bit0, HIGH);
      digitalWrite(bit1, HIGH);
      digitalWrite(bit2, HIGH);
      digitalWrite(bit3, HIGH);
      break;
    default:
      break;
  }

  count = count + 1;
  if (count == 16){
    count = 0;
  }
  
  delay(500);
  
}
