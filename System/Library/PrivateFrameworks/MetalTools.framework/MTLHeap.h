/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLHeap <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long currentAllocatedSize; 
@required
-(unsigned long long)usedSize;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
-(id)newTextureWithDescriptor:(id)arg1;
-(unsigned long long)size;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)storageMode;
-(unsigned long long)currentAllocatedSize;
-(id<MTLDevice>)device;

@end

