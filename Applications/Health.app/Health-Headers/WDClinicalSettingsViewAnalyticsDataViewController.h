//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class HKHealthRecordsStore, NSArray;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController
{
    HKHealthRecordsStore *_healthRecordsStore;
    NSArray *_filePaths;
}

@property(retain) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (void).cxx_destruct;
- (id)description;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchClinicalOptInDataCollectionFilePaths;
- (void)viewDidLoad;

@end
