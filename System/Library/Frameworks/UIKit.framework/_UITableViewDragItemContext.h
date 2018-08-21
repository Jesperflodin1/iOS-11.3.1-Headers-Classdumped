/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableView, NSIndexPath;

@interface _UITableViewDragItemContext : NSObject {

	UITableView* _tableView;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UITableView *)tableView;
-(id)initWithIndexPath:(id)arg1 forTableView:(id)arg2 ;
@end
