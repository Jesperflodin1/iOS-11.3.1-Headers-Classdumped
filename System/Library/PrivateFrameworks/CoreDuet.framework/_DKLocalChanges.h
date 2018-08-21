/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject {

	NSArray* _insertedObjects;
	NSArray* _tombstones;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * tombstones;                   //@synthesize tombstones=_tombstones - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(NSArray *)tombstones;
-(id)initWithInsertedObjects:(id)arg1 tombstones:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(NSArray *)insertedObjects;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

