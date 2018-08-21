/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLMicroBlogAccountsTableViewControllerDelegate;
@class NSArray, SLMicroBlogUserRecord, UIImage;

@interface SLMicroBlogAccountsTableViewController : UITableViewController {

	NSArray* _accountUserRecords;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	id<SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;
	UIImage* _blankImage;

}
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)didUpdateAccountUserRecord:(id)arg1 ;
-(void)setAccountUserRecords:(id)arg1 ;
-(void)setCurrentAccountUserRecord:(id)arg1 ;
-(id)_accountUserRecordForIndexPath:(id)arg1 ;
-(id)_blankImage;
-(void)setSelectionDelegate:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
@end

