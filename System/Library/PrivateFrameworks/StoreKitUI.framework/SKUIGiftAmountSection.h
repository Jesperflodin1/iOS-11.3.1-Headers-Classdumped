/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class SKUIGiftAmountControl, UIControl, NSString;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {

	SKUIGiftAmountControl* _amountControl;

}

@property (nonatomic,readonly) UIControl * amountControl; 
@property (nonatomic,readonly) long long selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(UIControl *)amountControl;
-(long long)selectedAmount;
-(NSString *)selectedAmountString;
@end

