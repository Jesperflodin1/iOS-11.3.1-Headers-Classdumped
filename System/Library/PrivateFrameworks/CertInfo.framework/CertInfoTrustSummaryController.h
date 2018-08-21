/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;
@class UIBarButtonItem, UITableViewCell;

@interface CertInfoTrustSummaryController : UITableViewController {

	id<CertInfoTrustDescription> _description;
	id<CertInfoTrustSummaryControllerDelegate> _delegate;
	UIBarButtonItem* _doneButton;
	UITableViewCell* _headerCell;
	UITableViewCell* _descriptionCell;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic,__weak) id<CertInfoTrustSummaryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton; 
-(id<CertInfoTrustSummaryControllerDelegate>)delegate;
-(void)setDelegate:(id<CertInfoTrustSummaryControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_actionButtonPressed:(id)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg1 ;
-(id)_headerCell;
-(id)_descriptionCell;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)initWithTrustDescription:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
@end

