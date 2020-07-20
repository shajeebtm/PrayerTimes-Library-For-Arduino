# PrayerTimes : Arduino  library class for calculating Islamic daily prayer times

## Library setup

* Mac users :  Create a directory named PrayerTimes inside ~/Documents/Arduino/libraries/ . Then copy the file [PrayerTimes.h](../master/src/PrayerTimes.h) into this newly created directory
* Windows suers : Create a directory named PrayerTimes inside My Documents\Arduino\libraries\ . Then copy the file  [PrayerTimes.h](../master/src/PrayerTimes.h) into this newly created directory

## Basic usage

      _#include <PrayerTimes.h>_
      _PrayerTimes my_prayer_object;_
      _double my_prayer_times[my_prayer_object.TimesCount];_
      _my_prayer_object.get_prayer_times(my_year, my_month, my_day, my_latitude , my_longitude , my_timezone , my_dst_on, my_calc_method, my_asr_method, my_high_lats_method, my_prayer_times );_

The result will be available in the array my_prayer_times[] in the following order.

      Fajr
      Sunrise
      Dhuhr
      Asr
      Sunset
      Maghrib
      Isha

Refer to [example](example) for detailed usage of the library.

Visit http://praytimes.org to find details on calculation method and code manual.
