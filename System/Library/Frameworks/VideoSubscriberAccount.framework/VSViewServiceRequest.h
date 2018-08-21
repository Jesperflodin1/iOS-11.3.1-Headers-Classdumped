/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VSAccountMetadataRequest, VSOptional, NSString, NSArray;

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsPrivacyUI;
	BOOL _requiresPrivacyUI;
	BOOL _canVetoAuthentication;
	BOOL _shouldInferFeaturedProviders;
	VSAccountMetadataRequest* _accountMetadataRequest;
	VSOptional* _requestingAppDisplayName;
	NSString* _requestingAppAdamID;

}

@property (nonatomic,retain) VSOptional * requestingAppDisplayName;                                       //@synthesize requestingAppDisplayName=_requestingAppDisplayName - In the implementation block
@property (nonatomic,retain) NSString * requestingAppAdamID;                                              //@synthesize requestingAppAdamID=_requestingAppAdamID - In the implementation block
@property (assign,nonatomic) BOOL allowsPrivacyUI;                                                        //@synthesize allowsPrivacyUI=_allowsPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL requiresPrivacyUI;                                                      //@synthesize requiresPrivacyUI=_requiresPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL canVetoAuthentication;                                                  //@synthesize canVetoAuthentication=_canVetoAuthentication - In the implementation block
@property (nonatomic,copy) VSAccountMetadataRequest * accountMetadataRequest;                             //@synthesize accountMetadataRequest=_accountMetadataRequest - In the implementation block
@property (nonatomic,readonly) BOOL allowsAuthenticationUI; 
@property (nonatomic,copy,readonly) NSArray * supportedIdentityProviderIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * featuredIdentityProviderIdentifiers; 
@property (assign,nonatomic) BOOL shouldInferFeaturedProviders;                                           //@synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedAccountProviderAuthenticationSchemes; 
@property (nonatomic,copy,readonly) NSString * localizedVideoTitle; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowsPrivacyUI:(BOOL)arg1 ;
-(void)setRequiresPrivacyUI:(BOOL)arg1 ;
-(void)setCanVetoAuthentication:(BOOL)arg1 ;
-(VSOptional *)requestingAppDisplayName;
-(NSArray *)featuredIdentityProviderIdentifiers;
-(BOOL)shouldInferFeaturedProviders;
-(NSArray *)supportedIdentityProviderIdentifiers;
-(void)setShouldInferFeaturedProviders:(BOOL)arg1 ;
-(void)setAccountMetadataRequest:(VSAccountMetadataRequest *)arg1 ;
-(void)setRequestingAppDisplayName:(VSOptional *)arg1 ;
-(void)setRequestingAppAdamID:(NSString *)arg1 ;
-(VSAccountMetadataRequest *)accountMetadataRequest;
-(NSString *)requestingAppAdamID;
-(BOOL)allowsPrivacyUI;
-(BOOL)requiresPrivacyUI;
-(NSArray *)supportedAccountProviderAuthenticationSchemes;
-(BOOL)allowsAuthenticationUI;
-(NSString *)localizedVideoTitle;
-(BOOL)canVetoAuthentication;
@end
