/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface VSKeepAlive : NSObject {

	NSXPCConnection* _serverConnection;
	long long _audioType;
	BOOL _active;
	BOOL _keepAudioSessionActive;

}

@property (assign,nonatomic) long long audioType;                      //@synthesize audioType=_audioType - In the implementation block
@property (assign,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL keepAudioSessionActive;              //@synthesize keepAudioSessionActive=_keepAudioSessionActive - In the implementation block
-(id)_serverConnection;
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setKeepAudioSessionActive:(BOOL)arg1 ;
-(void)_ensureKeepAliveMaintenance;
-(id)_remoteKeepAlive;
-(BOOL)keepAudioSessionActive;
-(void)setAudioType:(long long)arg1 ;
-(long long)audioType;
@end

