/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {

	BOOL _restrictSource;
	HKObject* _dataObject;

}

@property (nonatomic,readonly) HKObject * dataObject;              //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) BOOL restrictSource;                //@synthesize restrictSource=_restrictSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataObject:(id)arg1 restrictSource:(BOOL)arg2 ;
-(BOOL)restrictSource;
-(HKObject *)dataObject;
@end

