/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCMediaNegotiationBlobAudioSettings, NSMutableArray, NSString, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings;

@interface VCMediaNegotiationBlob : PBCodable <NSCopying> {

	unsigned long long _ntpTime;
	VCMediaNegotiationBlobAudioSettings* _audioSettings;
	NSMutableArray* _bandwidthSettings;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	unsigned _blobVersion;
	VCMediaNegotiationBlobCaptionsSettings* _captionsSettings;
	VCMediaNegotiationBlobMomentsSettings* _momentsSettings;
	NSMutableArray* _multiwayAudioStreams;
	VCMediaNegotiationBlobVideoSettings* _screenSettings;
	NSString* _userAgent;
	VCMediaNegotiationBlobVideoSettings* _videoSettings;
	BOOL _allowDynamicMaxBitrate;
	BOOL _allowsContentsChangeWithAspectPreservation;
	SCD_Struct_VC74 _has;

}

@property (assign,nonatomic) BOOL hasAllowDynamicMaxBitrate; 
@property (assign,nonatomic) BOOL allowDynamicMaxBitrate;                                            //@synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation; 
@property (assign,nonatomic) BOOL allowsContentsChangeWithAspectPreservation;                        //@synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobAudioSettings * audioSettings;                    //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobVideoSettings * videoSettings;                    //@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasScreenSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobVideoSettings * screenSettings;                   //@synthesize screenSettings=_screenSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL hasBasebandCodec; 
@property (nonatomic,retain) NSString * basebandCodec;                                               //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) BOOL hasBasebandCodecSampleRate; 
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                                       //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSMutableArray * bandwidthSettings;                                     //@synthesize bandwidthSettings=_bandwidthSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionsSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobCaptionsSettings * captionsSettings;              //@synthesize captionsSettings=_captionsSettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * multiwayAudioStreams;                                  //@synthesize multiwayAudioStreams=_multiwayAudioStreams - In the implementation block
@property (nonatomic,readonly) BOOL hasMomentsSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobMomentsSettings * momentsSettings;                //@synthesize momentsSettings=_momentsSettings - In the implementation block
@property (assign,nonatomic) BOOL hasNtpTime; 
@property (assign,nonatomic) unsigned long long ntpTime;                                             //@synthesize ntpTime=_ntpTime - In the implementation block
@property (assign,nonatomic) BOOL hasBlobVersion; 
@property (assign,nonatomic) unsigned blobVersion;                                                   //@synthesize blobVersion=_blobVersion - In the implementation block
+(Class)bandwidthSettingsType;
+(Class)multiwayAudioStreamsType;
-(VCMediaNegotiationBlobAudioSettings *)audioSettings;
-(void)setAudioSettings:(VCMediaNegotiationBlobAudioSettings *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(VCMediaNegotiationBlobMomentsSettings *)momentsSettings;
-(void)setMomentsSettings:(VCMediaNegotiationBlobMomentsSettings *)arg1 ;
-(BOOL)allowsContentsChangeWithAspectPreservation;
-(void)setAllowsContentsChangeWithAspectPreservation:(BOOL)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(unsigned long long)ntpTime;
-(NSMutableArray *)multiwayAudioStreams;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(void)setScreenSettings:(VCMediaNegotiationBlobVideoSettings *)arg1 ;
-(void)setBandwidthSettings:(NSMutableArray *)arg1 ;
-(void)setCaptionsSettings:(VCMediaNegotiationBlobCaptionsSettings *)arg1 ;
-(void)setMultiwayAudioStreams:(NSMutableArray *)arg1 ;
-(void)addBandwidthSettings:(id)arg1 ;
-(void)addMultiwayAudioStreams:(id)arg1 ;
-(unsigned long long)bandwidthSettingsCount;
-(void)clearBandwidthSettings;
-(id)bandwidthSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)multiwayAudioStreamsCount;
-(void)clearMultiwayAudioStreams;
-(id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1 ;
-(void)setAllowDynamicMaxBitrate:(BOOL)arg1 ;
-(void)setHasAllowDynamicMaxBitrate:(BOOL)arg1 ;
-(BOOL)hasAllowDynamicMaxBitrate;
-(void)setHasAllowsContentsChangeWithAspectPreservation:(BOOL)arg1 ;
-(BOOL)hasAllowsContentsChangeWithAspectPreservation;
-(BOOL)hasAudioSettings;
-(BOOL)hasVideoSettings;
-(BOOL)hasScreenSettings;
-(BOOL)hasUserAgent;
-(BOOL)hasBasebandCodec;
-(void)setHasBasebandCodecSampleRate:(BOOL)arg1 ;
-(BOOL)hasBasebandCodecSampleRate;
-(BOOL)hasCaptionsSettings;
-(BOOL)hasMomentsSettings;
-(void)setNtpTime:(unsigned long long)arg1 ;
-(void)setHasNtpTime:(BOOL)arg1 ;
-(BOOL)hasNtpTime;
-(void)setBlobVersion:(unsigned)arg1 ;
-(void)setHasBlobVersion:(BOOL)arg1 ;
-(BOOL)hasBlobVersion;
-(BOOL)allowDynamicMaxBitrate;
-(VCMediaNegotiationBlobVideoSettings *)screenSettings;
-(NSString *)basebandCodec;
-(NSMutableArray *)bandwidthSettings;
-(VCMediaNegotiationBlobCaptionsSettings *)captionsSettings;
-(unsigned)blobVersion;
-(void)printWithTitle:(id)arg1 blobSize:(unsigned)arg2 logFile:(void*)arg3 ;
-(void)printBandwidthSettingsWithLogFile:(void*)arg1 ;
-(void)printCaptionsSettingsWithLogFile:(void*)arg1 ;
-(void)printMomentsSettingsWithLogFile:(void*)arg1 ;
-(VCMediaNegotiationBlobVideoSettings *)videoSettings;
-(void)setVideoSettings:(VCMediaNegotiationBlobVideoSettings *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
@end
