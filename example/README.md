### Information required

Following information required to use the library PrayerTimes.h

* Grtegorian calendar date
* Latitude of the location
* Longitude of the location
* Timezone of the  location
* Day light saving info (on/off)
* Prayer time calculation method ( Jafari / Karachi / ISNA / MWL /  Makkah / Egypt / Custom )
* Asr calculation method ( Shafii / Hanafi )
* High latitude method ( None / MidNight / OneSeventh / AngleBased )


Please refer to http://praytimes.org/manual for details of all above parameters.


### Run the code

Running PrayerTimesExample.ino will produce following output on the Arduino IDE serial monitor

    *******  Prayer Times for the date : 7/19/2020 *******

    ===================  Sunnyvale, CA, USA  =================
    Prayer		Numberic-Time	24Hr-Format	12Hr-Format
    ----------------------------------------------------------
    Fajr		4.61		04:36		4:36 AM
    Sunrise		6.05		06:03		6:03 AM
    Dhuhr		13.24		13:15		1:15 PM
    Asr		17.10		17:06		5:06 PM
    Sunset		20.43		20:26		8:26 PM
    Maghrib		20.43		20:26		8:26 PM
    Isha		21.87		21:52		9:52 PM


      ===================== Mumbai , India =====================
      Prayer		Numberic-Time	24Hr-Format	12Hr-Format
      ----------------------------------------------------------
      Fajr		4.83		04:50		4:50 AM
      Sunrise		6.18		06:11		6:11 AM
      Dhuhr		12.75		12:45		12:45 PM
      Asr		16.01		16:00		4:00 PM
      Sunset		19.31		19:19		7:19 PM
      Maghrib		19.31		19:19		7:19 PM
Isha		20.66		20:40		8:40 PM
