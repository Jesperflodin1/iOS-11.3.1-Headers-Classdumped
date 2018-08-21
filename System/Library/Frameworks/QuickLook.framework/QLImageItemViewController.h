/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLScrollableContentItemViewController.h>
#import <libobjc.A.dylib/QLAnimationTimerObserver.h>

@class UIImageView, QLAnimatedImage, NSString;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {

	UIImageView* _imageView;
	QLAnimatedImage* _animatedImage;
	double _initialTimeStamp;
	double _currentPlaybackTime;
	CGSize _imageSize;
	BOOL _imageIsAnimated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
+(id)supportedContentTypes;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)draggableView;
-(CGSize)imageSize;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)animationTimerFired:(double)arg1 ;
@end

