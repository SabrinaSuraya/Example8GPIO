 #include "Button.h"


unsigned int A_count, B_count, C_count, D_count, E_count;

Button A('D', 2, 20, 1, 1);
Button B('D', 3, 20, 1, 1);
Button C('D', 4, 20, 1, 1);
Button D('C', 4, 20, 1, 1);
Button E('C', 5, 20, 1, 1);

void A_gets_pressed(){
    A_count++;
    print();
}
void B_gets_pressed(){
    B_count++;
    print();
}
void C_gets_pressed(){
    C_count++;
    print();
}
void D_gets_pressed(){
    D_count++;
    print();
}
void E_gets_pressed(){
    E_count++;
    print();
}

void print(){
    Serial.println("A= ");
    Serial.Print(A_count);

    Serial.println("B= ");
    Serial.Print(B_count);

    Serial.println("C= ");
    Serial.Print(C_count);

    Serial.println("D= ");
    Serial.Print(D_count);

    Serial.println("E= ");
    Serial.Print(E_count);
}

void setup() {
      Serial.begin(9600);
      A.Pressed= A_gets_pressed;
      B.Pressed= B_gets_pressed;
      C.Pressed= C_gets_pressed;
      D.Pressed= D_gets_pressed;
      E.Pressed= E_gets_pressed;

      while(1){

          A.Refresh();
          B.Refresh();
          C.Refresh();
          D.Refresh();
          E.Refresh();
      }

}

void loop() {
  // put your main code here, to run repeatedly:

}
