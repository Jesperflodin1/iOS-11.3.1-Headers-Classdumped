/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {

	CGAffineTransform _transform;
	PVTransformAnimation* _transformAnimation;

}

@property (assign,nonatomic) CGAffineTransform transform;                            //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(BOOL)isPortrait;
-(PVTransformAnimation *)transformAnimation;
-(id)instructionGraphNodeDescription;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(id)getAllSourceNodes;
@end
