/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(CGImageRef)createCGImage;
-(id)imageIsZeroSizeImage:(BOOL*)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 isEmptyImage:(BOOL*)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 ;
-(id)patternFromSlice:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)maskFromSlice:(unsigned)arg1 ;
-(id)fillSample;
-(id)layerEffects;
-(id)colorFill;
-(void)dealloc;
-(id)image;
-(id)gradient;
@end
