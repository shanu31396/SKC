#include <Servo.h>
#include <EEPROM.h>

bytepackage_order=0; package
byteIncomingdata[200];
byteMMC_packageOrder=0;
byteData_size=0;
byteRead_Data_size=0;
intdata_size=0;

boolsec_btn_up=0;
boolsec_btn_down=0;
boolup_btn=0;
booldown_btn=0;
boolsave_btn=0;
boolplay_btn=0;
String hmisend;

byteSecili_Servo=1;
bytehiz=75;

Servo Alt_servo;
Servo Alt_shoulder;
Servo Ust_elbow;
Servo G_wrist;
Servo Gripper;

intAlt_Servo_Degree=90;
intAlt_shoulder_Degree=90;
intUst_elbow_Degree=90;
intG_wrist_Degree=90;
intGripper_Degree=90;

charbt_data;
void setup(){
    Serial.begin(9600);

    pinMode(2,OUTPUT);
    digitalWrite(2,1);
    pinMode(13,OUTPUT);
    digitalWrite=(13,0);

    Alt_Servo.attach(5);
    Alt_shoulder.attach(6);
    Ust_elbow.attch(9);
    G_wrist.attach(10);
    Gripper.attach(11);

    Alt_Servo.attach(90);
    Alt_shoulder.attach(90);
    Ust_elbow.attch(90);
    G_wrist.attach(90);
    Gripper.attach(90);
    
}

voidDegree_updown(){
    delay(hiz);
    if(bt_data=='B'){
        Alt_Servo_Degree++;
        if(Alt_Servo_Degree>180) Alt_Servo_Degree=180;

        Alt_servo.write(Alt_Servo_Degree);
    }
    else if(bt=='D'){
        intAlt_Servo_Degree++;
        if(Alt_Servo_Degree>180) Alt_Servo_Degree=180;

        Alt_shoulder.write(intAlt_shoulder_Degree);
    }
    else(bt_data=='F')
    {
        Ust_elbow_Degree++;
        if(Ust_elbow_Degree>180)Ust_elbow_Degree=180;

        Ust_elbow.write(Ust_elbow_Degree);
    }
    else if(bt_data=='H'){
        intG_wrist_Degree++;
        if(G_wrist_Degree>180)G_wrist_Degree=180;
        G_wrist.write(G_wrist_Degree);
    }
    else if(bt_data=='Y'){
        Gripper_Degree++;
        if(Gripper_Degree>180)Gripper_Degree=180;
        Gripper.write(Gripper_Degree);
    }

    if(bt_data=='A'){
        Alt_Servo_Degree--;
        if(Alt_Servo_Degree<0)Alt_Servo_Degree=0;
        Alt_Servo.write(Alt_Servo_Degree);
    }
    else if(bt_data=='C'){
        Alt_shoulder_Degree--;
        if(Alt_shoulder_Degree<0) tAlt_shoulder_Degree=0;
        Alt_shoulder_Degree(Alt_shoulder_Degree);
    }
    else if(bt_data='E'){
        Ust_elbow_Degree--;
        if(Alt_shoulder_Degree<0)Alt_shoulder_Degree=00;
        Ust_elbow.write(Ust_elbow_Degree);
    }
    else if(bt_data=='G'){
        G_wrist_Degree--;
        if(G_wrist_Degree<0)G_wrist_Degree=00;
        G_wrist.write(G_wrist_Degree);
    }
    else if(bt_data=='X'){
        Gripper_Degree--;
        if(Gripper_Degree<0)Gripper_Degree=00;
        Gripper.write(Gripper_Degree);
    }
}
    
intSaved_Location=0;
intstep=1;
voidSave(){
    if(bt_data=='K'){

        EEPROM.write(step, Alt_Servo_Degree);
        step++;
        EEPROM.write(step, Alt_shoulder_Degree);
        step++;
        EEPROM.write(step, Ust_elbow_Degree);
        step++;
        EEPROM.write(step, G_wrist_Degree);
        STEP++;
        EEPROM.write(step, Gripper_Degree);
        step++;
        Saved_Location++;
        
        Serial.println(Saved_Location);
    }
    EEPROM.write(0,Saved_Location);
}

bool play=0;
intplaystep=0;

voidplay(){
    if(bt_data=='P'){
        play=1-play;
    }
    if(play==1){
        playstep=1;
        Saved_Location=EEPROM.read(0);
        for(int i=0;i<Saved_Location;i++){
            int Degree = EEPROM.read(playstep);
            while(Alt_Servo_Degree!=Degree){
                if(Alt_Servo_Degree>Degree)Alt_Servo_Degree--;
                else if(Alt_Servo_Degree<Degree)Alt_Servo_Degree++;
                delay(10);
                Alt_Servo.write(Alt_Servo_Degree);
            } 
            playstep++;
            delay(100);
            Degree=EEPROM.read(playstep);
            while(Alt_shoulder_Degree!=Degree)
            {
                if(Alt_Servo_Degree>Degree)Alt_shoulder_Degree--;
                else if(Alt_Servo_Degree<Degree)Alt_shoulder_Degree++;
                delay(10);
                Alt_shoulder.write(Alt_shoulder_Degree);
            }

            playstep++;
            delay(100);
            Degree = EEPROM.read(playstep);
            while(Ust_elbow_Degree!=Degree){
                if(Ust_elbow_Degree>Degree)Ust_elbow_Degree--;
                else if(Ust_elbow_Degree<Degree)Ust_elbow_Degree++;
                delay(10);
                Ust_elbow.write(Ust_elbow_Degree);
            }

            playstep++;
            delay(100);
            Degree = EEPROM.read(playstep);
            while(G_wrist_Degree!=Degree){
                if(G_wrist_Degree>Degree)G_wrist_Degree--;
                else if(G_wrist_Degree<Degree)G_wrist_Degree++;
                delay(10);
                G_wrist.write(G_wrist_Degree);
            }

            playstep++;
            delay(100);
            Degree = EEPROM.read(playstep);
            while(Gripper_Degree!=Degree){
                if(Gripper_Degree>Degree)Gripper_Degree--;
                else if(Gripper_Degree<Degree)Gripper_Degree++;
                delay(10);
                Gripper.write(Gripper_Degree);
            }
            playstep++;
        }
    }
}

void loop(){
    if(Serial.available()>0){
        bt_data=Serial.read();


    }
    Degree_updown();
    Save();
    play();
    if(bt_data=='K' || bt_data=='P'){
        digitalWrite(13,1);
        bt_data='';
    }
    else digitalWrite(13,0);
}
