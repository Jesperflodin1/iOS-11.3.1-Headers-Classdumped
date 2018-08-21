/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CLInUseAssertion, BKSProcessAssertion;

@interface MNResourceManager : NSObject {

	unsigned long long _currentPolicy;
	NSString* _reason;
	CLInUseAssertion* _locationAssertion;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,readonly) unsigned long long currentPolicy; 
@property (nonatomic,readonly) NSString * reasonDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)reasonDescription;
-(void)setResourcePolicy:(unsigned long long)arg1 reason:(id)arg2 ;
-(unsigned long long)currentPolicy;
-(void)_createLocationAssertion;
-(void)_clearLocationAssertion;
-(void)_createProcessAssertionWithFlags:(unsigned)arg1 ;
-(void)_clearProcessAssertion;
-(unsigned)_processAssertionFlagsForResourcePolicy:(unsigned long long)arg1 ;
@end

