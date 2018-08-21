/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSDictionary, NSArray, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse {

	NSString* _stepIdentifier;
	NSString* _previousStepIdentifier;
	long long _verificationStatus;
	NSDictionary* _requiredVerificationFieldData;
	NSArray* _verificationChannels;
	NSURL* _passURL;

}

@property (nonatomic,copy) NSArray * verificationChannels;                                     //@synthesize verificationChannels=_verificationChannels - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                     //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * stepIdentifier;                                 //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousStepIdentifier;                         //@synthesize previousStepIdentifier=_previousStepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requiredVerificationFieldData;              //@synthesize requiredVerificationFieldData=_requiredVerificationFieldData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                           //@synthesize passURL=_passURL - In the implementation block
+(id)responseWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(NSDictionary *)requiredVerificationFieldData;
-(id)initWithData:(id)arg1 forPass:(id)arg2 ;
-(NSURL *)passURL;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(NSArray *)verificationChannels;
-(long long)verificationStatus;
-(NSString *)stepIdentifier;
-(NSString *)previousStepIdentifier;
@end
