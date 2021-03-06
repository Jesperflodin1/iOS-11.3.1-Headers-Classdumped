/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>

@protocol QLPrintingProtocol;
@class NSExtension, QLRemotePreviewHostContext, QLRemotePreviewHostViewController, NSDictionary, NSLayoutConstraint;

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol> {

	NSExtension* _extension;
	id _request;
	QLRemotePreviewHostContext* _hostContext;
	QLRemotePreviewHostViewController* _remoteViewController;
	NSDictionary* _hostConfiguration;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	id<QLPrintingProtocol> _printer;
	BOOL _visible;
	BOOL _fullScreen;

}
+(Class)transformerClass;
-(id)init;
-(void)dealloc;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)printer;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)previewControllerDidUpdateTitle:(id)arg1 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1 ;
-(BOOL)canSwipeToDismiss;
@end

