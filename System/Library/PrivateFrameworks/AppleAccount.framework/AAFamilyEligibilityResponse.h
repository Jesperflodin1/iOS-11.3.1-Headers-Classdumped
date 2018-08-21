/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse {

	BOOL _hasPendingInvites;
	NSArray* _familyFeaturePrimaryDescriptions;
	NSArray* _familyFeatureSecondaryDescriptions;
	NSString* _familyFeatureSecondaryTitle;
	NSString* _underageEligibilityAlertTitle;
	NSString* _underageEligibilityAlertMessage;

}

@property (nonatomic,readonly) BOOL eligible; 
@property (nonatomic,readonly) long long eligibilityStatus; 
@property (nonatomic,readonly) BOOL hasPendingInvites;                                    //@synthesize hasPendingInvites=_hasPendingInvites - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeaturePrimaryDescriptions;                //@synthesize familyFeaturePrimaryDescriptions=_familyFeaturePrimaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeatureSecondaryDescriptions;              //@synthesize familyFeatureSecondaryDescriptions=_familyFeatureSecondaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSString * familyFeatureSecondaryTitle;                    //@synthesize familyFeatureSecondaryTitle=_familyFeatureSecondaryTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertTitle;                  //@synthesize underageEligibilityAlertTitle=_underageEligibilityAlertTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertMessage;                //@synthesize underageEligibilityAlertMessage=_underageEligibilityAlertMessage - In the implementation block
-(BOOL)eligible;
-(NSArray *)familyFeaturePrimaryDescriptions;
-(NSArray *)familyFeatureSecondaryDescriptions;
-(NSString *)familyFeatureSecondaryTitle;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(long long)eligibilityStatus;
-(NSString *)underageEligibilityAlertTitle;
-(NSString *)underageEligibilityAlertMessage;
-(BOOL)hasPendingInvites;
@end
