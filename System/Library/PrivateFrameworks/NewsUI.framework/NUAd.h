/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString, NUAdBannerView, NSDate;

@interface NUAd : NSObject <NUAdContextProvider> {

	NSString* _identifier;
	NUAdBannerView* _bannerView;
	NSString* _opportunityIdentifier;
	NSDate* _creationDate;
	NSDate* _loadDate;
	NSDate* _unloadDate;
	unsigned long long _state;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NUAdBannerView * bannerView;                     //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) NSString * opportunityIdentifier;              //@synthesize opportunityIdentifier=_opportunityIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * loadDate;                               //@synthesize loadDate=_loadDate - In the implementation block
@property (nonatomic,retain) NSDate * unloadDate;                             //@synthesize unloadDate=_unloadDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NUAdBannerView *)bannerView;
-(NSDate *)creationDate;
-(NSDate *)loadDate;
-(void)setLoadDate:(NSDate *)arg1 ;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(NSString *)opportunityIdentifier;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithBanner:(id)arg1 identifier:(id)arg2 ;
-(NSDate *)unloadDate;
-(void)setUnloadDate:(NSDate *)arg1 ;
@end
