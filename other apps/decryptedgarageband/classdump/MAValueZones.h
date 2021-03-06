//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface MAValueZones : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_zones;
}

+ (id)valueZones;
@property(retain) NSMutableArray *zones; // @synthesize zones=_zones;
- (void).cxx_destruct;
- (double)zoneValueFromUserValue:(double)arg1;
- (double)validZoneValue:(double)arg1;
- (double)userValueFromZoneValue:(double)arg1;
- (double)zoneEndValueOfZoneAtIndex:(unsigned long long)arg1;
- (double)zoneStartValueOfZoneAtIndex:(unsigned long long)arg1;
- (id)userInfoOfZoneAtIndex:(unsigned long long)arg1;
- (double)userEndValueOfZoneAtIndex:(unsigned long long)arg1;
- (double)userStartValueOfZoneAtIndex:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (void)setMagneticRadius:(double)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (void)setUserEndValue:(double)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (void)setUserStartValue:(double)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (void)setZoneEndValue:(double)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (void)setZoneStartValue:(double)arg1 ofZoneAtIndex:(unsigned long long)arg2;
- (double)magneticRadiusOfZoneAtIndex:(unsigned long long)arg1;
- (id)zoneForZoneValue:(double)arg1;
- (id)zoneForUserValue:(double)arg1;
- (id)zoneAtIndex:(unsigned long long)arg1;
- (id)mutableZoneAtIndex:(unsigned long long)arg1;
- (void)removeZoneAtIndex:(unsigned long long)arg1;
- (void)removeAllZones;
- (double)minimumZoneValue;
- (double)minimumUserValue;
- (double)maximumZoneValue;
- (double)maximumUserValue;
- (void)consolidateZones;
@property(readonly, nonatomic) NSMutableArray *allZones;
- (void)addZoneWithZoneStartValue:(double)arg1 zoneEndValue:(double)arg2 magneticRadius:(double)arg3 userInfo:(id)arg4;
- (void)addZoneWithZoneStartValue:(double)arg1 zoneEndValue:(double)arg2 userStartValue:(double)arg3 userEndValue:(double)arg4 magneticRadius:(double)arg5 userInfo:(id)arg6;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

