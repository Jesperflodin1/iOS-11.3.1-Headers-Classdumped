/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSArray, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject {

	BOOL _hasType;
	BOOL _hasResult;
	XSPerfCollection* _stats;
	XSPerfCounter* _counters;
	NSString* _eventName;
	NSString* _eventType;
	NSArray* _typeValues;
	NSString* _domain;
	PETEventTracker* _eventTracker;

}

@property (nonatomic,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSArray * typeValues;              //@synthesize typeValues=_typeValues - In the implementation block
@property (nonatomic,readonly) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (readonly) PETEventTracker * eventTracker;              //@synthesize eventTracker=_eventTracker - In the implementation block
-(NSString *)eventName;
-(void)dealloc;
-(NSString *)domain;
-(NSString *)eventType;
-(id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(BOOL)arg5 scalar:(BOOL)arg6 ;
-(unsigned long long)indexOfTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(BOOL)arg5 ;
-(void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)countWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(NSArray *)typeValues;
-(PETEventTracker *)eventTracker;
@end

