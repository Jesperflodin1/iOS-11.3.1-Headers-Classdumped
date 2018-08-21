/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/MKDynamicTransitUIContainer.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@protocol GEOTransitLineItem, MKTransitLineIncidentsViewControllerDelegate;
@class MKTransitItemIncidentsController, NSDate, NSString;

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKDynamicTransitUIContainer, MKStackingViewControllerPreferredSizeUse> {

	MKTransitItemIncidentsController* _incidentsController;
	id<GEOTransitLineItem> _lineItem;
	NSDate* _referenceDate;
	id<MKTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;

}

@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                                      //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSDate * referenceDate;                                                          //@synthesize referenceDate=_referenceDate - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate;              //@synthesize incidentsDelegate=_incidentsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)initWithLineItem:(id)arg1 ;
-(id)_incidents;
-(void)transitUIReferenceTimeUpdated:(id)arg1 ;
-(id)_incidentCellForRow:(long long)arg1 ;
-(NSDate *)referenceDate;
-(void)_moreIncidentDetailsSelected;
-(void)_dismissTransitIncidents;
-(id<MKTransitLineIncidentsViewControllerDelegate>)incidentsDelegate;
-(void)setIncidentsDelegate:(id<MKTransitLineIncidentsViewControllerDelegate>)arg1 ;
-(id)_headerView;
-(id<GEOTransitLineItem>)lineItem;
@end
