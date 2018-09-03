//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBPerformanceMetrics : NSObject
{
}

+ (_Bool)getNetworkUsage:(CDStruct_4bcfbbae *)arg1;
+ (_Bool)lastWakeTime:(double *)arg1;
+ (_Bool)absoluteStartTime:(double *)arg1;
+ (_Bool)getCPUTimeSeconds:(CDUnknownBlockType)arg1 terminatedThreads:(CDStruct_c3b9c2ee *)arg2;
+ (unsigned long long)freeDiskCount;
+ (unsigned long long)virtualMemoryCount;
+ (unsigned long long)residentMemoryCount;
+ (unsigned long long)totalMemoryCount;
+ (unsigned long long)freeMemoryCount;
+ (id)batteryStateWithDeviceBatteryState:(long long)arg1;
+ (struct FBDeviceBatteryInfo)batteryInfo;
+ (id)loadAvgWithPrecision:(double)arg1;
+ (unsigned int)coreCount;

@end

