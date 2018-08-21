/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UserEventPlugins/com.apple.accessoryd.matching.plugin/com.apple.accessoryd.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSData;

@interface DetachEvent : NSObject {

	BOOL _restrictedModeEnabled;
	NSNumber* _timestamp;
	NSNumber* _primaryPort;
	NSNumber* _duration;
	NSData* _accDigitalID;

}

@property (nonatomic,retain) NSNumber * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSNumber * primaryPort;                  //@synthesize primaryPort=_primaryPort - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSData * accDigitalID;                   //@synthesize accDigitalID=_accDigitalID - In the implementation block
@property (assign,nonatomic) BOOL restrictedModeEnabled;              //@synthesize restrictedModeEnabled=_restrictedModeEnabled - In the implementation block
-(void)setRestrictedModeEnabled:(BOOL)arg1 ;
-(NSNumber *)primaryPort;
-(BOOL)restrictedModeEnabled;
-(NSData *)accDigitalID;
-(void)setAccDigitalID:(NSData *)arg1 ;
-(id)initWithTimestamp:(id)arg1 primaryPort:(id)arg2 restrictedModeEnabled:(BOOL)arg3 ;
-(void)setPrimaryPort:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
@end
