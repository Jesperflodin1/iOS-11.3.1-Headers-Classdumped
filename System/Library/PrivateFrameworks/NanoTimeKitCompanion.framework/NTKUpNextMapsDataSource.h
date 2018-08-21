/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKUpNextElementDataSource.h>

@class NTKUpNextElementDataSource;

@interface NTKUpNextMapsDataSource : NTKUpNextElementDataSource {

	NTKUpNextElementDataSource* _proxy;

}

@property (nonatomic,readonly) NTKUpNextElementDataSource * proxy;              //@synthesize proxy=_proxy - In the implementation block
+(id)bundleIdentifier;
+(BOOL)wantsReloadForSignificantTimeChange;
+(id)sampleContentElements;
+(id)_homeCommuteElementWithDate:(id)arg1 headerTextProvider:(id)arg2 descriptionTextProvider:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)resume;
-(void)setRunning:(BOOL)arg1 ;
-(NTKUpNextElementDataSource *)proxy;
-(void)pause;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg1 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg1 ;
@end
