/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;
@interface UIKBAlertController : UIAlertController {

	id<UIKBAlertControllerDelegate> _kbDelegate;

}

@property (assign,nonatomic) id<UIKBAlertControllerDelegate> kbDelegate;              //@synthesize kbDelegate=_kbDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<UIKBAlertControllerDelegate>)kbDelegate;
-(void)setKbDelegate:(id<UIKBAlertControllerDelegate>)arg1 ;
@end
