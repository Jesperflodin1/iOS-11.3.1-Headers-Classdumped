/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _sequenceNumber;
	NSSet* _eventUUIDs;

}

@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSSet * eventUUIDs;                             //@synthesize eventUUIDs=_eventUUIDs - In the implementation block
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSSet *)eventUUIDs;
-(void)setEventUUIDs:(NSSet *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
