/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDragDestinationDelegate <NSObject>
@optional
-(long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;

@end

