/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShareTokenMetadata : NSObject <NSCopying> {

	BOOL _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenData;
	NSData* _publicTokenData;
	NSData* _privateTokenData;

}

@property (nonatomic,retain) NSString * routingKey;                             //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenData;                    //@synthesize shortSharingTokenData=_shortSharingTokenData - In the implementation block
@property (nonatomic,readonly) NSString * shortSharingToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (assign,nonatomic) BOOL forceDSRefetch;                               //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
@property (nonatomic,retain) NSData * publicTokenData;                          //@synthesize publicTokenData=_publicTokenData - In the implementation block
@property (nonatomic,retain) NSData * privateTokenData;                         //@synthesize privateTokenData=_privateTokenData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)shortSharingTokenData;
-(void)setPrivateTokenData:(NSData *)arg1 ;
-(void)setPublicTokenData:(NSData *)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
-(NSData *)privateTokenData;
-(NSData *)publicTokenData;
-(void)setShortSharingTokenData:(NSData *)arg1 ;
-(NSString *)shortSharingToken;
@end

