/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>

@class PVEffect, KenBurnsInfo;

@interface IrisMovieClip : MovieClip {

	BOOL _front;
	PVEffect* _frameBlendEffect;
	IrisMovieClip* _shiftedClip;
	KenBurnsInfo* _kenBurnsInfo;
	PVEffect* _kenBurnsEffect;

}

@property (assign,getter=isFront,nonatomic) BOOL front;                  //@synthesize front=_front - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kenBurnsInfo;                //@synthesize kenBurnsInfo=_kenBurnsInfo - In the implementation block
@property (nonatomic,retain) PVEffect * kenBurnsEffect;                  //@synthesize kenBurnsEffect=_kenBurnsEffect - In the implementation block
@property (nonatomic,retain) PVEffect * frameBlendEffect;                //@synthesize frameBlendEffect=_frameBlendEffect - In the implementation block
@property (nonatomic,readonly) IrisMovieClip * shiftedClip;              //@synthesize shiftedClip=_shiftedClip - In the implementation block
+(id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)maxDuration;
-(void)validateEffectRange:(SCD_Struct_Mi11)arg1 inProject:(id)arg2 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(BOOL)isFront;
-(void)setFront:(BOOL)arg1 ;
-(PVEffect *)kenBurnsEffect;
-(void)setKenBurnsEffect:(PVEffect *)arg1 ;
-(KenBurnsInfo *)kenBurnsInfo;
-(void)setKenBurnsInfo:(KenBurnsInfo *)arg1 ;
-(PVEffect *)frameBlendEffect;
-(IrisMovieClip *)shiftedClip;
-(void)setFrameBlendEffect:(PVEffect *)arg1 ;
@end

