/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIndirectArgumentDescriptor.h>

@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(void)setDataType:(unsigned long long)arg1 ;
-(unsigned long long)access;
-(void)setTextureType:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(void)setAccess:(unsigned long long)arg1 ;
@end

