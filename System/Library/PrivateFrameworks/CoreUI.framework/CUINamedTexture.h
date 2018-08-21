/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	double _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
-(BOOL)_cacheRenditionProperties;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(double)scale;
-(CGSize)size;
-(id)description;
-(int)exifOrientation;
-(BOOL)isOpaque;
-(BOOL)isAlphaCropped;
-(CGRect)alphaCroppedRect;
@end

