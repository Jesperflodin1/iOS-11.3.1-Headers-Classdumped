/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol TSWPReferenceLibraryViewControllerDelegate;
@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController {

	id<TSWPReferenceLibraryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TSWPReferenceLibraryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TSWPReferenceLibraryViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

