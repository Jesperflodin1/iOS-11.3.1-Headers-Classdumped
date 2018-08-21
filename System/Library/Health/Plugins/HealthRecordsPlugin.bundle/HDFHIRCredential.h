/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKOAuth2Credential.h>

@class NSString;

@interface HDFHIRCredential : HKOAuth2Credential {

	NSString* _patientID;

}

@property (nonatomic,copy,readonly) NSString * patientID;              //@synthesize patientID=_patientID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)patientID;
-(id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5 patientID:(id)arg6 ;
-(id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scopeString:(id)arg5 patientID:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scopeString:(id)arg5 ;
@end
