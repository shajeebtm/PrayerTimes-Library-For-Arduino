# PrayerTimes : Arduino  library for calculating Islamic daily prayer times

## Library setup

* Mac users :  Create a directory named PrayerTimes inside ~/Documents/Arduino/libraries/ . Then copy PrayerTimes.h into this newly created directory
* Windows suers : Create a directory named PrayerTimes inside My Documents\Arduino\libraries\ . Then copy PrayerTimes.h into this newly created directory

## Basic usage

_#include <PrayerTimes.h>_

_PrayerTimes my_prayer_object;_

_double my_prayer_times[my_prayer_object.TimesCount];_

_my_prayer_object.get_prayer_times(my_year, my_month, my_day, my_latitude , my_longitude , my_timezone , my_dst_on, my_calc_method, my_asr_method, my_high_lats_method, my_prayer_times );_


