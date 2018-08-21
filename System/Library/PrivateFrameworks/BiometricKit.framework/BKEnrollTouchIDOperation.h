/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BKEnrollOperation.h>

@class BiometricKitStatistics;

@interface BKEnrollTouchIDOperation : BKEnrollOperation {

	BiometricKitStatistics* _statistics;
	SCD_Struct_Bi1* _compSet;

}

@property (assign,nonatomic,__weak) id<BKEnrollTouchIDOperationDelegate> delegate; 
-(void)dealloc;
-(BOOL)startWithError:(id*)arg1 ;
-(id)createEnrollProgressInfo:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
@end

