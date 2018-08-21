/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDate, NSNumber;

@interface HMDBulletinCharacteristicTuple : HMFObject {

	BOOL _changedByThisDevice;
	NSString* _serviceContextID;
	NSString* _currentType;
	id _targetValue;
	NSDate* _lastPostingTime;
	NSNumber* _targetStateNumber;

}

@property (nonatomic,retain) NSDate * lastPostingTime;                    //@synthesize lastPostingTime=_lastPostingTime - In the implementation block
@property (nonatomic,readonly) NSString * serviceContextID;               //@synthesize serviceContextID=_serviceContextID - In the implementation block
@property (nonatomic,readonly) NSString * currentType;                    //@synthesize currentType=_currentType - In the implementation block
@property (nonatomic,readonly) id targetValue;                            //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSNumber * targetStateNumber;              //@synthesize targetStateNumber=_targetStateNumber - In the implementation block
@property (nonatomic,readonly) BOOL changedByThisDevice;                  //@synthesize changedByThisDevice=_changedByThisDevice - In the implementation block
+(id)tupleWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(BOOL)arg5 ;
-(id)targetValue;
-(id)initWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(BOOL)arg5 ;
-(void)setLastPostingTime:(NSDate *)arg1 ;
-(void)updatePostingTime;
-(NSString *)serviceContextID;
-(NSString *)currentType;
-(NSDate *)lastPostingTime;
-(NSNumber *)targetStateNumber;
-(BOOL)changedByThisDevice;
@end

