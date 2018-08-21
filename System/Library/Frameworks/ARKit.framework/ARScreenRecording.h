/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface ARScreenRecording : NSObject {

	BOOL _saveInPhotosLibrary;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL saveInPhotosLibrary;                             //@synthesize saveInPhotosLibrary=_saveInPhotosLibrary - In the implementation block
-(UIViewController *)parentViewController;
-(void)stop;
-(void)start;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)alertUserWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)saveInPhotosLibrary;
-(void)setSaveInPhotosLibrary:(BOOL)arg1 ;
-(id)initWith:(id)arg1 ;
@end

