/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLVertexAttributeDescriptorArray * attributes; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

