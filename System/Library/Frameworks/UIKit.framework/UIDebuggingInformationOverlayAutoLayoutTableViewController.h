/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UITableView, NSString;

@interface UIDebuggingInformationOverlayAutoLayoutTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _verticalConstraints;
	NSArray* _horizontalConstraints;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * verticalConstraints;                //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraints;              //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(NSArray *)horizontalConstraints;
-(NSArray *)verticalConstraints;
-(void)switchChanged:(id)arg1 ;
-(void)refresh;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
@end
