/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class NSLayoutConstraint;

@interface QLVCFItemViewController : QLItemViewController {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
+(id)supportedContentTypes;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canSwipeToDismiss;
@end
