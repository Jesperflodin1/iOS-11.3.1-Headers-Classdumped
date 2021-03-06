/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableIndexSet, NSMutableArray, MFComposeRecipientTextView, NSArray, NSString;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableIndexSet* _selectedIndexes;
	NSMutableArray* _recipients;
	MFComposeRecipientTextView* _recipientView;

}

@property (nonatomic,readonly) NSArray * recipients;                                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) MFComposeRecipientTextView * recipientView;              //@synthesize recipientView=_recipientView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)recipients;
-(void)_didTapDoneButton:(id)arg1 ;
-(id)initWithRecentComposeRecipients:(id)arg1 ;
-(void)setRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)_dismissAndAddSelectedContacts;
-(MFComposeRecipientTextView *)recipientView;
@end

