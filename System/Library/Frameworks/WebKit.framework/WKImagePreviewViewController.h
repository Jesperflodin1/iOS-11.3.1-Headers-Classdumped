/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewController.h>

@interface WKImagePreviewViewController : UIViewController {

	RetainPtr<NSArray>* _imageActions;
	RetainPtr<_WKActivatedElementInfo>* _activatedElementInfo;
	RetainPtr<CGImage *>* _image;
	RetainPtr<UIImageView>* _imageView;

}
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)previewActions;
-(id)initWithCGImage:(RetainPtr<CGImage *>*)arg1 defaultActions:(RetainPtr<NSArray>*)arg2 elementInfo:(RetainPtr<_WKActivatedElementInfo>*)arg3 ;
@end

