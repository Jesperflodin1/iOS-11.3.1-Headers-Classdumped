/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFKnownNetworksViewControllerDelegate.h>

@class NSString;

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushKnownNetworksOnParentViewController:(id)arg1 ;
-(id)getKnownNetworksList;
-(void)removeKnownNetworkWithSsid:(id)arg1 ;
-(id)getSecurityTypeStringForNetwork:(id)arg1 ;
-(id)getPasswordForNetwork:(id)arg1 ;
-(BOOL)isNetworkHidden:(id)arg1 ;
-(id)getDateAddedForNetwork:(id)arg1 ;
-(id)getDateLastJoinedForNetwork:(id)arg1 ;
-(BOOL)isNetworkBlacklisted:(id)arg1 ;
-(id)getScoreForNetwork:(id)arg1 ;
-(id)getGeoTagsForNetwork:(id)arg1 ;
@end

