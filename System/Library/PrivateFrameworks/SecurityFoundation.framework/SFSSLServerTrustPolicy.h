/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslServerTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * serverName; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServerName:(NSString *)arg1 ;
-(id)initWithServerName:(id)arg1 ;
-(NSString *)serverName;
@end

