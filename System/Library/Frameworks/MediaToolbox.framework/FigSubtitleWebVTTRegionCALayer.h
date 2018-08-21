/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(CFStringRef)getContentID;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(id)init;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)finalize;
@end

