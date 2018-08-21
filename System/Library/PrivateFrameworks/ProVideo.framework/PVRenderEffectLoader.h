/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderEffectLoader : NSObject {

	deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> >* _loadedEffects;
	HGSynchronizable* _lock;
	float _unusedEffectTimeout;

}

@property (assign,nonatomic) float unusedEffectTimeout;              //@synthesize unusedEffectTimeout=_unusedEffectTimeout - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unloadEffects;
-(void)_loadEffects_noLock:(id)arg1 ;
-(void)_removeTimedOutEffects_noLock;
-(float)unusedEffectTimeout;
-(void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)setUnusedEffectTimeout:(float)arg1 ;
@end

