/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableHeaderView.h>

@class PKPaymentSetupProduct, NSArray, NSDictionary;

@interface PKReaderModeHeaderView : PKTableHeaderView {

	PKPaymentSetupProduct* _product;
	NSArray* _resourceKeys;
	long long _context;
	NSDictionary* _readerModeResources;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)layoutSubviews;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)_titleForState:(unsigned long long)arg1 ;
-(void)_configureForCurrentState;
-(id)_subtitleForState:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3 ;
@end

