/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {

	AVAssetCustomURLBridgeForNSURLProtocol* _bridge;
	CFURLConnectionRef _connection;
	CFErrorRef _error;

}

@property (assign,nonatomic,__weak) AVAssetCustomURLBridgeForNSURLProtocol * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) CFURLConnectionRef connection; 
-(void)dealloc;
-(CFURLConnectionRef)connection;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
-(AVAssetCustomURLBridgeForNSURLProtocol *)bridge;
-(void)setBridge:(AVAssetCustomURLBridgeForNSURLProtocol *)arg1 ;
@end

