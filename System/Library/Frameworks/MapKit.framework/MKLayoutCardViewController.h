/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKStackingViewController.h>

@protocol MKLayoutCardProvider;
@class NSString, MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController {

	NSString* _appId;
	id<MKLayoutCardProvider> _configurationProvider;
	MKMapItem* _mapItem;
	NSMutableDictionary* _cacheVC;
	NSMutableDictionary* _cacheModuleType;

}

@property (nonatomic,retain) NSMutableDictionary * cacheVC;                      //@synthesize cacheVC=_cacheVC - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheModuleType;              //@synthesize cacheModuleType=_cacheModuleType - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithAppId:(id)arg1 configurationProvider:(id)arg2 ;
-(UIViewController*)_createViewControllerForModule:(id)arg1 ;
-(id)initWithAppId:(id)arg1 ;
-(BOOL)isTransitItem;
-(BOOL)isLayoutDynamic;
-(id)_layoutModuleForMapItem;
-(void)_createModuleLayout:(id)arg1 ;
-(UIViewController*)_cachedViewControllerForModule:(int)arg1 ;
-(double)_heightForSeparatorBetweenUpperViewController:(id)arg1 andLowerViewController:(id)arg2 ;
-(NSMutableDictionary *)cacheVC;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheModuleType;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
@end

