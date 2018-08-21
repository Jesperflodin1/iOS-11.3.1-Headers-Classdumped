/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceItem, GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate;
@class MKPlaceSectionRowView, UIImageView, _MKUILabel, NSArray, UILayoutGuide, NSURL, _MKDataHeaderModel, _MKTokenAttributedString, NSLayoutConstraint, _MKLocalizedHoursBuilder, NSString;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver> {

	unsigned long long _layout;
	MKPlaceSectionRowView* _titleOnlySectionView;
	MKPlaceSectionRowView* _labelsSectionView;
	UIImageView* _logoImageView;
	_MKUILabel* _titleOnlyLabel;
	_MKUILabel* _firstLabel;
	_MKUILabel* _secondLabel;
	_MKUILabel* _thirdLabel;
	_MKUILabel* _thirdDisplayedLabel;
	NSArray* _constraints;
	UILayoutGuide* _leadingGuide;
	NSURL* _logoURL;
	_MKDataHeaderModel* _dataModel;
	_MKTokenAttributedString* _titleToken;
	_MKTokenAttributedString* _distanceToken;
	_MKTokenAttributedString* _ratingsToken;
	_MKTokenAttributedString* _priceToken;
	_MKTokenAttributedString* _categoryToken;
	_MKTokenAttributedString* _openStateToken;
	_MKTokenAttributedString* _hoursToken;
	_MKTokenAttributedString* _userLocationToken;
	_MKTokenAttributedString* _venueToken;
	_MKTokenAttributedString* _verifiedToken;
	NSLayoutConstraint* _titleTrailingConstraint;
	BOOL _isUserLocation;
	BOOL _optionSmallScreen;
	BOOL _constraintsCreated;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKPlaceCardHeaderViewControllerDelegate> _delegate;
	_MKLocalizedHoursBuilder* _localizedHoursBuilder;

}

@property (nonatomic,retain) _MKLocalizedHoursBuilder * localizedHoursBuilder;                         //@synthesize localizedHoursBuilder=_localizedHoursBuilder - In the implementation block
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                             //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                        //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardHeaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double contentAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimalModeHeight;
-(id<MKPlaceCardHeaderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceCardHeaderViewControllerDelegate>)arg1 ;
-(void)_commonInit;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleFont;
-(void)setContentAlpha:(double)arg1 ;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged:(id)arg1 ;
-(_MKLocalizedHoursBuilder *)localizedHoursBuilder;
-(void)hideTitle:(BOOL)arg1 ;
-(void)ETAProviderUpdated:(id)arg1 ;
-(void)updateHeaderTitle;
-(id<_MKPlaceItem>)placeItem;
-(id)newLabel;
-(id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(id)_currentTitle;
-(id)_verifiedText;
-(id)_reviewLabelText;
-(id)_openStateString;
-(id)_localizedHours;
-(void)_setupDatas;
-(BOOL)_willShowDistance;
-(void)_loadLogo;
-(BOOL)_mapItemShouldDisplayDistance:(id)arg1 ;
-(void)updateViews;
-(void)setConstraints;
-(void)setLocalizedHoursBuilder:(_MKLocalizedHoursBuilder *)arg1 ;
-(void)_createViews;
-(double)contentAlpha;
-(id<GEOTransitLineItem>)lineItem;
@end

