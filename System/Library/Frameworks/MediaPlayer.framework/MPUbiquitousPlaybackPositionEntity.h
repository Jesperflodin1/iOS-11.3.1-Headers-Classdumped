/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject {

	BOOL _hasBeenPlayed;
	NSString* _ubiquitousIdentifier;
	double _bookmarkTimestamp;
	double _bookmarkTime;
	unsigned long long _userPlayCount;

}

@property (nonatomic,copy,readonly) NSString * ubiquitousIdentifier;              //@synthesize ubiquitousIdentifier=_ubiquitousIdentifier - In the implementation block
@property (assign,nonatomic) double bookmarkTimestamp;                            //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                                 //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) unsigned long long userPlayCount;                    //@synthesize userPlayCount=_userPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                                  //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
+(id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1 ;
-(id)init;
-(double)bookmarkTime;
-(id)initWithUbiquitousIdentifier:(id)arg1 ;
-(void)setBookmarkTimestamp:(double)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(BOOL)hasBeenPlayed;
-(unsigned long long)userPlayCount;
-(void)setUserPlayCount:(unsigned long long)arg1 ;
-(NSString *)ubiquitousIdentifier;
-(BOOL)hasBeenPlayedModified;
-(BOOL)userPlayCountModified;
-(BOOL)bookmarkTimeModified;
-(BOOL)bookmarkTimestampModified;
-(double)bookmarkTimestamp;
@end

