/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding> {

	NSData* _tokenData;
	NSString* _proxiedBundleId;
	NSString* _resolvedBundleId;

}

@property (nonatomic,readonly) NSString * proxiedBundleId;              //@synthesize proxiedBundleId=_proxiedBundleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProxiedApplicationBundleId:(id)arg1 ;
-(NSString *)proxiedBundleId;
-(id)publicLogDescription;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)initWithAuditTokenData:(id)arg1 ;
-(id)backingTokenData;
-(id)_bundleIdForAuditToken;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)bundleId;
@end
