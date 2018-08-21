/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(BOOL)audioEnabledByDefault;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
-(float)speed;
-(double)aspectRatio;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isFreezeFrame;
-(int)rawSourceDuration;
-(BOOL)hasVisualCharacteristic;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
-(void)clearFreezeFrame;
@end

