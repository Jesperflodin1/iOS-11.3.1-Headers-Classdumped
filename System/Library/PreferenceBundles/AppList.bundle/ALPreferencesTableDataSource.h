/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AppList.bundle/AppList
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libapplist.dylib/ALApplicationTableDataSource.h>
#import <AppList/ALValueCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@class ALApplicationPreferenceViewController, NSString;

@interface ALPreferencesTableDataSource : ALApplicationTableDataSource <ALValueCellDelegate, UITableViewDelegate> {

	ALApplicationPreferenceViewController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)valueCell:(id)arg1 didChangeToValue:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithController:(id)arg1 ;
@end

