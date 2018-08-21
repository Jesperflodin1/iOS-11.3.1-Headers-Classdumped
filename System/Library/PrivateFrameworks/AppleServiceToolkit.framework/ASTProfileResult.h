/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSArray, ASTIdentity;

@interface ASTProfileResult : ASTSealablePayload {

	NSArray* _properties;
	NSArray* _tests;
	ASTIdentity* _identity;

}

@property (nonatomic,readonly) ASTIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * properties;                  //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSArray * tests;                       //@synthesize tests=_tests - In the implementation block
+(id)resultWithIdentity:(id)arg1 ;
+(id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)init;
-(ASTIdentity *)identity;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(id)initWithIdentity:(id)arg1 ;
-(NSArray *)tests;
-(void)setTests:(NSArray *)arg1 ;
-(id)generatePayload;
@end
