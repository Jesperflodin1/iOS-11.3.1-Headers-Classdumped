/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSURL* _passURL;
	NSDictionary* _remoteAssetsByTaskIdentifier;

}

@property (nonatomic,retain) NSURL * passURL;                                          //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByTaskIdentifier;              //@synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setRemoteAsset:(id)arg1 forTaskIdentifier:(id)arg2 ;
-(void)removeRemoteAssetForTaskIdentifier:(id)arg1 ;
-(NSDictionary *)remoteAssetsByTaskIdentifier;
-(void)setRemoteAssetsByTaskIdentifier:(NSDictionary *)arg1 ;
-(NSURL *)passURL;
@end
