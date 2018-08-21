/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _trimmed;
	BOOL _userModified;
	float _normalGain;
	float _dimmedGain;
	unsigned long long _mute;
	double _start;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                           //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                         //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                            //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL trimmed;                         //@synthesize trimmed=_trimmed - In the implementation block
@property (assign,nonatomic) unsigned long long mute;              //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) float gain; 
@property (assign,nonatomic) float normalGain;                     //@synthesize normalGain=_normalGain - In the implementation block
@property (assign,nonatomic) float dimmedGain;                     //@synthesize dimmedGain=_dimmedGain - In the implementation block
@property (assign,nonatomic) double start;                         //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL userModified;                    //@synthesize userModified=_userModified - In the implementation block
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)start;
-(void)setStart:(double)arg1 ;
-(float)gain;
-(void)setMute:(unsigned long long)arg1 ;
-(unsigned long long)mute;
-(BOOL)userModified;
-(void)setNormalGain:(float)arg1 ;
-(void)setDimmedGain:(float)arg1 ;
-(void)setUsed:(BOOL)arg1 ;
-(void)setUserModified:(BOOL)arg1 ;
-(float)normalGain;
-(float)dimmedGain;
-(id)dataRepresentation;
-(BOOL)trimmed;
-(BOOL)removed;
-(void)setTrimmed:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)used;
-(BOOL)added;
@end

