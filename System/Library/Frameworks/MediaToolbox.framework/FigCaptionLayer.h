/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {

	FigCaptionLayerPrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)updateDisplay:(OpaqueFigCFCaptionRendererRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFontName:(const char*)arg1 ;
-(void)layoutSublayers;
-(void)finalize;
@end
