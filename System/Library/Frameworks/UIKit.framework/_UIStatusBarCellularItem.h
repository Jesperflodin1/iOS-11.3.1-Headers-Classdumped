/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatusBarItem.h>

@class _UIStatusBarStringView, _UIStatusBarCellularSignalView, _UIStatusBarImageView;

@interface _UIStatusBarCellularItem : _UIStatusBarItem {

	_UIStatusBarStringView* _serviceNameView;
	_UIStatusBarCellularSignalView* _signalView;
	_UIStatusBarStringView* _networkTypeView;
	_UIStatusBarImageView* _sosView;

}

@property (nonatomic,retain) _UIStatusBarStringView * serviceNameView;                 //@synthesize serviceNameView=_serviceNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarCellularSignalView * signalView;              //@synthesize signalView=_signalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * networkTypeView;                 //@synthesize networkTypeView=_networkTypeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * sosView;                          //@synthesize sosView=_sosView - In the implementation block
+(id)signalStrengthDisplayIdentifier;
+(id)nameDisplayIdentifier;
+(id)typeDisplayIdentifier;
+(id)sosDisplayIdentifier;
-(id)init;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)_backgroundColorForUpdate:(id)arg1 ;
-(id)_fillColorForUpdate:(id)arg1 ;
-(_UIStatusBarCellularSignalView *)signalView;
-(void)setSignalView:(_UIStatusBarCellularSignalView *)arg1 ;
-(id)_stringForCellularType:(long long)arg1 ;
-(id)_fontForEntry:(id)arg1 baselineOffset:(double*)arg2 ;
-(_UIStatusBarStringView *)networkTypeView;
-(_UIStatusBarStringView *)serviceNameView;
-(_UIStatusBarImageView *)sosView;
-(void)setServiceNameView:(_UIStatusBarStringView *)arg1 ;
-(void)setNetworkTypeView:(_UIStatusBarStringView *)arg1 ;
-(void)setSosView:(_UIStatusBarImageView *)arg1 ;
@end

