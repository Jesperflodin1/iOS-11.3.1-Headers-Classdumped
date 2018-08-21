//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDCachedAxisDescriptor.h"

@class NSDateFormatter;

@interface WDMonthAxisDescriptor : WDCachedAxisDescriptor
{
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_monthFormatter;
    long long _dayOffset;
    unsigned long long _monthMarkerUnit;
}

@property(nonatomic) unsigned long long monthMarkerUnit; // @synthesize monthMarkerUnit=_monthMarkerUnit;
@property(nonatomic) long long dayOffset; // @synthesize dayOffset=_dayOffset;
- (void).cxx_destruct;
- (id)generateAxisLabels;
- (id)init;

@end
