#include <String.h>
#include <PrayerTimes.h>


// seting date to 19 Jul 2020
int my_year = 2020;
int my_month = 7;
int my_day = 19;
double my_latitude;
double my_longitude;
double my_timezone;
bool my_dst_on; 
String my_calc_method;
String my_asr_method;
String my_high_lats_method;

// Please refer to http://praytimes.org/manual for details of all above parameters.

PrayerTimes my_prayer_object;   // PrayerTimes object
double my_prayer_times[my_prayer_object.TimesCount];  // Array for receiveing prayer times



void setup() {
  Serial.begin(9600);
  String inStringForm;

  Serial.print("*******  Prayer Times for the date : ");
  Serial.print(my_month);  Serial.print("/");Serial.print(my_day);  Serial.print("/");Serial.print(my_year);  Serial.print(" *******\n\n");
  set_to_sunnyvale();
  Serial.println("===================  Sunnyvale, CA, USA  =================");
  Serial.println("Prayer\t\tNumberic-Time\t24Hr-Format\t12Hr-Format");
  Serial.println("----------------------------------------------------------");
  my_prayer_object.get_prayer_times(my_year, my_month, my_day, my_latitude , my_longitude , my_timezone , my_dst_on, my_calc_method, my_asr_method, my_high_lats_method, my_prayer_times );
  for (int i = 0; i < my_prayer_object.TimesCount; ++i) {
    Serial.print(my_prayer_object.get_prayer_name(i)); Serial.print("\t\t");
    Serial.print(my_prayer_times[i]); Serial.print("\t\t");
    inStringForm = my_prayer_object.float_time_to_time24 (my_prayer_times[i]);
    Serial.print(inStringForm); ; Serial.print("\t\t");
    inStringForm = my_prayer_object.float_time_to_time12 (my_prayer_times[i]);
    Serial.println(inStringForm);
  }

  Serial.println("\n");

  
  set_to_mumbai();
  Serial.println("===================== Mumbai , India =====================");
  Serial.println("Prayer\t\tNumberic-Time\t24Hr-Format\t12Hr-Format");
  Serial.println("----------------------------------------------------------");
  my_prayer_object.get_prayer_times(my_year, my_month, my_day, my_latitude , my_longitude , my_timezone , my_dst_on, my_calc_method, my_asr_method, my_high_lats_method, my_prayer_times );
  for (int i = 0; i < my_prayer_object.TimesCount; ++i) {
    Serial.print(my_prayer_object.get_prayer_name(i)); Serial.print("\t\t");
    Serial.print(my_prayer_times[i]); Serial.print("\t\t");
    inStringForm = my_prayer_object.float_time_to_time24 (my_prayer_times[i]);
    Serial.print(inStringForm); ; Serial.print("\t\t");
    inStringForm = my_prayer_object.float_time_to_time12 (my_prayer_times[i]);
    Serial.println(inStringForm);
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}

// Sunnyvale , CA, USA specific value
void set_to_sunnyvale () {
    my_latitude = 37.368832;
    my_longitude = -122.036346;
    my_timezone = -8;
    my_dst_on = true;     // True between March to September
    my_calc_method = "ISNA";
    my_asr_method = "Shafii";
    my_high_lats_method = "None";
}


// Mumbai , MH , India specific value
void set_to_mumbai () {
  my_latitude = 19.097403;
  my_longitude = 72.874245;
  my_timezone = 5.5;
  my_dst_on = false;    // Never used in India
  my_calc_method = "Karachi";
  my_asr_method = "Shafii";
  my_high_lats_method = "None";
}
