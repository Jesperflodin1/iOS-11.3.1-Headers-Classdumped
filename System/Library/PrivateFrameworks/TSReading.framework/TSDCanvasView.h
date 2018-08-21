/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>

@protocol TSDCanvasLayerHosting;
@class TSDInteractiveCanvasController, TSKScrollView, TSDCanvasLayer;

@interface TSDCanvasView : UIView {

	TSDInteractiveCanvasController* mController;
	id<TSDCanvasLayerHosting> mLayerHost;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (readonly) TSKScrollView * enclosingScrollView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) TSDCanvasView * rootCanvasView; 
+(Class)layerClass;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)teardown;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(TSKScrollView *)enclosingScrollView;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)controller;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSDCanvasView *)rootCanvasView;
-(TSDCanvasLayer *)canvasLayer;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
@end

