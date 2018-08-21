/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HUSoftwareUpdateInfoItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _softwareUpdateItems;

}

@property (nonatomic,retain) NSMutableSet * softwareUpdateItems;              //@synthesize softwareUpdateItems=_softwareUpdateItems - In the implementation block
@property (nonatomic,copy) id filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(NSMutableSet *)softwareUpdateItems;
-(void)setSoftwareUpdateItems:(NSMutableSet *)arg1 ;
-(id)initWithHome:(id)arg1 ;
@end
