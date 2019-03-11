int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;
int led11 = 3;
int led12 = 2;
int led13 = 22;
int led14 = 23;

int sensorea = A1;
int balorea = 0;

int zenbakia = 00;
int zenbaki1 = 0;
int zenbaki2 = 0;
int ordua = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led13,OUTPUT);
  pinMode(led14,OUTPUT);
  pinMode(sensorea,INPUT);
  Serial.begin(9600);
  konprobaketa();
}

void loop() {
  // put your main code here, to run repeatedly:
  semaforoa();
}

void emaitza(){
  balorea = analogRead(sensorea);
}
void semaforoa(){
  emaitza();

  if (balorea > 0 && balorea <= 40){ // 10db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

    if (balorea > 40 && balorea < 61){ // 20db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 61 && balorea < 81){ // 30db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 81 && balorea < 102){ // 40db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 102 && balorea < 122){ // 50db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 122 && balorea < 143){ // 60db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 143 && balorea < 163){ // 70db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 163 && balorea < 184){ // 80db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 184 && balorea < 204){ // 90db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,LOW);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }
  if (balorea >= 204 && balorea < 225){ // 100db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,LOW);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 225 && balorea < 245){ // 110db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,HIGH);
    digitalWrite(led12,LOW);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 245 && balorea < 265){ // 120db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,HIGH);
    digitalWrite(led12,HIGH);
    digitalWrite(led13,LOW);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 265 && balorea < 286){ // 130db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,HIGH);
    digitalWrite(led12,HIGH);
    digitalWrite(led13,HIGH);
    digitalWrite(led14,LOW);
  }

  if (balorea >= 286){ // 140db denean
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,HIGH);
    digitalWrite(led12,HIGH);
    digitalWrite(led13,HIGH);
    digitalWrite(led14,HIGH);
  }
}
void konprobaketa() {
   digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led3,HIGH);
  delay(100);
  digitalWrite(led4,HIGH);
  delay(100);
  digitalWrite(led5,HIGH);
  delay(100);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led7,HIGH);
  delay(100);
  digitalWrite(led8,HIGH);
  delay(100);
  digitalWrite(led9,HIGH);
  delay(100);
  digitalWrite(led10,HIGH);
  delay(100);
  digitalWrite(led11,HIGH);
  delay(100);
  digitalWrite(led12,HIGH);
  delay(100);
  digitalWrite(led13,HIGH);
  delay(100);
  digitalWrite(led14,HIGH);
  delay(100);

  digitalWrite(led14,LOW);
  delay(100);
  digitalWrite(led13,LOW);
  delay(100);
  digitalWrite(led12,LOW);
  delay(100);
  digitalWrite(led11,LOW);
  delay(100);
  digitalWrite(led10,LOW);
  delay(100);
  digitalWrite(led9,LOW);
  delay(100);
  digitalWrite(led8,LOW);
  delay(100);
  digitalWrite(led7,LOW);
  delay(100);
  digitalWrite(led6,LOW);
  delay(100);
  digitalWrite(led5,LOW);
  delay(100);
  digitalWrite(led4,LOW);
  delay(100);
  digitalWrite(led3,LOW);
  delay(100);
  digitalWrite(led2,LOW);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);

}

void kronometroa(){
   if (zenbakia > 00)
   {
      zenbaki1 = zenbakia/10;
      zenbaki2 = zenbakia - (zenbaki1*10);
   }
    if (balorea >= 163 && balorea < 184){ // 80db denean
      if(ordua == ""){
         ordua = 8;
         zenbakia = 00;
      }
      else{
         ordua = ordua;
         zenbakia = zenbakia;
      }
  }

  if (balorea >= 184 && balorea < 204){ // 90db denean
    ordua = 2;
    zenbakia = 30;
  }
  if (balorea >= 204 && balorea < 225){ // 100db denean
    ordua = 0;
    zenbakia = 15;
  }

  if (balorea >= 225){ // 110db denean
    ordua = 0;
    zenbakia = 4;
  }
        delay(1000); 
  if (zenbakia == 00 && ordua >0) {
    ordua = ordua - 1;
    zenbakia = 59;
  }
  else{
    zenbakia = zenbakia - 1;   
  }
}
void displai(){
  
if (zenbaki1 == 0)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, LOW);
    digitalWrite(ledpin6, LOW); 
    digitalWrite(ledpin7, HIGH);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 1)
  {
    digitalWrite(ledpin, HIGH);
    digitalWrite(ledpin4, HIGH);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6, HIGH); 
    digitalWrite(ledpin7, HIGH);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 2)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, LOW);
    digitalWrite(ledpin6, HIGH); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, HIGH);
  }
  if (zenbaki1 == 3)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6,HIGH); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 4)
  {
    digitalWrite(ledpin, HIGH);
    digitalWrite(ledpin4, HIGH);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6,LOW); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 5)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6,LOW); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, HIGH); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 6)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, LOW);
    digitalWrite(ledpin6,LOW); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, HIGH); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 7)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, HIGH);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6,HIGH); 
    digitalWrite(ledpin7, HIGH);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 8)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, LOW);
    digitalWrite(ledpin5, LOW);
    digitalWrite(ledpin6,LOW); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki1 == 9)
  {
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin4, HIGH);
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6,LOW); 
    digitalWrite(ledpin7, LOW);  
    digitalWrite(ledpin2, LOW); 
    digitalWrite(ledpin3, LOW); 
  }
  if (zenbaki2 == 0)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, LOW);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, HIGH);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 1)
  {
    digitalWrite(ledpin8, HIGH);
    digitalWrite(ledpin11, HIGH);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, HIGH); 
    digitalWrite(ledpin14, HIGH);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 2)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, LOW);
    digitalWrite(ledpin13, HIGH); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, HIGH);
  }
  if (zenbaki2 == 3)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, HIGH); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 4)
  {
    digitalWrite(ledpin8, HIGH);
    digitalWrite(ledpin11, HIGH);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 5)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, HIGH); 
    digitalWrite(ledpin10, LOW);
  }
  if (zenbaki2 == 6)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, LOW);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, HIGH); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 7)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, HIGH);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, HIGH); 
    digitalWrite(ledpin14, HIGH);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 8)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, LOW);
    digitalWrite(ledpin12, LOW);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW); 
  }
  if (zenbaki2 == 9)
  {
    digitalWrite(ledpin8, LOW);
    digitalWrite(ledpin11, HIGH);
    digitalWrite(ledpin12, HIGH);
    digitalWrite(ledpin13, LOW); 
    digitalWrite(ledpin14, LOW);  
    digitalWrite(ledpin9, LOW); 
    digitalWrite(ledpin10, LOW);; 
  }

  if (ordua == 0)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, LOW);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, HIGH);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 1)
  {
    digitalWrite(ledpin15, HIGH);
    digitalWrite(ledpin18, HIGH);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, HIGH); 
    digitalWrite(ledpin21, HIGH);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 2)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, LOW);
    digitalWrite(ledpin20, HIGH); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, HIGH);
  }
  if (ordua == 3)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, HIGH); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 4)
  {
    digitalWrite(ledpin15, HIGH);
    digitalWrite(ledpin18, HIGH);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 5)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, HIGH); 
    digitalWrite(ledpin17, LOW);
  }
  if (ordua == 6)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, LOW);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, HIGH); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 7)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, HIGH);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, HIGH); 
    digitalWrite(ledpin21, HIGH);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 8)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, LOW);
    digitalWrite(ledpin19, LOW);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW); 
  }
  if (ordua == 9)
  {
    digitalWrite(ledpin15, LOW);
    digitalWrite(ledpin18, HIGH);
    digitalWrite(ledpin19, HIGH);
    digitalWrite(ledpin20, LOW); 
    digitalWrite(ledpin21, LOW);  
    digitalWrite(ledpin16, LOW); 
    digitalWrite(ledpin17, LOW);; 
  }
}

