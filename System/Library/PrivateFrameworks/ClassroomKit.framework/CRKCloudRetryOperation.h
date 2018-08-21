/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKCloudResetable;
@class CRKCloudOperation, CATOperationQueue;

@interface CRKCloudRetryOperation : CATOperation {

	unsigned long long mAttempts;
	CRKCloudOperation*<CRKCloudResetable> _cloudOperation;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) CRKCloudOperation*<CRKCloudResetable> cloudOperation;              //@synthesize cloudOperation=_cloudOperation - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                                //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)new;
-(id)init;
-(void)main;
-(CATOperationQueue *)operationQueue;
-(BOOL)isAsynchronous;
-(id)initWithOperationQueue:(id)arg1 cloudOperation:(id)arg2 ;
-(CRKCloudOperation*<CRKCloudResetable>)cloudOperation;
-(void)cloudOperationDidFinish:(id)arg1 ;
-(void)performRetry:(id)arg1 ;
@end

