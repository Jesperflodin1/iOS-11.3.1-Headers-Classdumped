/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTask.h>

@class NSUUID, AXMVisionPipelineContext, AXMSourceNode;

@interface _AXMVisionEngineAnalysisTask : AXMTask {

	NSUUID* _identifier;
	AXMVisionPipelineContext* _context;
	AXMSourceNode* _source;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMVisionPipelineContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXMSourceNode * source;                          //@synthesize source=_source - In the implementation block
+(id)itemWithSource:(id)arg1 context:(id)arg2 ;
-(NSUUID *)identifier;
-(void)setSource:(AXMSourceNode *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(AXMVisionPipelineContext *)context;
-(void)setContext:(AXMVisionPipelineContext *)arg1 ;
-(AXMSourceNode *)source;
-(id)initWithSource:(id)arg1 context:(id)arg2 ;
@end

