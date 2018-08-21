/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDBudget : NSObject {

	CDSession* _session;
	NSString* _name;
	long long _type;
	unsigned long long _integerId;

}

@property (__weak,readonly) CDSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long integerId;              //@synthesize integerId=_integerId - In the implementation block
@property (readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) long long type;                            //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(long long)type;
-(CDSession *)session;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)integerId;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)incrementByValue:(long long)arg1 error:(id*)arg2 ;
-(BOOL)decrementByValue:(long long)arg1 error:(id*)arg2 ;
-(BOOL)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id*)arg3 ;
-(id)forecastEffectiveOnDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(long long)creditsRemainingWithError:(id*)arg1 ;
@end

