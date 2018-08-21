/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLFunctionConstant.h>

@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _index;
	BOOL _required;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(BOOL)arg4 ;
-(BOOL)required;
-(void)dealloc;
-(id)description;
-(id)name;
-(unsigned long long)type;
-(unsigned long long)index;
@end
