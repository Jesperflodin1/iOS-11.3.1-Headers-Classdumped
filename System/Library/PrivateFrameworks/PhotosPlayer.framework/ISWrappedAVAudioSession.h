/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject {

	AVAudioSession* _audioSession;

}

@property (nonatomic,readonly) AVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) NSString * category; 
+(void)sharedAmbientInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(id)sharedAmbientInstance;
+(id)auxiliarySession;
-(void)dealloc;
-(NSString *)category;
-(id)_init;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(AVAudioSession *)audioSession;
@end
