#include <string.h>
#define RELAY1  7                        
#define RELAY2  6                        
#define RELAY3  5                        
#define RELAY4  4
#define TIMEUNIT 1000
#define VERSE1 "THERE USED TO BE A GRAYING TOWER ALONE ON THE SEA YOU BECAME THE LIGHT ON THE DARK SIDE OF ME LOVE REMAINED A DRUG THAT'S THE HIGH AND NOT THE PILL BUT DID YOU KNOW THAT WHEN IT SNOWS MY EYES BECOME LARGE AND THE LIGHT THAT YOU SHINE CAN BE SEEN"
#define CHORUS "BABY, I COMPARE YOU TO A KISS FROM A ROSE ON A GRAY OOH, THE MORE I GET OF YOU, THE STRANGER IT FEELS, YEAH NOW THAT YOUR ROSE IS IN BLOOM A LIGHT HITS THE GLOOM ON THE GRAY"
#define VERSE2 "THERE IS SO MUCH A MAN CAN TELL YOU, SO MUCH HE CAN SAY YOU REMAIN, MY POWER, MY PLEASURE, MY PAIN, BABY TO ME YOU'RE LIKE A GROWN ADDICTION THAT I CAN'T DENY WON'T YOU TELL ME IS THAT HEALTHY, BABY? BUT DID YOU KNOW THAT WHEN IT SNOWS MY EYES BECOME LARGE AND THE LIGHT THAT YOU SHINE CAN BE SEEN"
#define REFRAIN "I'VE BEEN KISSED BY A ROSE ON THE GRAY I'VE BEEN KISSED BY A ROSE ON THE GRAY I'VE BEEN KISSED BY A ROSE ON THE GRAY I'VE BEEN KISSED BY A ROSE ON THE GRAY"
#define VERSE3 "THERE IS SO MUCH A MAN CAN TELL YOU, SO MUCH HE CAN SAY YOU REMAIN, MY POWER, MY PLEASURE, MY PAIN TO ME YOU'RE LIKE A GROWN ADDICTION THAT I CAN'T DENY WON'T YOU TELL ME IS THAT HEALTHY, BABY? BUT DID YOU KNOW THAT WHEN IT SNOWS MY EYES BECOME LARGE AND THE LIGHT THAT YOU SHINE CAN BE SEEN"
#define VERSE4 "YES, I HAVE COMPARE YOU TO A KISS FROM A ROSE ON THE GRAY OOH, THE MORE I GET OF YOU THE STRANGER IT FEELS, YEAH AND NOW THAT YOUR ROSE IS IN BLOOM A LIGHT HITS THE GLOOM ON THE GRAY NOW THAT YOUR ROSE IS IN BLOOM A LIGHT HITS THE GLOOM ON THE GRAY"

void setup()
{    
  pinMode(RELAY3, OUTPUT);
//  Serial.begin(9600);
}

void dot()
{
//  Serial.println( "DOT" );
  digitalWrite(RELAY3,HIGH);
  delay(1*TIMEUNIT);
  digitalWrite(RELAY3,LOW);
}

void dash()
{
//  Serial.println( "DASH" );
  digitalWrite(RELAY3,HIGH);
  delay(3*TIMEUNIT);
  digitalWrite(RELAY3,LOW);
}

void slash()
{
//  Serial.println( "SLASH" );
  delay(4*TIMEUNIT);
}

void space()
{
//  Serial.println( "SPACE" );
  delay(3*TIMEUNIT);
}
 
void loop()
{
   for(int i = 0; i < strlen(VERSE1); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( VERSE1[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(CHORUS); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( CHORUS[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(VERSE2); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( VERSE2[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(CHORUS); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( CHORUS[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(REFRAIN); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( REFRAIN[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(VERSE3); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( VERSE3[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(CHORUS); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( CHORUS[i] ) );
     flashMorse( morsed );
   }
   for(int i = 0; i < strlen(VERSE4); i++)
   {
     char morsed[9];
     strcpy( morsed, getMorseValue( VERSE4[i] ) );
     flashMorse( morsed );
   }
}

void flashMorse( char* input )
{
  for(int i = 0; i < strlen(input); i++)
  {
    if (input[i]=='.'){ dot(); }
    else if (input[i]=='-'){ dash(); }
    else if (input[i]=='/'){ slash(); }
    else if (input[i]==' '){ space(); }
    delay(0.25*TIMEUNIT);
  }
}

char const* getMorseValue( char input )
{
     char morsed[9];
     if (input=='A'){ strcpy( morsed, ".- " ); }
     else if (input=='B'){ strcpy( morsed, "-... " ); }
     else if (input=='C'){ strcpy( morsed, "-.-.  " ); }
     else if (input=='D'){ strcpy( morsed, "-.. " ); }
     else if (input=='E'){ strcpy( morsed, ". " ); }
     else if (input=='F'){ strcpy( morsed, "..-. " ); }
     else if (input=='G'){ strcpy( morsed, "--. " ); }
     else if (input=='H'){ strcpy( morsed, ".... " ); }
     else if (input=='I'){ strcpy( morsed, ".. " ); }
     else if (input=='J'){ strcpy( morsed, ".--- " ); }
     else if (input=='K'){ strcpy( morsed, "-.- " ); }
     else if (input=='L'){ strcpy( morsed, ".-.. " ); }
     else if (input=='M'){ strcpy( morsed, "-- " ); }
     else if (input=='N'){ strcpy( morsed, "-. " ); }
     else if (input=='O'){ strcpy( morsed, "--- " ); }
     else if (input=='P'){ strcpy( morsed, ".--. " ); }
     else if (input=='Q'){ strcpy( morsed, "--.- " ); }
     else if (input=='R'){ strcpy( morsed, ".-. " ); }
     else if (input=='S'){ strcpy( morsed, "... " ); }
     else if (input=='T'){ strcpy( morsed, "- " ); }
     else if (input=='U'){ strcpy( morsed, "..- " ); }
     else if (input=='V'){ strcpy( morsed, "...- " ); }
     else if (input=='W'){ strcpy( morsed, ".-- " ); }
     else if (input=='X'){ strcpy( morsed, "-..- " ); }
     else if (input=='Y'){ strcpy( morsed, "-.-- " ); }
     else if (input=='Z'){ strcpy( morsed, "--.. " ); }
     else if (input==' '){ strcpy( morsed, "/ " ); }
     else if (input=='\''){ strcpy( morsed, ".----. " ); }
     else { strcpy( morsed, "/ " ); }
     return morsed;
}
