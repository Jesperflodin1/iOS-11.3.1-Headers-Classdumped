/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigCDSCALayer : FigBaseCALayer {

	OpaqueFigCDSCALayerInternal* layerInternal;

}
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)layoutSublayers;
-(void)clear:(CGRect)arg1 ;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)finalize;
@end
