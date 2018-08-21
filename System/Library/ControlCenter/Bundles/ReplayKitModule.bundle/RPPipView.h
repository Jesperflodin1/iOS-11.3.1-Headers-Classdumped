/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/ReplayKitModule.bundle/ReplayKitModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface RPPipView : UIView {

	AVCaptureVideoPreviewLayer* _previewLayer;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
-(void)layoutSubviews;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)addPreviewLayer:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
@end

