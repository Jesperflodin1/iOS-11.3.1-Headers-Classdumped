/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconArtwork.h>

@class VKIconArtwork;

@interface _VKScaledFallbackIconArtwork : VKIconArtwork {

	double _scaleFactor;
	VKIconArtwork* _artwork;

}
-(BOOL)hasBounds;
-(void)dealloc;
-(Matrix<float, 2, 1>)anchorPoint;
-(id)_newImageWithText:(id)arg1 fontName:(id)arg2 ;
-(id)_newImage;
-(void)_cleanUpAfterDrawing;
-(Box<unsigned int, 2>)localRenderBounds;
-(Box<float, 2>)localCollisionBounds;
-(id)initWithArtwork:(id)arg1 contentScale:(double)arg2 ;
-(id)_newScaledImage:(id)arg1 ;
@end

