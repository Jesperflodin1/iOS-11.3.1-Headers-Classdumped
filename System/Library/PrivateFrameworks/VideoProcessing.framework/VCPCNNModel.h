/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPCNNBlock, VCPCNNMetalContext, VCPCNNData;

@interface VCPCNNModel : NSObject {

	VCPCNNBlock* _blocks[200];
	short _quantFactor;
	BOOL _useGPU;
	BOOL _executed;
	VCPCNNMetalContext* _context;
	VCPCNNData* _output;

}

@property (readonly) VCPCNNData * output;              //@synthesize output=_output - In the implementation block
-(id)init;
-(int)size;
-(id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2 ;
-(id)getGPUContext;
-(int)initializeNetwork:(id)arg1 paramFileUrl:(id)arg2 ;
-(int)forward:(id)arg1 ;
-(int)reinitGPUTemporalMemory:(id)arg1 ;
-(int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(VCPCNNData *)output;
-(int)add:(id)arg1 ;
@end

