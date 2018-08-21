/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLFacebookLoginInfoViewControllerDelegate;
@class SLFacebookLoginInfoFooter;

@interface SLFacebookLoginInfoViewController : UITableViewController {

	SLFacebookLoginInfoFooter* _footerView;
	id<SLFacebookLoginInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookLoginInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SLFacebookLoginInfoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookLoginInfoViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)_cancelTapped:(id)arg1 ;
-(void)_signInTapped:(id)arg1 ;
@end

