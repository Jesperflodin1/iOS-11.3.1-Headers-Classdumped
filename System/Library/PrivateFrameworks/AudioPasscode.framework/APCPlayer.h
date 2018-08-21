/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AudioPasscode/AudioPasscode-Structs.h>
@class AVPlayer, APCEncoderProcessor, APCPlayerEngine, AUPasscodeCodecConfiguration, NSData, NSObject;

@interface APCPlayer : NSObject {

	AVPlayer* _player;
	APCEncoderProcessor* _encodeProcessor;
	APCPlayerEngine* _playerEngine;
	AUPasscodeCodecConfiguration* _codecConfig;
	BOOL _isPlaying;
	NSData* _payload;
	NSData* _configurationData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy,readonly) NSData * payload;                                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSData * configurationData;                       //@synthesize configurationData=_configurationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) BOOL isPlaying;                                                  //@synthesize isPlaying=_isPlaying - In the implementation block
+(id)fileNameForCarrierAsset:(unsigned long long)arg1 ;
+(id)carrierAssetIdentifiers;
+(id)urlForCarrierAsset:(unsigned long long)arg1 ;
+(unsigned long long)assetIDFromIdentifier:(id)arg1 ;
-(id)init;
-(NSData *)payload;
-(BOOL)isPlaying;
-(void)stopSend:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithListenerCapabilityData:(NSData*)arg1 payloadLength:(unsigned long long)arg2 ;
-(float)preparePayload:(id)arg1 usingCarrierAtURL:(id)arg2 error:(id*)arg3 ;
-(float)preparePayload:(id)arg1 usingCarrierAsset:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)startSend;
-(NSData *)configurationData;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)endPasscodeEmbedding;
-(id)initWithCodecConfiguration:(id)arg1 ;
-(id)createCompatibleConfigForCapabilites:(id)arg1 ;
-(id)initWithListenerCapabilityData:(NSData*)arg1 ;
-(void)stopSendAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopSendWithFadeOut:(float)arg1 completion:(/*^block*/id)arg2 ;
@end

