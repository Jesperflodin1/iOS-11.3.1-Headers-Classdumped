/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandBuffer;
@class NSString, _MTLCommandBuffer;

@interface _MTLCommandEncoder : NSObject {

	id<MTLDevice> _device;
	NSString* _label;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned long long _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                                                           //@synthesize label=_label - In the implementation block
@property (assign,getter=globalTraceObjectID,nonatomic) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long numThisEncoder;                                              //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(void)insertDebugSignpost:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
-(unsigned long long)numThisEncoder;
-(void)setNumThisEncoder:(unsigned long long)arg1 ;
-(id)commandBuffer;
-(void)endEncoding;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id<MTLDevice>)device;
-(unsigned long long)getType;
@end

