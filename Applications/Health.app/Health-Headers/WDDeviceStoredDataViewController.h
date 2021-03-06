//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDStoredDataByCategoryViewController.h"

@class HKDevice, NSString;

@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController
{
    HKDevice *_device;
    NSString *_displayName;
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)deleteAllStoredData;
- (_Bool)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end

