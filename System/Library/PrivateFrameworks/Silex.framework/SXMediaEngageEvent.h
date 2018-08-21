/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXMediaEvent.h>

@class NSString, NSError;

@interface SXMediaEngageEvent : SXMediaEvent {

	BOOL _muted;
	unsigned long long _userAction;
	double _mediaTimePlayed;
	NSString* _mediaPlayMethod;
	NSString* _mediaPauseMethod;
	NSString* _mediaResumeMethod;
	unsigned long long _mediaPausePosition;
	unsigned long long _mediaResumePosition;
	double _mediaFrameRate;
	double _mediaDuration;
	double _volume;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long userAction;                       //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;                              //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (nonatomic,retain) NSString * mediaPlayMethod;                          //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaPauseMethod;                         //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaResumeMethod;                        //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPausePosition;               //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) unsigned long long mediaResumePosition;              //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) double mediaFrameRate;                               //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                                //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                                       //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)muted;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setMuted:(BOOL)arg1 ;
-(unsigned long long)userAction;
-(void)setUserAction:(unsigned long long)arg1 ;
-(void)setMediaTimePlayed:(double)arg1 ;
-(double)mediaTimePlayed;
-(NSString *)mediaPlayMethod;
-(void)setMediaPlayMethod:(NSString *)arg1 ;
-(NSString *)mediaPauseMethod;
-(void)setMediaPauseMethod:(NSString *)arg1 ;
-(void)setMediaPausePosition:(unsigned long long)arg1 ;
-(NSString *)mediaResumeMethod;
-(void)setMediaResumeMethod:(NSString *)arg1 ;
-(void)setMediaResumePosition:(unsigned long long)arg1 ;
-(unsigned long long)mediaPausePosition;
-(unsigned long long)mediaResumePosition;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
-(void)setMediaDuration:(double)arg1 ;
-(double)mediaDuration;
@end

