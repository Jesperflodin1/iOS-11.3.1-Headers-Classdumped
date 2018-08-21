/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKInternalDrawingViewDelegate <NSObject>
@required
-(void)setIsDrawing:(BOOL)arg1;
-(void)drawingDidChange:(id)arg1;
-(void)renderingDidFinish;
-(BOOL)canBeginDrawingWithTouch:(id)arg1;
-(void)willBeginDrawingWithTouch:(id)arg1;
-(void)didFinishRenderingStroke:(id)arg1 inDrawing:(id)arg2;
-(void)drawingCancelled;

@end

