/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFBundle* CFBundleRef;

typedef struct __IOReportSubscriptionCF* IOReportSubscriptionCFRef;

typedef struct ForcedThermalLevelStruct {
	float triggerTarget;
	float triggerHysteresis;
	BOOL isTriggered;
} ForcedThermalLevelStruct;

typedef struct ForcedThermalPressureLevelStruct {
	float triggerTarget;
	float triggerHysteresis;
	BOOL isTriggered;
} ForcedThermalPressureLevelStruct;

typedef struct host_cpu_load_info {
	unsigned cpu_ticks[4];
} host_cpu_load_info;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned chargerType : 1;
	unsigned temp1 : 1;
	unsigned temp10 : 1;
	unsigned temp11 : 1;
	unsigned temp12 : 1;
	unsigned temp13 : 1;
	unsigned temp14 : 1;
	unsigned temp15 : 1;
	unsigned temp16 : 1;
	unsigned temp17 : 1;
	unsigned temp18 : 1;
	unsigned temp19 : 1;
	unsigned temp2 : 1;
	unsigned temp20 : 1;
	unsigned temp3 : 1;
	unsigned temp4 : 1;
	unsigned temp5 : 1;
	unsigned temp6 : 1;
	unsigned temp7 : 1;
	unsigned temp8 : 1;
	unsigned temp9 : 1;
	unsigned solar : 1;
} SCD_Struct_AW11;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct iir_filter_t {
	int time_constant;
	int last;
} iir_filter_t;
