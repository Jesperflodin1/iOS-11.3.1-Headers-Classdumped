/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewScrollViewZoomDelegate <NSObject>
@optional
-(BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg1;
-(double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
-(void)previewScrollViewWillBeginZooming:(id)arg1;
-(void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2;

@end

