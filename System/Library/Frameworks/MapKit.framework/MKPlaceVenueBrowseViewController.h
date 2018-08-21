/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceVenueBrowseViewControllerDelegate, GEOVenueComponentIdentifier;
@class NSArray, MKVenuesBrowseCollectionView, MKFixedToTopCollectionViewFlowLayout, NSLayoutConstraint, UIFont, UIColor, MKMapItem, NSString;

@interface MKPlaceVenueBrowseViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, MKModuleViewControllerProtocol> {

	id<MKPlaceVenueBrowseViewControllerDelegate> _delegate;
	unsigned long long _venueID;
	id<GEOVenueComponentIdentifier> _componentIdentifier;
	NSArray* _browseItems;
	MKVenuesBrowseCollectionView* _collectionView;
	MKFixedToTopCollectionViewFlowLayout* _collectionViewFlowLayout;
	NSLayoutConstraint* _collectionViewBottomConstraint;
	UIFont* _preferredCellTitleLabelFont;
	UIColor* _cellTitleLabelTextColor;
	MKMapItem* _mapItem;
	CGSize _preferredCellSize;

}

@property (assign,nonatomic) unsigned long long venueID;                                                   //@synthesize venueID=_venueID - In the implementation block
@property (nonatomic,retain) id<GEOVenueComponentIdentifier> componentIdentifier;                          //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * browseItems;                                                        //@synthesize browseItems=_browseItems - In the implementation block
@property (nonatomic,retain) MKVenuesBrowseCollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) MKFixedToTopCollectionViewFlowLayout * collectionViewFlowLayout;              //@synthesize collectionViewFlowLayout=_collectionViewFlowLayout - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewBottomConstraint;                          //@synthesize collectionViewBottomConstraint=_collectionViewBottomConstraint - In the implementation block
@property (assign,nonatomic) CGSize preferredCellSize;                                                     //@synthesize preferredCellSize=_preferredCellSize - In the implementation block
@property (nonatomic,retain) UIFont * preferredCellTitleLabelFont;                                         //@synthesize preferredCellTitleLabelFont=_preferredCellTitleLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * cellTitleLabelTextColor;                                            //@synthesize cellTitleLabelTextColor=_cellTitleLabelTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                          //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceVenueBrowseViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canDisplayForMapItem:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(unsigned long long)venueID;
-(id)initWithMapItem:(id)arg1 ;
-(id<MKPlaceVenueBrowseViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceVenueBrowseViewControllerDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(MKVenuesBrowseCollectionView *)collectionView;
-(void)setCollectionView:(MKVenuesBrowseCollectionView *)arg1 ;
-(void)viewDidLoad;
-(void)setupCollectionView;
-(void)infoCardThemeChanged:(id)arg1 ;
-(double)collectionViewBottomPadding;
-(void)setPreferredCellSize:(CGSize)arg1 ;
-(void)updateCellTitleLabelTextColor;
-(int)placeCardTypeForAnalytics;
-(void)_ppt_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)setVenueID:(unsigned long long)arg1 ;
-(id<GEOVenueComponentIdentifier>)componentIdentifier;
-(void)setComponentIdentifier:(id<GEOVenueComponentIdentifier>)arg1 ;
-(NSArray *)browseItems;
-(void)setBrowseItems:(NSArray *)arg1 ;
-(MKFixedToTopCollectionViewFlowLayout *)collectionViewFlowLayout;
-(void)setCollectionViewFlowLayout:(MKFixedToTopCollectionViewFlowLayout *)arg1 ;
-(NSLayoutConstraint *)collectionViewBottomConstraint;
-(void)setCollectionViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)preferredCellSize;
-(UIFont *)preferredCellTitleLabelFont;
-(void)setPreferredCellTitleLabelFont:(UIFont *)arg1 ;
-(UIColor *)cellTitleLabelTextColor;
-(void)setCellTitleLabelTextColor:(UIColor *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

