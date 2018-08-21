/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation {

	NSArray* _values;
	long long _maskValue;
	long long _setValue;

}

@property (nonatomic,retain) NSArray * values;                 //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) long long maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long setValue;               //@synthesize setValue=_setValue - In the implementation block
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2 ;
-(id)mainReturningError;
-(long long)maskValue;
-(void)setMaskValue:(long long)arg1 ;
-(id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3 ;
-(long long)setValue;
-(id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2 ;
-(void)setSetValue:(long long)arg1 ;
@end

