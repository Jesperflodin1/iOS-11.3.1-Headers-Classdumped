/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSString, HMHome, NSSet;

@interface HFServiceIconItemProvider : HFItemProvider {

	NSString* _serviceType;
	NSString* _serviceSubtype;
	HMHome* _home;
	NSSet* _iconItems;

}

@property (nonatomic,copy) NSSet * iconItems;                      //@synthesize iconItems=_iconItems - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;              //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(HMHome *)home;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(NSSet *)iconItems;
-(void)setIconItems:(NSSet *)arg1 ;
-(id)reloadItems;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
@end
