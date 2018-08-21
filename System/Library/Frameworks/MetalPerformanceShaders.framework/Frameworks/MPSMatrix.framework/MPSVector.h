/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSMatrix/MPSMatrix-Structs.h>
@interface MPSVector : NSObject {

	MPSDevice* _device;
	unsigned long long _length;
	unsigned long long _vectors;
	unsigned long long _vectorBytes;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long length;                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long vectors;                  //@synthesize vectors=_vectors - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorBytes;              //@synthesize vectorBytes=_vectorBytes - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(id)initWithBuffer:(id)arg1 length:(unsigned long long)arg2 dataType:(unsigned)arg3 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)vectorBytes;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(id<MTLBuffer>)data;
-(unsigned long long)vectors;
-(unsigned long long)resourceSize;
-(unsigned)dataType;
-(id<MTLDevice>)device;
@end

