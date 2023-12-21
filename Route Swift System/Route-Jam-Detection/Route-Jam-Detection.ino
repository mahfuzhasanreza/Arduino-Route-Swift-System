const int trigPin = 4;
const int echoPin = 9;

const int trigPin2 = trigPin;
const int echoPin2 = 10;

const int trigPin3 = trigPin;
const int echoPin3 = 11;

int LED = 2;
int LED2 = 7;
int LED3 = 8;

int SIZE = 15;

long duration;
int distance;

long duration2;
int distance2;

long duration3;
int distance3;

void setup() {

  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED, OUTPUT);

  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(LED2, OUTPUT);

  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(LED3, OUTPUT);

  
  Serial.begin(9600);
}

float disCal(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance (1) = ");
  Serial.print(distance);
  Serial.println(" cm");

  return distance;
}

float disCal2(){
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  duration2 = pulseIn(echoPin2, HIGH);

  distance2 = duration2 * 0.034 / 2;
  
  Serial.print("Distance (2) = ");
  Serial.print(distance2);
  Serial.println(" cm");

  return distance2;
}

float disCal3(){
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);

  duration3 = pulseIn(echoPin3, HIGH);

  distance3 = duration3 * 0.034 / 2;

  Serial.print("Distance (3) = ");
  Serial.print(distance3);
  Serial.println(" cm");

  return distance3;
}

int off=1;
int off2=1;
int off3=1;

void loop() {

  int minDis = 7;
  int dis[SIZE];
  int dis2[SIZE];
  int dis3[SIZE];

  for(int i=0; i<SIZE; i++){
    dis[i] = disCal();
    dis2[i] = disCal2();
    dis3[i] = disCal3();
  }

  int val=dis[0];
  int cnt=1;
  int val2=dis2[0];
  int cnt2=1;
  int val3=dis3[0];
  int cnt3=1;
  
  for(int i=1; i<SIZE; i++){
    if(dis[i]<minDis and dis[i]>=val-1 and dis[i]<=val+1){
       cnt++;
    }
    if(dis2[i]<minDis and dis2[i]>=val2-1 and dis2[i]<=val2+1){
       cnt2++;
    }
    if(dis3[i]<minDis and dis3[i]>=val3-1 and dis3[i]<=val3+1){
       cnt3++;
    }
  }

  
  if(cnt==SIZE){
    Serial.println("ON--1");
    digitalWrite(LED, HIGH);
  }

  if(cnt!=SIZE){
    off++;
  }
  if(off>=2){
    off=1;
    Serial.println("OFF--1");
    digitalWrite(LED, LOW);
  }

  if(cnt2==SIZE and cnt==SIZE){
    Serial.println("ON--2");
    digitalWrite(LED2, HIGH);
  }

  if(cnt2!=SIZE){
    off2++;
  }
  if(off2>=2 and off==1){
    off2=1;
    Serial.println("OFF--2");
    digitalWrite(LED2, LOW);
  }
  
  if(cnt3==SIZE and cnt2==SIZE){
    Serial.println("ON--3");
    digitalWrite(LED3, HIGH);
  }

 
  if(cnt3!=SIZE){
    off3++;
  }
  if(off3>=2 and off2==1){
    off3=1;
    Serial.println("OFF--2");
    digitalWrite(LED3, LOW);
  }

}
