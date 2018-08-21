/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray, NSString, NSArray;

@interface AssistiveTouchCustomizeBaseActionPickerController : AccessibilityBaseListController {

	NSMutableArray* _shownIcons;
	NSString* _selectedPopoverIcon;
	NSString* _selectedPopoverLocation;
	/*^block*/id _iconFilter;

}

@property (nonatomic,readonly) NSArray * shownIcons;                          //@synthesize shownIcons=_shownIcons - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverIcon;                  //@synthesize selectedPopoverIcon=_selectedPopoverIcon - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverLocation;              //@synthesize selectedPopoverLocation=_selectedPopoverLocation - In the implementation block
@property (nonatomic,copy) id iconFilter;                                     //@synthesize iconFilter=_iconFilter - In the implementation block
-(NSString *)selectedPopoverLocation;
-(NSArray *)shownIcons;
-(void)setSelectedPopoverLocation:(NSString *)arg1 ;
-(id)availableIcons;
-(void)setSelectedPopoverIcon:(NSString *)arg1 ;
-(void)astTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)selectedPopoverIcon;
-(void)astTableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)astNumberOfRowsInSection:(long long)arg1 ;
-(id)astPickerCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)iconFilter;
-(void)setIconFilter:(id)arg1 ;
-(void)loadView;
@end
