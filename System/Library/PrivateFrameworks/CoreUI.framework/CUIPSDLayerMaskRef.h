/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {

	CUIPSDLayerRef* _layerRef;
	BOOL _isVectorMask;

}
-(id)initLayerMaskWithLayerRef:(id)arg1 ;
-(id)initVectorMaskWithLayerRef:(id)arg1 ;
-(CGPathRef)newBezierPathAtScale:(double)arg1 ;
-(id)layerRef;
-(BOOL)isLinked;
-(BOOL)isInvertedWhenBlending;
-(CGPathRef)newBezierPath;
-(CGImageRef)createCGImageMask;
-(CGRect)bounds;
-(void)dealloc;
-(BOOL)isEnabled;
@end

