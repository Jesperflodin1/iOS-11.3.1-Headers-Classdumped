/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSDate;

@interface HDClinicalAccountUpdateLastFetchDateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	BOOL _wasFullFetch;
	NSDate* _lastFetchDate;

}

@property (nonatomic,copy,readonly) NSDate * lastFetchDate;              //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL wasFullFetch;                        //@synthesize wasFullFetch=_wasFullFetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithLastFetchDate:(id)arg1 wasFullFetch:(BOOL)arg2 accountIdentifier:(id)arg3 ;
-(BOOL)wasFullFetch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastFetchDate;
@end

