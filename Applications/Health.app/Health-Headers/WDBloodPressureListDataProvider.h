//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDSampleListDataProvider.h"

@class NSArray;

@interface WDBloodPressureListDataProvider : WDSampleListDataProvider
{
    NSArray *_systolicAndDiastolicTypes;
}

- (void).cxx_destruct;
- (id)dataListViewController:(id)arg1 textForObject:(id)arg2;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

@end
