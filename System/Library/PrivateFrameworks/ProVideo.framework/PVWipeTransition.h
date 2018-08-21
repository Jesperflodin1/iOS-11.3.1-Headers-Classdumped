/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVWipeTransition : PVHeliumEffect {

	int _transitionDirection;

}

@property (assign,nonatomic) int transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV19)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
@end

