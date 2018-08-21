/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned long long _offset;
	unsigned _dataType : 16;
	id _details;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	unsigned long long _argumentIndex;
	unsigned long long _render_target;
	unsigned long long _raster_order_group;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long pixelFormat;                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                         //@synthesize aluType=_aluType - In the implementation block
@property (readonly) unsigned long long render_target;                   //@synthesize render_target=_render_target - In the implementation block
@property (readonly) unsigned long long raster_order_group;              //@synthesize raster_order_group=_raster_order_group - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indirectArgumentIndex;
-(id)indirectArgumentType;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9 ;
-(BOOL)isMemberLayoutThreadSafeWith:(id)arg1 ;
-(id)textureReferenceType;
-(id)pointerType;
-(unsigned long long)aluType;
-(unsigned long long)argumentIndex;
-(unsigned long long)render_target;
-(unsigned long long)raster_order_group;
-(id)dataTypeDescription;
-(unsigned long long)pixelFormat;
-(void)dealloc;
-(id)name;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)structType;
-(id)arrayType;
-(unsigned long long)dataType;
@end
