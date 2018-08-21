/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface VCCapabilities : NSObject <NSCoding> {

	BOOL isAudioEnabled;
	BOOL isAudioPausedToStart;
	BOOL isVideoEnabled;
	BOOL isVideoPausedToStart;
	BOOL isVideoSourceScreen;
	BOOL isDuplexAudioOnly;
	BOOL isDuplexVideoOnly;
	BOOL isKeyExchangeEnabled;
	BOOL isRelayEnabled;
	BOOL isRelayForced;
	BOOL requiresWifi;
	BOOL isDTLSEnabled;
	unsigned preferredAudioCodec;
	unsigned actualAudioCodec;
	unsigned preferredVideoCodec;
	unsigned actualVideoCodec;
	int deviceRole;

}

@property (assign) BOOL isAudioEnabled; 
@property (assign) BOOL isAudioPausedToStart; 
@property (assign) BOOL isVideoEnabled; 
@property (assign) BOOL isVideoPausedToStart; 
@property (assign) BOOL isVideoSourceScreen; 
@property (assign) BOOL isDuplexVideoOnly; 
@property (assign) BOOL isDuplexAudioOnly; 
@property (assign) BOOL isKeyExchangeEnabled; 
@property (assign) BOOL isRelayEnabled; 
@property (assign) BOOL isRelayForced; 
@property (assign) BOOL requiresWifi; 
@property (assign) BOOL isDTLSEnabled; 
@property (assign) unsigned preferredAudioCodec; 
@property (assign) unsigned actualAudioCodec; 
@property (assign) unsigned preferredVideoCodec; 
@property (assign) unsigned actualVideoCodec; 
@property (assign) int deviceRole; 
+(id)DataOnlyVCCapabilities;
+(id)AudioOnlyVCCapabilities;
+(id)VideoOnlyVCCapabilities;
+(id)screenSharingVCCapabilities;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(id)newEncodedDictionary;
-(BOOL)isAudioPausedToStart;
-(BOOL)isVideoPausedToStart;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(unsigned)preferredAudioCodec;
-(BOOL)isDuplexAudioOnly;
-(void)setPreferredAudioCodec:(unsigned)arg1 ;
-(unsigned)actualAudioCodec;
-(void)setActualAudioCodec:(unsigned)arg1 ;
-(unsigned)preferredVideoCodec;
-(void)setPreferredVideoCodec:(unsigned)arg1 ;
-(unsigned)actualVideoCodec;
-(void)setActualVideoCodec:(unsigned)arg1 ;
-(BOOL)isDTLSEnabled;
-(BOOL)isKeyExchangeEnabled;
-(BOOL)isRelayForced;
-(void)setIsDTLSEnabled:(BOOL)arg1 ;
-(BOOL)isDuplexVideoOnly;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(void)setIsVideoEnabled:(BOOL)arg1 ;
-(void)setIsDuplexAudioOnly:(BOOL)arg1 ;
-(void)setIsDuplexVideoOnly:(BOOL)arg1 ;
-(void)setIsVideoPausedToStart:(BOOL)arg1 ;
-(void)setIsVideoSourceScreen:(BOOL)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(BOOL)isVideoSourceScreen;
-(void)setIsKeyExchangeEnabled:(BOOL)arg1 ;
-(void)setIsAudioPausedToStart:(BOOL)arg1 ;
-(void)setIsRelayEnabled:(BOOL)arg1 ;
-(void)setIsRelayForced:(BOOL)arg1 ;
-(BOOL)isRelayEnabled;
@end

