/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/DOCNavigationBarOverwriteProtocol.h>

@class NSString, DOCConcreteLocation;

@interface DOCSnapshotBrowserViewController : UIViewController <DOCNavigationBarOverwriteProtocol> {

	BOOL _isTopNavigationItem;
	DOCConcreteLocation* _location;
	NSString* _overriddenTitle;
	NSString* _searchQuery;

}

@property (retain) DOCConcreteLocation * location;                  //@synthesize location=_location - In the implementation block
@property (retain) NSString * overriddenTitle;                      //@synthesize overriddenTitle=_overriddenTitle - In the implementation block
@property (assign) BOOL isTopNavigationItem;                        //@synthesize isTopNavigationItem=_isTopNavigationItem - In the implementation block
@property (retain) NSString * searchQuery;                          //@synthesize searchQuery=_searchQuery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotForLocation:(id)arg1 ;
+(id)snapshotForBrowser:(id)arg1 ;
-(NSString *)searchQuery;
-(void)setIsTopNavigationItem:(BOOL)arg1 ;
-(BOOL)isTopNavigationItem;
-(NSString *)overriddenTitle;
-(void)setOverriddenTitle:(NSString *)arg1 ;
-(DOCConcreteLocation *)location;
-(void)setLocation:(DOCConcreteLocation *)arg1 ;
-(void)setSearchQuery:(NSString *)arg1 ;
@end
