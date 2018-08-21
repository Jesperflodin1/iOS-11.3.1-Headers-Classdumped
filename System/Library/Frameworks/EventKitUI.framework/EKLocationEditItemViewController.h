/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKUILocationSearchModelDelegate.h>

@class UISearchBar, UITableView, _UINavigationControllerPalette, EKUILocationSearchModel, EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, NSString;

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKUILocationSearchModelDelegate> {

	UISearchBar* _searchBar;
	UITableView* _tableView;
	_UINavigationControllerPalette* _palette;
	EKUILocationSearchModel* _searchModel;
	EKCalendarItem* _calendarItem;
	CGSize _preferredContentSize;
	BOOL _supportsStructuredLocations;
	BOOL _tableConstraintsInstalled;
	BOOL _needsSave;
	BOOL _onlyDisplayMapLocations;
	EKStructuredLocation* _structuredLocation;
	EKStructuredLocation* _selectedLocation;
	EKUIConferenceRoom* _selectedConferenceRoom;

}

@property (nonatomic,retain) EKStructuredLocation * selectedLocation;                  //@synthesize selectedLocation=_selectedLocation - In the implementation block
@property (nonatomic,retain) EKUIConferenceRoom * selectedConferenceRoom;              //@synthesize selectedConferenceRoom=_selectedConferenceRoom - In the implementation block
@property (assign,nonatomic) BOOL needsSave;                                           //@synthesize needsSave=_needsSave - In the implementation block
@property (assign,nonatomic) BOOL onlyDisplayMapLocations;                             //@synthesize onlyDisplayMapLocations=_onlyDisplayMapLocations - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * structuredLocation;                //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sectionNameForSection:(unsigned long long)arg1 ;
-(BOOL)needsSave;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)title;
-(void)loadView;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)updateViewConstraints;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(BOOL)presentModally;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4 ;
-(EKStructuredLocation *)structuredLocation;
-(void)currentLocationUpdated:(id)arg1 ;
-(void)frequentsSearchUpdated:(id)arg1 ;
-(void)eventsSearchUpdated:(id)arg1 ;
-(id)calendarItemForSearchModel:(id)arg1 ;
-(void)conferenceRoomSearchUpdated:(id)arg1 ;
-(void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3 ;
-(void)setSelectedLocation:(EKStructuredLocation *)arg1 ;
-(BOOL)showingTextRow;
-(BOOL)showingCurrentLocationRow;
-(void)useAsString:(id)arg1 ;
-(void)setSelectedConferenceRoom:(EKUIConferenceRoom *)arg1 ;
-(id)greyPinImage;
-(id)locationArrowImage;
-(id)contactsImage;
-(id)redPinImage;
-(id)_cellForConferenceRoomRowInTableView:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)onlyDisplayMapLocations;
-(void)setOnlyDisplayMapLocations:(BOOL)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(EKStructuredLocation *)selectedLocation;
-(EKUIConferenceRoom *)selectedConferenceRoom;
-(void)contactsSearchUpdated:(id)arg1 ;
-(void)recentsSearchUpdated:(id)arg1 ;
-(void)mapSearchUpdated:(id)arg1 ;
@end

