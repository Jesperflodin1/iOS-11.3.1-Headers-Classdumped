/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFSignatureInfo : NSObject <NSSecureCoding> {

	NSString* _rsaCert;
	NSString* _eccCert;
	NSString* _eckaCert;
	NSString* _seid;
	NSString* _platformId;
	NSString* _jsblCounter;
	unsigned long long _certificateVersion;

}

@property (nonatomic,readonly) NSString * rsaCert;                                 //@synthesize rsaCert=_rsaCert - In the implementation block
@property (nonatomic,readonly) NSString * eccCert;                                 //@synthesize eccCert=_eccCert - In the implementation block
@property (nonatomic,readonly) NSString * eckaCert;                                //@synthesize eckaCert=_eckaCert - In the implementation block
@property (nonatomic,readonly) NSString * seid;                                    //@synthesize seid=_seid - In the implementation block
@property (nonatomic,readonly) NSString * platformId;                              //@synthesize platformId=_platformId - In the implementation block
@property (nonatomic,readonly) NSString * jsblCounter;                             //@synthesize jsblCounter=_jsblCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;              //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)certificateVersion;
-(NSString *)rsaCert;
-(NSString *)eccCert;
-(NSString *)jsblCounter;
-(NSString *)platformId;
-(NSString *)seid;
-(NSString *)eckaCert;
@end

