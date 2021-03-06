//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADViewMonitorDelegate-Protocol.h"

@class GADViewMonitor, NSString;

@interface GADAdExposureMonitor : NSObject <GADViewMonitorDelegate>
{
    NSString *_adUnitID;
    GADViewMonitor *_viewMonitor;
    _Bool _adUnitExposureBegan;
}

- (void).cxx_destruct;
- (void)viewMonitorDidRefresh:(id)arg1;
- (void)finishMonitoring;
- (void)startMonitoring;
- (id)initWithView:(id)arg1 adUnitID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

