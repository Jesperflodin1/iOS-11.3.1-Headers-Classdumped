/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PVInstructionGraphNode, NSString;

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	SCD_Struct_PV28 m_timeRange;
	BOOL m_enablePostProcessing;
	BOOL m_containsTweening;
	NSArray* m_requiredSourceTrackIDs;
	int m_passthroughTrackID;
	PVInstructionGraphNode* m_outputIGNode;
	BOOL _isFreezeFrame;

}

@property (assign,nonatomic) SCD_Struct_PV28 timeRange; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
@property (assign,nonatomic) BOOL containsTweening; 
@property (assign,nonatomic) BOOL isFreezeFrame;                               //@synthesize isFreezeFrame=_isFreezeFrame - In the implementation block
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (nonatomic,retain) PVInstructionGraphNode * outputNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(SCD_Struct_PV28)timeRange;
-(void)setTimeRange:(SCD_Struct_PV28)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)unloadInstructionGraphNodes;
-(void)loadInstructionGraphNodes:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)videoInstructionDescription;
-(BOOL)isFreezeFrame;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)setContainsTweening:(BOOL)arg1 ;
-(void)setOutputNode:(PVInstructionGraphNode *)arg1 ;
-(void)setIsFreezeFrame:(BOOL)arg1 ;
-(PVInstructionGraphNode *)outputNode;
-(NSArray *)requiredSourceTrackIDs;
@end
