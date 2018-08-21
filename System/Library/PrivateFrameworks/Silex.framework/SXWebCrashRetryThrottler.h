/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentProcessTerminationPolicyDecider.h>

@class NSString;

@interface SXWebCrashRetryThrottler : NSObject <SXWebContentProcessTerminationPolicyDecider> {

	BOOL _crashed;
	unsigned long long retryPolicy;

}

@property (assign,nonatomic) BOOL crashed;                                  //@synthesize crashed=_crashed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long retryPolicy; 
-(unsigned long long)retryPolicy;
-(BOOL)crashed;
-(void)setCrashed:(BOOL)arg1 ;
-(BOOL)shouldReloadAfterWebProcessCrash;
@end

