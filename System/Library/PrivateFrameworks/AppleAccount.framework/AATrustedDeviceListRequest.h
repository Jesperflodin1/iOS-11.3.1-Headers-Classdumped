/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest {

	AAGrandSlamSigner* _grandSlamSigner;
	NSString* _heartbeatToken;

}

@property (nonatomic,copy) NSString * heartbeatToken;              //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
+(Class)responseClass;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
-(id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

