/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDClinicalGatewayCodableGatewaysJournalEntry : HDJournalEntry {

	NSArray* _codableResources;
	long long _syncProvenance;

}

@property (nonatomic,copy,readonly) NSArray * codableResources;              //@synthesize codableResources=_codableResources - In the implementation block
@property (nonatomic,readonly) long long syncProvenance;                     //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCodableResources:(id)arg1 syncProvencance:(long long)arg2 ;
-(NSArray *)codableResources;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)syncProvenance;
@end
